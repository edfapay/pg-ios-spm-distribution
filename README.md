# EdfaPay Payment Gateway iOS SDK — Swift Package Manager distribution

[![Swift Package Manager](https://img.shields.io/badge/SPM-compatible-orange?logo=swift)](#1-installation)
[![iOS](https://img.shields.io/badge/iOS-13.0%2B-lightgrey?logo=apple)](#compatibility-matrix)
[![Swift](https://img.shields.io/badge/Swift-5.9%2B-orange?logo=swift)](#compatibility-matrix)
[![Xcode](https://img.shields.io/badge/Xcode-15%2B-blue?logo=xcode)](#compatibility-matrix)
[![License](https://img.shields.io/badge/License-Apache_2.0-lightgrey.svg)](https://www.apache.org/licenses/LICENSE-2.0)

This repository is the **Swift Package Manager distribution** for the EdfaPay Payment Gateway SDK on iOS. The framework itself is built upstream from a Kotlin Multiplatform codebase and shipped here as a prebuilt XCFramework — no source code lives here. Add it to your app via SPM, `import edfapay_pg_sdk`, and you get the full checkout, Apple Pay, transaction-lifecycle, and 3-D Secure 2 surface through a single entry point: `EdfaPgSdk.shared`.

> **Maintainer:** EdfaPay · **Status:** GA · **Support:** integration@edfapay.com

---

## Table of contents

1. [Highlights](#highlights)
2. [Compatibility matrix](#compatibility-matrix)
3. [Quickstart](#quickstart)
4. [Public API surface](#public-api-surface)
5. [Installation](#1-installation)
6. [Initialise once](#2-initialise-once)
7. [Bundled card checkout](#3-bundled-card-checkout)
8. [Apple Pay](#4-apple-pay)
9. [Direct sale (headless)](#5-direct-sale-headless)
10. [Post-sale operations](#6-post-sale-operations)
11. [Query transactions](#7-query-transactions)
12. [External payments (tabby / tamara / checkout / SADAD)](#8-external-payments-tabby--tamara--checkout--sadad)
13. [Environments](#9-environments)
14. [Security & compliance](#10-security--compliance)
15. [Error handling](#11-error-handling)
16. [Test cards & sandbox](#12-test-cards--sandbox)
17. [Versioning & releases](#13-versioning--releases)
18. [License & support](#14-license--support)

---

## Highlights

- **Prebuilt XCFramework.** Two slices — `ios-arm64` (device) and `ios-arm64-simulator` (Apple Silicon simulator). Nothing to compile locally.
- **Drop-in checkout UI.** A themeable card-input flow (three pre-built designs, English / Arabic) with built-in 3-D Secure 2 WebView handling. Presented as a full-screen `UIViewController`.
- **Headless mode.** Bypass the bundled UI when you already have a checkout — go straight to `EdfaPgSdk.shared.sale(...)` with your own card capture.
- **Apple Pay, natively.** Wired to `PKPaymentAuthorizationViewController` via `EdfaApplePaySheet`; you bring the merchant ID, the SDK drives the sheet and the decrypted-payload sale.
- **Full lifecycle.** Authorise, capture, refund, void, and recurring / MIT charges through one `async`-friendly Swift API.
- **External payment providers.** One unified call (`externalPayment`) routes to **tabby**, **tamara**, hosted **checkout** links, or **SADAD** — pick the provider via an enum, the SDK handles the body shape and path.
- **Ledger queries.** Paginated transaction search plus single-row helpers by UUID, merchant `orderId`, or RRN.
- **Security-first logging.** Curl-style request logs with API key, PAN (last-4 preserved), CVV, and recurring token redaction — opt-in via `enableLogs`.
- **Async / await.** Every transaction call is a Swift `async throws` method.

---

## Compatibility matrix

| Component | Minimum | Verified |
|---|---|---|
| iOS deployment target | **13.0** | 17.x |
| Swift | **5.9** | 5.10 |
| Xcode | **15.0** | 15.4+ |
| Swift tools (`Package.swift`) | **5.9** | — |
| Architectures | `ios-arm64` (device), `ios-arm64-simulator` (Apple Silicon simulator) | — |

> Intel Mac simulators (`ios-x64-simulator`) are not shipped by default. If you need that slice, contact EdfaPay support — it can be re-enabled at build time.

---

## Quickstart

**Goal:** add the package, initialise the SDK, and take your first SAR 1.00 sale in under five minutes.

### 1. Add the package

In Xcode: **File → Add Packages…**

```
https://github.com/edfapay/edfapay-spm-distribution.git
```

Pin to an exact version (recommended) — e.g. `Exact: 1.0.0-beta.1`. See [§1 Installation](#1-installation) for `Package.swift` and debug-variant pinning.

### 2. Initialise

```swift
import edfapay_pg_sdk

@main
struct iOSApp: App {
    init() {
        EdfaPgSdk.shared.enableLogs = true                  // optional
        EdfaPgSdk.shared.initialize(
            apiKey:  "YOUR_X_API_KEY",
            baseUrl: "https://app-api.edfapay.com"
        )
    }
    var body: some Scene { WindowGroup { ContentView() } }
}
```

### 3. Take a sale

```swift
Task {
    let result = try await EdfaPgSdk.shared.sale(request: saleRequest)
    // result is a JsonObject — read fields as needed
}
```

Full snippets in [§3 Bundled card checkout](#3-bundled-card-checkout) and [§5 Direct sale](#5-direct-sale-headless).

---

## Public API surface

The entire public API is reached through `EdfaPgSdk.shared` and the `CardPay` builder it hands you.

| Group | Entry point |
|---|---|
| Lifecycle | `EdfaPgSdk.shared.initialize(apiKey:baseUrl:)` · `EdfaPgSdk.shared.reinitialize(apiKey:baseUrl:)` · `EdfaPgSdk.shared.enableLogs` |
| Bundled card-pay UI | `EdfaPgSdk.shared.CardPay()` builder + `EdfaPayUi().create(onDismiss:)` |
| Direct sale | `EdfaPgSdk.shared.sale(request:)` |
| Apple Pay | `EdfaPgSdk.shared.applePay(request:)` + `EdfaApplePaySheet().present(…)` |
| Post-sale operations | `EdfaPgSdk.shared.void(transactionId:)` · `capture(transactionId:amount:)` · `refund(transactionId:amount:)` · `recurring(recurringRequest:)` |
| External payments | `EdfaPgSdk.shared.externalPayment(request:)` — tabby / tamara / hosted checkout / SADAD via `ExternalPaymentMethod` |
| Query | `EdfaPgSdk.shared.getTransactions(filter:)` · `getTransactionById(id:)` · `getTransactionByOrderId(orderId:)` · `getTransactionByRrn(rrn:)` |

All transaction calls are `async throws` — invoke from a Swift `Task { try await … }`.

### Public types

`TransactionFilter`, `PageDto`, `SaleRequest`, `ApplePayRequest`, `RecurringRequest`, `Order`, `EdfaPgSaleOrder`, `EdfaPgPayer`, `EdfaPgPayerOptions`, `EdfaPgCard`, `Extra`, `EdfaPayDesignType`, `EdfaPayLanguage`, `EdfaPgSdkIsNotInitializedException`, `ExternalPaymentMethod`, `ExternalPaymentRequest`, `ExternalPaymentAdditionalData`, `InvoiceDto`, `LineItemDto`, `CustomerDto`, `BillingAddressDto`, `CardDto`, `ApplePayCustomerDto`, `ApplePayCardDto`, `EdfaPayUi`, `EdfaApplePaySheet`.

---

## 1. Installation

The package exposes one product — `edfapay_pg_sdk` — backed by a `.binaryTarget` that points at the prebuilt XCFramework zip committed alongside `Package.swift` at each release tag.

### Two release variants per version

Every version is published as **two annotated tags**:

| Tag | Symbols | When to use |
|---|---|---|
| `<version>` (e.g. `1.0.0-beta.1`) | dSYMs stripped | Production builds. Smaller binary, no symbolication of crashes inside the SDK. |
| `debug-<version>` (e.g. `debug-1.0.0-beta.1`) | Full dSYMs | Active development / local debugging. Larger binary, symbolicates into SDK frames. |

Pick the variant per build configuration — most teams pin to the release tag and lean on Apple's crash reports + the gateway dashboard for production incidents.

### 1.1 Adding via Xcode UI

**File → Add Packages…** and enter:

```
https://github.com/edfapay/edfapay-spm-distribution.git
```

Choose **Exact Version** and enter the tag (e.g. `1.0.0-beta.1`). Add the **`edfapay_pg_sdk`** product to your app target.

### 1.2 Adding via `Package.swift`

```swift
// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "YourApp",
    platforms: [.iOS(.v13)],
    dependencies: [
        .package(
            url: "https://github.com/edfapay/edfapay-spm-distribution.git",
            exact: "1.0.0-beta.1"           // or "debug-1.0.0-beta.1" for symbols
        )
    ],
    targets: [
        .target(
            name: "YourApp",
            dependencies: [
                .product(name: "edfapay_pg_sdk", package: "edfapay-spm-distribution")
            ]
        )
    ]
)
```

### 1.3 What gets linked

The package vends a `.binaryTarget` that resolves at fetch time. SPM extracts `edfapay_pg_sdk.xcframework.zip` into your DerivedData and links `edfapay_pg_sdk.framework` into your app. The Swift module name is **`edfapay_pg_sdk`** — that's what you `import`.

```swift
import edfapay_pg_sdk
```

> The CocoaPods pod (named `EdfaPayPgSdk`) and any prior manual XCFramework drop both expose the same `edfapay_pg_sdk` module — code written against one channel is source-compatible across all three.

---

## 2. Initialise once

Initialise from your app entry point (SwiftUI `App.init()`, or `application(_:didFinishLaunchingWithOptions:)` in UIKit). The SDK is process-wide and cannot be re-initialised with the same `initialize` call — use `reinitialize(...)` only if you genuinely need to rotate credentials at runtime (e.g. switching merchant accounts).

```swift
import edfapay_pg_sdk
import SwiftUI

@main
struct iOSApp: App {
    init() {
        #if DEBUG
        EdfaPgSdk.shared.enableLogs = true                  // redacted curl-style logs
        #endif
        EdfaPgSdk.shared.initialize(
            apiKey:  "YOUR_X_API_KEY",
            baseUrl: "https://app-api.edfapay.com"
        )
    }
    var body: some Scene { WindowGroup { ContentView() } }
}
```

Any later call without a successful `initialize` throws `EdfaPgSdkIsNotInitializedException`.

---

## 3. Bundled card checkout

The bundled UI is presented as a full-screen `UIViewController` produced by `EdfaPayUi().create(onDismiss:)`. Build a `CardPay` request via the fluent builder, attach success / failure callbacks, then present the view controller from your app.

```swift
import edfapay_pg_sdk
import UIKit

func presentCheckout(from rootVC: UIViewController) {
    let order = EdfaPgSaleOrder(
        id:          UUID().uuidString,
        amount:      1.00,
        currency:    "SAR",
        description: "Sample order"
    )
    let payer = EdfaPgPayer(
        firstName: "First",
        lastName:  "Last",
        address:   "Street 1",
        country:   "SA",
        city:      "Riyadh",
        zip:       "12345",
        email:     "customer@example.com",
        phone:     "+966500000000",
        ip:        "203.0.113.10",
        options:   nil
    )

    let cardPay = EdfaPgSdk.shared.CardPay()
    _ = cardPay.setOrder(order: order)
    _ = cardPay.setPayer(payer: payer)
    _ = cardPay.setDesignType(designType: EdfaPayDesignType.one)   // .one | .two | .three
    _ = cardPay.setLanguage(language: EdfaPayLanguage.en)           // .en | .ar
    _ = cardPay.setAuth(auth: false)                                // true = pre-auth (capture later)
    _ = cardPay.setResultUrls(
        successUrl: "https://edfapay.com/process-completed",
        failureUrl: "https://edfapay.com/process-failed"
    )
    _ = cardPay.onTransactionSuccess(callback: { result in
        print("OK: \(String(describing: result))")
    })
    _ = cardPay.onTransactionFailure(callback: { error in
        print("FAIL: \(error ?? "unknown")")
    })

    let checkoutVC = EdfaPayUi().create(onDismiss: {
        rootVC.dismiss(animated: true)
    })
    checkoutVC.modalPresentationStyle = .fullScreen
    rootVC.present(checkoutVC, animated: true)
}
```

### Bypass the bundled card-input form

Pass an `EdfaPgCard` and the SDK skips the design 1/2/3 input UI, jumping straight to the sale + 3-D Secure WebView. Useful for stored-credential flows where your app already collected the card.

```swift
let card = EdfaPgCard(
    number:      "5123450000000008",
    expireMonth: 1,
    expireYear:  2039,
    cvv:         "100"
)
_ = cardPay.setCard(card: card)
```

### Recurring / MIT enrolment

Enrol the first sale so subsequent merchant-initiated charges can use the returned token:

```swift
_ = cardPay.setRecurring(channelId: "channel-id", recurring: true)
```

### Theming the design

`EdfaPayDesignType` ships three pre-built layouts (`.one`, `.two`, `.three`) and `EdfaPayLanguage` toggles `.en` / `.ar`. Pick one per checkout — the layouts are independent designs, not skins of the same form.

---

## 4. Apple Pay

Apple Pay is presented via `EdfaApplePaySheet`, which wraps `PKPaymentAuthorizationViewController`. Your app must have the **Apple Pay** capability enabled in Xcode and a valid merchant identifier registered with Apple.

```swift
import edfapay_pg_sdk
import PassKit

EdfaApplePaySheet().present(
    fromViewController: rootVC,
    countryCode:        "SA",
    currencyCode:       "SAR",
    merchantName:       "Your Store",
    order:              order,
    payer:              payer,
    successUrl:         "https://edfapay.com/process-completed",
    failureUrl:         "https://edfapay.com/process-failed",
    onSuccess:   { finalUrl in /* … */ },
    onFailure:   { finalUrl in /* … */ },
    onCancelled: { /* … */ }
)
```

The merchant certificate is tied to your Apple Developer account, not passed in SDK calls. EdfaPay merchant-id ↔ Apple merchant-id mapping is configured per-merchant in the EdfaPay dashboard.

### Direct Apple Pay sale (headless)

If you already drive the `PKPayment` sheet yourself and just need to settle the decrypted payload, call `applePay(request:)` directly:

```swift
Task {
    let response = try await EdfaPgSdk.shared.applePay(request: applePayRequest)
}
```

---

## 5. Direct sale (headless)

Skip the bundled UI and post your own card data straight to the gateway. **You become PCI-relevant** when you do this — scope to SAQ-A-EP and never log raw PANs.

```swift
Task {
    let response = try await EdfaPgSdk.shared.sale(
        request: SaleRequest(
            orderId:       UUID().uuidString,
            amount:        1.00,
            currency:      "SAR",
            paymentMethod: "card",
            auth:          "N",
            recurringInit: "N",
            customer:      customerDto,
            billingAddress: billingAddressDto,
            invoice:       invoiceDto,
            successUrl:    "https://edfapay.com/process-completed",
            failureUrl:    "https://edfapay.com/process-failed",
            hash:          "<computed-hash>",
            card:          cardDto
        )
    )
    // response is a JsonObject — read fields as needed
}
```

The `hash` is computed by the SDK from your API key + payload-identifying fields — it's required by the gateway as a tamper check on every payment-affecting call.

---

## 6. Post-sale operations

```swift
Task {
    let voided    = try await EdfaPgSdk.shared.void(transactionId: txId)
    let refunded  = try await EdfaPgSdk.shared.refund(transactionId: txId, amount: 0.50)
    let captured  = try await EdfaPgSdk.shared.capture(transactionId: txId, amount: 1.00)
    let recurring = try await EdfaPgSdk.shared.recurring(recurringRequest: recurringBody)
}
```

**Semantics**

| Op | Pre-condition | What it does |
|---|---|---|
| `void` | Authorised, not yet captured/settled. | Cancels the auth. |
| `capture` | Pre-authorised (sale with `auth = "Y"`). | Settles up to the authorised amount. |
| `refund` | Captured / settled. | Returns funds, partial or full. |
| `recurring` | Initial sale enrolled with `recurringInit = "Y"`. | Charges using the stored `recurringToken`. |

---

## 7. Query transactions

```swift
Task {
    // Paginated query
    let page = try await EdfaPgSdk.shared.getTransactions(
        filter: TransactionFilter(
            pageNumber: 0,
            pageSize:   20,
            rrn:        nil,
            status:     "APPROVED",
            id:         nil,
            orderId:    nil
        )
    )

    // Single-row convenience helpers
    let byUuid  = try await EdfaPgSdk.shared.getTransactionById(id: "a1b2c3d4-…-ef01")
    let byOrder = try await EdfaPgSdk.shared.getTransactionByOrderId(orderId: "ORDER-1234")
    let byRrn   = try await EdfaPgSdk.shared.getTransactionByRrn(rrn: "123456789012")
}
```

All four return `nil` when the call fails or no row matches. The single-row helpers are equivalent to `getTransactions(filter: TransactionFilter(pageSize: 1, …)).content.first`.

---

## 8. External payments (tabby / tamara / checkout / SADAD)

A single call — `EdfaPgSdk.shared.externalPayment(request:)` — covers four external providers. The provider is picked via `ExternalPaymentMethod`; the SDK derives the API path, `paymentType`, and the right body shape (flat for tabby / tamara / checkout, nested for SADAD).

```swift
Task {
    let request = ExternalPaymentRequest(
        orderId:       "ORDER-1234",
        paymentMethod: .tabby,                             // or .tamara, .checkout, .sadad
        amount:        5000,                               // minor units — SAR 50.00
        currency:      "SAR",
        phoneNumber:   "+966500000000",
        email:         "customer@example.com",
        additionalData: ExternalPaymentAdditionalData(storeId: "STORE-123")
    )
    let response = try await EdfaPgSdk.shared.externalPayment(request: request)
    // response is a JsonObject — read `checkoutDeeplink`, `checkoutId`, etc.
}
```

**SADAD** uses the nested shape — pass `customerDetails` (a `CustomerDto`); `address`, `invoice`, `issueDate`, and `expireDate` are all auto-defaulted when omitted. `expiryInMinutes` controls the bill lifetime (default: 10 080 minutes = 7 days).

```swift
Task {
    let request = ExternalPaymentRequest(
        orderId:       "ORDER-1234",
        paymentMethod: .sadad,
        amount:        5000,                               // minor units — SAR 50.00
        currency:      "SAR",
        customerDetails: CustomerDto(
            name:      "First Last",
            email:     "customer@example.com",
            phone:     "+966500000000",
            idNumber:  "",                                  // optional — pass empty when not collected
            idType:    "",
            taxNumber: ""
        ),
        // Optional — omit to let the SDK fill `address` with a SA / Riyadh default.
        address: BillingAddressDto(
            country: "SA",
            state:   "Riyadh",
            city:    "Riyadh",
            address: "King Fahd Rd",
            zip:     "12345"
        ),
        // Optional — omit to let the SDK send a single zero-priced placeholder line item.
        // Amounts in `InvoiceDto` are in major units (SAR), not minor.
        invoice: InvoiceDto(
            shippingCharges: 0.0,
            extraCharges:    0.0,
            extraDiscount:   0.0,
            total:           50.0,
            lineItems: [
                LineItemDto(
                    sku:            "SKU-001",
                    description:    "Subscription — June",
                    url:            "",
                    unitCost:       50.0,
                    quantity:       1,
                    netTotal:       50.0,
                    discountRate:   0.0,
                    discountAmount: 0.0,
                    taxRate:        0.0,
                    taxTotal:       0.0,
                    total:          50.0
                )
            ]
        ),
        expiryInMinutes: 60                                 // optional — bill expires 1 hour from now (default: 7 days)
    )
    let response = try await EdfaPgSdk.shared.externalPayment(request: request)
    let sadadNumber = response["sadadNumber"]
    let billNumber  = response["billNumber"]
}
```

> **Note on amounts.** The top-level `amount` is in **minor units** (`5000` for SAR 50). `InvoiceDto` / `LineItemDto` amounts are in **major units** (`50.0`). The gateway reconciles both sides.
>
> **Note on dates.** SADAD bill dates are sent in `yyyy-MM-dd` format. `expiryInMinutes` is rounded to the **end of the day** that "`now + expiryInMinutes`" falls in — so `expiryInMinutes = 30` typically expires at the end of today.

**Unified response shape:**

| Field | Tabby | Tamara | Checkout | SADAD |
|---|---|---|---|---|
| `paymentMethod` | `tabby` | `tamara` | `checkout` | `sadad` |
| `checkoutDeeplink` | ✅ (`checkoutUrl`) | ✅ | ✅ (`redirectUrl`) | — |
| `checkoutId` | ✅ (`sessionId`) | ✅ | — | — |
| `transactionId` | ✅ | ✅ | ✅ (`id`) | ✅ |
| `paymentGatewayTransactionId` | ✅ (`paymentId`) | ✅ | — | — |
| `sadadNumber` / `billNumber` | — | — | — | ✅ |
| `status` | ✅ | ✅ | ✅ | ✅ |

The SDK canonicalises per-provider aliases (tabby `sessionId` → `checkoutId`, tabby `paymentId` → `paymentGatewayTransactionId`, link checkout `redirectUrl` → `checkoutDeeplink`) so your host code reads the same keys regardless of provider.

### Checking final transaction status

> ⚠️ The `externalPayment` response only confirms that the **provider session was created** — the customer has not paid yet. Settlement happens after they redirect to the provider (tabby / tamara / hosted checkout) or pay the SADAD bill from their banking app, and the SDK is not in the loop for that step.

You are responsible for verifying the **final** status with one of the query helpers from [§7](#7-query-transactions) before fulfilling the order. Recommended pattern:

- **tabby / tamara / hosted checkout** — after the `SFSafariViewController` / `WKWebView` dismisses (success URL, failure URL, or user-cancelled), call `getTransactionByOrderId(orderId:)` or `getTransactionById(id:)` and inspect `transactionStatus` / `paymentStatus`.
- **SADAD** — payment is asynchronous. Poll `getTransactionByOrderId(orderId:)` on a backoff (e.g. every 5–30 s while the app is in foreground), or rely on a server-side webhook and only re-query when your backend signals "ready". The bill is valid until `expireDate` (computed from `expiryInMinutes`; default 10 080 = 7 days).

```swift
Task {
    guard let tx = try await EdfaPgSdk.shared.getTransactionByOrderId(orderId: "ORDER-1234") else {
        return  // unknown — try again later
    }
    switch (tx["transactionStatus"] as? String)?.uppercased() {
    case "APPROVED", "SUCCESS", "SETTLED": fulfilOrder(tx)
    case "DECLINED", "FAILED":              showFailure(tx)
    default:                                break    // still pending — re-query later
    }
}
```

**Never** treat the `externalPayment` response alone as proof of payment, and **never** retry `externalPayment` for the same `orderId` without first querying the gateway — duplicate sessions can result in duplicate charges once the customer pays.

---

## 9. Environments

| Environment | `baseUrl` | Purpose |
|---|---|---|
| Production | `https://app-api.edfapay.com` | Live cards, real settlement. |
| Staging / sandbox | Issued per-merchant by EdfaPay support. | Test cards, no settlement. |

Contact integration@edfapay.com to obtain staging credentials and your merchant configuration.

### Switching environments at runtime

```swift
EdfaPgSdk.shared.reinitialize(apiKey: newKey, baseUrl: newBaseUrl)
```

`reinitialize` is the sanctioned way to rotate credentials inside a running process. Use sparingly — typically only when your app supports user-selectable merchant accounts or a dev/sandbox toggle.

---

## 10. Security & compliance

### PCI DSS scope

The SDK is designed so that **your application stays out of PCI scope** when you use the bundled `CardPay` UI:

- Card data is captured inside the SDK's UI, sent via TLS direct to EdfaPay, and never persisted in your process.
- 3-D Secure 2 challenges are rendered in an in-SDK WebView; the issuer's domain is the only target of the challenge form.
- Logs **redact** the API key, PAN (last 4 preserved), CVV, and recurring tokens before they reach Console.

If you go headless (`EdfaPgSdk.shared.sale(...)` with your own card capture), **you become PCI-relevant**. Scope to SAQ-A-EP and never log raw PANs.

### Transport security

- TLS 1.2+ enforced by the underlying Darwin HTTP engine.
- The `X-API-KEY` header is attached to every request automatically — **never** put it in URLs, query strings, or logs.
- Every payment-affecting call is signed with an operation hash derived from your API key plus payload-identifying fields. The SDK handles this for you.

### Storage on device

- The SDK does not write card numbers, CVVs, or tokens to disk.
- Your app is responsible for any persistence of `transactionId` / `recurringToken` (treat them as sensitive customer data — use Keychain).

### Strong customer authentication (SCA)

3-D Secure 2 is automatic when the issuer requires it. The WebView is presented full-screen by the SDK; the final result returns through `onTransactionSuccess` / `onTransactionFailure`.

### Responsible disclosure

Found a security issue? Email **security@edfapay.com** — please do not file a public issue.

---

## 11. Error handling

All `EdfaPgSdk.shared.*` async functions return a JSON object (or `nil` for queries). The structure mirrors EdfaPay's gateway response:

```json
{
  "result":   "SUCCESS",
  "status":   "APPROVED",
  "orderId":  "ORDER-1234",
  "id":       "a1b2c3d4-…-ef01",
  "rrn":      "123456789012",
  "amount":   "1.00",
  "currency": "SAR",
  "errorCode":   null,
  "errorMessage": null
}
```

**Failure shape (built by the SDK when the gateway returns no `data`):**

```json
{ "errorCode": "500", "message": "<gateway message>" }
```

### Recommended host pattern

```swift
do {
    let result = try await EdfaPgSdk.shared.sale(request: request)
    switch result["result"] as? String {
    case "SUCCESS": onSuccess(result)
    default:        onFailure(result["errorMessage"] as? String)
    }
} catch let e as EdfaPgSdkIsNotInitializedException {
    bootstrapSdk()
} catch {
    logAndReport(error)
}
```

### Common errors

| Error | Cause | Remediation |
|---|---|---|
| `EdfaPgSdkIsNotInitializedException` | Calling any SDK API before `initialize` / after process death. | Re-call `EdfaPgSdk.shared.initialize(...)` from your app `init()`. |
| `IllegalStateException("already initialized")` | Calling `initialize` twice. | Use `reinitialize(...)` if you must rotate keys. |
| Serialization error | Backend returned a schema you did not expect (custom gateway flags). | Parse defensively — the response is a JSON object, not a fixed DTO. |
| Network / timeout | Network failure or backend timeout. | Retry idempotent queries; **never** retry `sale` without consulting `getTransactionByOrderId` first. |

### Idempotency guidance

`sale`, `applePay`, and `recurring` are **not idempotent** by default. Always pre-generate your `orderId`, and before retrying a timed-out sale call `EdfaPgSdk.shared.getTransactionByOrderId(orderId:)` to see if the gateway already booked the charge.

---

## 12. Test cards & sandbox

Use only in the staging environment supplied by EdfaPay support.

| Card brand | Number | Expiry | CVV | Outcome |
|---|---|---|---|---|
| Mastercard (3-DS frictionless) | `5123 4500 0000 0008` | `01 / 39` | `100` | Approved |
| Visa (3-DS challenge) | `4111 1111 1111 1111` | `01 / 39` | `123` | Approved after challenge |
| Decline | `4000 0000 0000 0002` | `01 / 39` | `123` | Declined by issuer |

For Apple Pay sandbox flows, follow Apple's **[Sandbox Testing](https://developer.apple.com/apple-pay/sandbox-testing/)** guide and use the sandbox test cards Apple issues to your sandbox iCloud account. EdfaPay merchant-id mapping is configured per-merchant in the staging dashboard.

---

## 13. Versioning & releases

The SDK follows **Semantic Versioning** (`MAJOR.MINOR.PATCH[-prerelease]`).

| Bump | Triggers |
|---|---|
| `MAJOR` | Breaking changes to the `EdfaPgSdk` API or any public data model. |
| `MINOR` | New methods, new design types, new query helpers. Source-compatible. |
| `PATCH` | Bug fixes, dependency bumps, redaction-rule tightening. |

Every version ships as **two annotated tags** — `<version>` (release, dSYMs stripped) and `debug-<version>` (debug, full dSYMs). Pin to an exact tag in production; consumer `Package.resolved` files lock to a specific tag and tag rewrites would break reproducible builds.

Read the [GitHub release notes](https://github.com/edfapay/edfapay-spm-distribution/releases) before upgrading across a `MAJOR` boundary.

---

## 14. License & support

Licensed under the **[Apache License 2.0](https://www.apache.org/licenses/LICENSE-2.0)** (also carried in `LICENSE.txt` at the root of this repository).

| Channel | Contact |
|---|---|
| Integration support | integration@edfapay.com |
| Security disclosures | security@edfapay.com |
| Merchant onboarding | sales@edfapay.com |
| Documentation portal | [guides.edfapay.com/docs/payment-gateway](https://guides.edfapay.com/docs/payment-gateway) |

Consult your EdfaPay merchant agreement for SLA, branding, settlement, and compliance terms.
