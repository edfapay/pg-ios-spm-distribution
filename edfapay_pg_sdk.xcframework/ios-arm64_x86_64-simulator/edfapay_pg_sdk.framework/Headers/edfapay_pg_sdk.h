#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class EdfaApplePaySheetCompanion, Edfapay_pg_sdkApplePayCardDto, Edfapay_pg_sdkApplePayCardDtoCompanion, Edfapay_pg_sdkApplePayCustomerDto, Edfapay_pg_sdkApplePayCustomerDtoCompanion, Edfapay_pg_sdkApplePayRequest, Edfapay_pg_sdkApplePayRequestCompanion, Edfapay_pg_sdkBillingAddressDto, Edfapay_pg_sdkBillingAddressDtoCompanion, Edfapay_pg_sdkCardBackState, Edfapay_pg_sdkCardDto, Edfapay_pg_sdkCardDtoCompanion, Edfapay_pg_sdkCardPay, Edfapay_pg_sdkCustomerDto, Edfapay_pg_sdkCustomerDtoCompanion, Edfapay_pg_sdkEdfaPayDesignType, Edfapay_pg_sdkEdfaPayLanguage, Edfapay_pg_sdkEdfaPgCard, Edfapay_pg_sdkEdfaPgCardCompanion, Edfapay_pg_sdkEdfaPgPayer, Edfapay_pg_sdkEdfaPgPayerCompanion, Edfapay_pg_sdkEdfaPgPayerOptions, Edfapay_pg_sdkEdfaPgPayerOptionsCompanion, Edfapay_pg_sdkEdfaPgSaleOptions, Edfapay_pg_sdkEdfaPgSaleOptionsCompanion, Edfapay_pg_sdkEdfaPgSaleOrder, Edfapay_pg_sdkEdfaPgSaleOrderCompanion, Edfapay_pg_sdkEdfaPgSdk, Edfapay_pg_sdkEdfaPgSdkIsNotInitializedExceptionCompanion, Edfapay_pg_sdkExecuteData, Edfapay_pg_sdkExecuteDataCompanion, Edfapay_pg_sdkExternalPaymentAdditionalData, Edfapay_pg_sdkExternalPaymentAdditionalDataCompanion, Edfapay_pg_sdkExternalPaymentMethod, Edfapay_pg_sdkExternalPaymentMethodCompanion, Edfapay_pg_sdkExternalPaymentRequest, Edfapay_pg_sdkExternalPaymentRequestCompanion, Edfapay_pg_sdkExtra, Edfapay_pg_sdkExtraCompanion, Edfapay_pg_sdkInvoiceDto, Edfapay_pg_sdkInvoiceDtoCompanion, Edfapay_pg_sdkKotlinArray<T>, Edfapay_pg_sdkKotlinEnum<E>, Edfapay_pg_sdkKotlinEnumCompanion, Edfapay_pg_sdkKotlinException, Edfapay_pg_sdkKotlinIllegalArgumentException, Edfapay_pg_sdkKotlinIllegalStateException, Edfapay_pg_sdkKotlinNothing, Edfapay_pg_sdkKotlinRuntimeException, Edfapay_pg_sdkKotlinThrowable, Edfapay_pg_sdkKotlinx_datetimeDayOfWeek, Edfapay_pg_sdkKotlinx_datetimeDayOfWeekNames, Edfapay_pg_sdkKotlinx_datetimeDayOfWeekNamesCompanion, Edfapay_pg_sdkKotlinx_datetimeLocalDate, Edfapay_pg_sdkKotlinx_datetimeLocalDateCompanion, Edfapay_pg_sdkKotlinx_datetimeLocalDateProgression, Edfapay_pg_sdkKotlinx_datetimeLocalDateProgressionCompanion, Edfapay_pg_sdkKotlinx_datetimeLocalDateRange, Edfapay_pg_sdkKotlinx_datetimeLocalDateRangeCompanion, Edfapay_pg_sdkKotlinx_datetimeMonth, Edfapay_pg_sdkKotlinx_datetimeMonthNames, Edfapay_pg_sdkKotlinx_datetimeMonthNamesCompanion, Edfapay_pg_sdkKotlinx_datetimePadding, Edfapay_pg_sdkKotlinx_serialization_coreSerialKind, Edfapay_pg_sdkKotlinx_serialization_coreSerializersModule, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElementCompanion, Edfapay_pg_sdkLineItemDto, Edfapay_pg_sdkLineItemDtoCompanion, Edfapay_pg_sdkOrder, Edfapay_pg_sdkOrderCompanion, Edfapay_pg_sdkPageDto<T>, Edfapay_pg_sdkPageDtoCompanion, Edfapay_pg_sdkRecurringRequest, Edfapay_pg_sdkRecurringRequestCompanion, Edfapay_pg_sdkSaleRequest, Edfapay_pg_sdkSaleRequestCompanion, Edfapay_pg_sdkTransactionContentDto, Edfapay_pg_sdkTransactionContentDtoCompanion, Edfapay_pg_sdkTransactionFilter, UIViewController;

@protocol Edfapay_pg_sdkKotlinAnnotation, Edfapay_pg_sdkKotlinAppendable, Edfapay_pg_sdkKotlinClosedRange, Edfapay_pg_sdkKotlinCollection, Edfapay_pg_sdkKotlinComparable, Edfapay_pg_sdkKotlinIterable, Edfapay_pg_sdkKotlinIterator, Edfapay_pg_sdkKotlinKAnnotatedElement, Edfapay_pg_sdkKotlinKClass, Edfapay_pg_sdkKotlinKClassifier, Edfapay_pg_sdkKotlinKDeclarationContainer, Edfapay_pg_sdkKotlinOpenEndRange, Edfapay_pg_sdkKotlinx_datetimeDateTimeFormat, Edfapay_pg_sdkKotlinx_datetimeDateTimeFormatBuilder, Edfapay_pg_sdkKotlinx_datetimeDateTimeFormatBuilderWithDate, Edfapay_pg_sdkKotlinx_datetimeDateTimeFormatBuilderWithYearMonth, Edfapay_pg_sdkKotlinx_serialization_coreCompositeDecoder, Edfapay_pg_sdkKotlinx_serialization_coreCompositeEncoder, Edfapay_pg_sdkKotlinx_serialization_coreDecoder, Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy, Edfapay_pg_sdkKotlinx_serialization_coreEncoder, Edfapay_pg_sdkKotlinx_serialization_coreKSerializer, Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor, Edfapay_pg_sdkKotlinx_serialization_coreSerializationStrategy, Edfapay_pg_sdkKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface Edfapay_pg_sdkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface Edfapay_pg_sdkBase (Edfapay_pg_sdkBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface Edfapay_pg_sdkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Edfapay_pg_sdkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorEdfapay_pg_sdkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface Edfapay_pg_sdkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface Edfapay_pg_sdkByte : Edfapay_pg_sdkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface Edfapay_pg_sdkUByte : Edfapay_pg_sdkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface Edfapay_pg_sdkShort : Edfapay_pg_sdkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface Edfapay_pg_sdkUShort : Edfapay_pg_sdkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface Edfapay_pg_sdkInt : Edfapay_pg_sdkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface Edfapay_pg_sdkUInt : Edfapay_pg_sdkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface Edfapay_pg_sdkLong : Edfapay_pg_sdkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface Edfapay_pg_sdkULong : Edfapay_pg_sdkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface Edfapay_pg_sdkFloat : Edfapay_pg_sdkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface Edfapay_pg_sdkDouble : Edfapay_pg_sdkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface Edfapay_pg_sdkBoolean : Edfapay_pg_sdkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * Public façade for configuring a card payment. Obtain via [EdfaPgSdk.CardPay].
 *
 * Each instance ties itself to the SDK's process-singleton card-pay state at construction,
 * so chained calls on the most recently created [CardPay] are what the bundled UI reads
 * when [initialize] mounts. Recreate one per checkout.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardPay")))
@interface Edfapay_pg_sdkCardPay : Edfapay_pg_sdkBase
- (Edfapay_pg_sdkCardPay *)onTransactionFailureCallback:(void (^)(id _Nullable))callback __attribute__((swift_name("onTransactionFailure(callback:)")));
- (Edfapay_pg_sdkCardPay *)onTransactionSuccessCallback:(void (^)(id))callback __attribute__((swift_name("onTransactionSuccess(callback:)")));
- (Edfapay_pg_sdkCardPay *)setAuthAuth:(BOOL)auth __attribute__((swift_name("setAuth(auth:)")));
- (Edfapay_pg_sdkCardPay *)setCardCard:(Edfapay_pg_sdkEdfaPgCard * _Nullable)card __attribute__((swift_name("setCard(card:)")));
- (Edfapay_pg_sdkCardPay *)setDebugEnable:(BOOL)enable __attribute__((swift_name("setDebug(enable:)")));
- (Edfapay_pg_sdkCardPay *)setDesignTypeDesignType:(Edfapay_pg_sdkEdfaPayDesignType *)designType __attribute__((swift_name("setDesignType(designType:)")));
- (Edfapay_pg_sdkCardPay *)setExtrasExtras:(NSArray<Edfapay_pg_sdkExtra *> *)extras __attribute__((swift_name("setExtras(extras:)")));
- (Edfapay_pg_sdkCardPay *)setLanguageLanguage:(Edfapay_pg_sdkEdfaPayLanguage *)language __attribute__((swift_name("setLanguage(language:)")));
- (Edfapay_pg_sdkCardPay *)setOrderOrder:(Edfapay_pg_sdkEdfaPgSaleOrder *)order __attribute__((swift_name("setOrder(order:)")));
- (Edfapay_pg_sdkCardPay *)setPayerPayer:(Edfapay_pg_sdkEdfaPgPayer *)payer __attribute__((swift_name("setPayer(payer:)")));
- (Edfapay_pg_sdkCardPay *)setRecurringChannelId:(NSString *)channelId recurring:(BOOL)recurring __attribute__((swift_name("setRecurring(channelId:recurring:)")));
- (Edfapay_pg_sdkCardPay *)setResultUrlsSuccessUrl:(NSString *)successUrl failureUrl:(NSString *)failureUrl __attribute__((swift_name("setResultUrls(successUrl:failureUrl:)")));
@end


/**
 * Public façade for the EdfaPay payment SDK. All consumer-facing operations route through
 * this object — the internal repository / provider interfaces are not part of the public API.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgSdk")))
@interface Edfapay_pg_sdkEdfaPgSdk : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Public façade for the EdfaPay payment SDK. All consumer-facing operations route through
 * this object — the internal repository / provider interfaces are not part of the public API.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)edfaPgSdk __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkEdfaPgSdk *shared __attribute__((swift_name("shared")));

/**
 * Builder for the bundled card-pay flow. Chain `setOrder`/`setPayer`/etc. then call
 * `initialize(onDismiss)` from a Compose host.
 */
- (Edfapay_pg_sdkCardPay *)CardPay __attribute__((swift_name("CardPay()")));

/** Executes an Apple Pay charge with the supplied request body.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)applePayRequest:(Edfapay_pg_sdkApplePayRequest *)request completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("applePay(request:completionHandler:)")));

/** Captures a previously authorized transaction for the given amount.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)captureTransactionId:(NSString *)transactionId amount:(double)amount completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("capture(transactionId:amount:completionHandler:)")));

/**
 * Initiates an external payment (tabby / tamara / link checkout) in a single call.
 *
 * The provider is selected via [ExternalPaymentRequest.paymentMethod]; the path
 * and `paymentType` are derived from the enum so callers only need to set the
 * order + payer fields.
 *
 * Returns a [JsonObject] carrying the unified session/redirect payload:
 * `checkoutId`, `paymentGatewayTransactionId`, `checkoutDeeplink`, `transactionId`,
 * `status`, plus the `paymentMethod` that was used.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)externalPaymentRequest:(Edfapay_pg_sdkExternalPaymentRequest *)request completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("externalPayment(request:completionHandler:)")));

/**
 * Convenience: fetch a single transaction by its ledger UUID.
 *
 * Equivalent to `getTransactions(TransactionFilter(pageSize = 1, id = id)).content.firstOrNull()`.
 *
 * @return the matching [JsonObject], or `null` when the call fails or no row matches.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTransactionByIdId:(NSString *)id completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTransactionById(id:completionHandler:)")));

/**
 * Convenience: fetch a single transaction by its merchant-supplied order id.
 *
 * Equivalent to `getTransactions(TransactionFilter(pageSize = 1, orderId = orderId)).content.firstOrNull()`.
 *
 * @return the matching [JsonObject], or `null` when the call fails or no row matches.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTransactionByOrderIdOrderId:(NSString *)orderId completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTransactionByOrderId(orderId:completionHandler:)")));

/**
 * Convenience: fetch a single transaction by its Retrieval Reference Number (RRN).
 *
 * Equivalent to `getTransactions(TransactionFilter(pageSize = 1, rrn = rrn)).content.firstOrNull()`.
 *
 * @return the matching [JsonObject], or `null` when the call fails or no row matches.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTransactionByRrnRrn:(NSString *)rrn completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTransactionByRrn(rrn:completionHandler:)")));

/**
 * Fetches a paginated list of transactions from the payment backend.
 *
 * Use the [filter] data class to build the query: it carries `pageNumber`, `pageSize`,
 * and the optional `rrn` / `status` / `id` / `orderId` selectors. For a single-row lookup
 * pass `TransactionFilter(pageSize = 1, id = "<uuid>")`.
 *
 * Returns `null` when the call fails or the backend returns no data.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTransactionsFilter:(Edfapay_pg_sdkTransactionFilter *)filter completionHandler:(void (^)(Edfapay_pg_sdkPageDto<NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTransactions(filter:completionHandler:)")));

/**
 * Initialize the [EdfaPgSdk] explicitly using the [EdfaPgCredential] values.
 *
 * @param apiKey the API key (`X-API-KEY` header and middle segment of S2S payment `hash`).
 * @param baseUrl the payment API base URL.
 * @throws EdfaPgSdkIsNotInitializedException
 */
- (void)doInitApiKey:(NSString *)apiKey baseUrl:(NSString *)baseUrl __attribute__((swift_name("doInit(apiKey:baseUrl:)")));

/** Charges a recurring transaction using a stored token + new order.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recurringRecurringRequest:(Edfapay_pg_sdkRecurringRequest *)recurringRequest completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("recurring(recurringRequest:completionHandler:)")));

/** Refunds a previously captured transaction for the given amount.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refundTransactionId:(NSString *)transactionId amount:(double)amount completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refund(transactionId:amount:completionHandler:)")));

/** Executes a card sale (S2S). The request body must carry order, payer, and card data.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saleRequest:(Edfapay_pg_sdkSaleRequest *)request completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sale(request:completionHandler:)")));

/** Cancels an authorized but un-captured transaction.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)voidTransactionId:(NSString *)transactionId completionHandler:(void (^)(NSDictionary<NSString *, Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("void(transactionId:completionHandler:)")));
@property BOOL enableLogs __attribute__((swift_name("enableLogs")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface Edfapay_pg_sdkKotlinThrowable : Edfapay_pg_sdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (Edfapay_pg_sdkKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Edfapay_pg_sdkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface Edfapay_pg_sdkKotlinException : Edfapay_pg_sdkKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface Edfapay_pg_sdkKotlinRuntimeException : Edfapay_pg_sdkKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface Edfapay_pg_sdkKotlinIllegalArgumentException : Edfapay_pg_sdkKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * The [EdfaPgSdk] not initialized exception. Thrown when [EdfaPgCredential.requireInit] is not satisfied with
 * the [EdfaPgCredential.isInitialized] soft check.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgSdkIsNotInitializedException")))
@interface Edfapay_pg_sdkEdfaPgSdkIsNotInitializedException : Edfapay_pg_sdkKotlinIllegalArgumentException

/**
 * The [EdfaPgSdk] not initialized exception. Thrown when [EdfaPgCredential.requireInit] is not satisfied with
 * the [EdfaPgCredential.isInitialized] soft check.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The [EdfaPgSdk] not initialized exception. Thrown when [EdfaPgCredential.requireInit] is not satisfied with
 * the [EdfaPgCredential.isInitialized] soft check.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Edfapay_pg_sdkEdfaPgSdkIsNotInitializedExceptionCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgSdkIsNotInitializedException.Companion")))
@interface Edfapay_pg_sdkEdfaPgSdkIsNotInitializedExceptionCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkEdfaPgSdkIsNotInitializedExceptionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol Edfapay_pg_sdkKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface Edfapay_pg_sdkKotlinEnum<E> : Edfapay_pg_sdkBase <Edfapay_pg_sdkKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPayDesignType")))
@interface Edfapay_pg_sdkEdfaPayDesignType : Edfapay_pg_sdkKotlinEnum<Edfapay_pg_sdkEdfaPayDesignType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Edfapay_pg_sdkEdfaPayDesignType *one __attribute__((swift_name("one")));
@property (class, readonly) Edfapay_pg_sdkEdfaPayDesignType *two __attribute__((swift_name("two")));
@property (class, readonly) Edfapay_pg_sdkEdfaPayDesignType *three __attribute__((swift_name("three")));
+ (Edfapay_pg_sdkKotlinArray<Edfapay_pg_sdkEdfaPayDesignType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Edfapay_pg_sdkEdfaPayDesignType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPayLanguage")))
@interface Edfapay_pg_sdkEdfaPayLanguage : Edfapay_pg_sdkKotlinEnum<Edfapay_pg_sdkEdfaPayLanguage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Edfapay_pg_sdkEdfaPayLanguage *ar __attribute__((swift_name("ar")));
@property (class, readonly) Edfapay_pg_sdkEdfaPayLanguage *en __attribute__((swift_name("en")));
+ (Edfapay_pg_sdkKotlinArray<Edfapay_pg_sdkEdfaPayLanguage *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Edfapay_pg_sdkEdfaPayLanguage *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplePayCardDto")))
@interface Edfapay_pg_sdkApplePayCardDto : Edfapay_pg_sdkBase
- (instancetype)initWithToken:(NSString *)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkApplePayCardDtoCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkApplePayCardDto *)doCopyToken:(NSString *)token __attribute__((swift_name("doCopy(token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplePayCardDto.Companion")))
@interface Edfapay_pg_sdkApplePayCardDtoCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkApplePayCardDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplePayCustomerDto")))
@interface Edfapay_pg_sdkApplePayCustomerDto : Edfapay_pg_sdkBase
- (instancetype)initWithName:(NSString *)name email:(NSString *)email phone:(NSString *)phone __attribute__((swift_name("init(name:email:phone:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkApplePayCustomerDtoCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkApplePayCustomerDto *)doCopyName:(NSString *)name email:(NSString *)email phone:(NSString *)phone __attribute__((swift_name("doCopy(name:email:phone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString *name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phone")
*/
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplePayCustomerDto.Companion")))
@interface Edfapay_pg_sdkApplePayCustomerDtoCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkApplePayCustomerDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplePayRequest")))
@interface Edfapay_pg_sdkApplePayRequest : Edfapay_pg_sdkBase
- (instancetype)initWithOrderId:(NSString *)orderId amount:(double)amount currency:(NSString *)currency customer:(Edfapay_pg_sdkApplePayCustomerDto *)customer successUrl:(NSString *)successUrl failureUrl:(NSString *)failureUrl card:(Edfapay_pg_sdkApplePayCardDto *)card __attribute__((swift_name("init(orderId:amount:currency:customer:successUrl:failureUrl:card:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkApplePayRequestCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkApplePayRequest *)doCopyOrderId:(NSString *)orderId amount:(double)amount currency:(NSString *)currency customer:(Edfapay_pg_sdkApplePayCustomerDto *)customer successUrl:(NSString *)successUrl failureUrl:(NSString *)failureUrl card:(Edfapay_pg_sdkApplePayCardDto *)card __attribute__((swift_name("doCopy(orderId:amount:currency:customer:successUrl:failureUrl:card:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amount")
*/
@property (readonly) double amount __attribute__((swift_name("amount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="card")
*/
@property (readonly) Edfapay_pg_sdkApplePayCardDto *card __attribute__((swift_name("card")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency")
*/
@property (readonly) NSString *currency __attribute__((swift_name("currency")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="customer")
*/
@property (readonly) Edfapay_pg_sdkApplePayCustomerDto *customer __attribute__((swift_name("customer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="failureUrl")
*/
@property (readonly) NSString *failureUrl __attribute__((swift_name("failureUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderId")
*/
@property (readonly) NSString *orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="successUrl")
*/
@property (readonly) NSString *successUrl __attribute__((swift_name("successUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplePayRequest.Companion")))
@interface Edfapay_pg_sdkApplePayRequestCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkApplePayRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddressDto")))
@interface Edfapay_pg_sdkBillingAddressDto : Edfapay_pg_sdkBase
- (instancetype)initWithCountry:(NSString *)country state:(NSString *)state city:(NSString *)city address:(NSString *)address zip:(NSString *)zip __attribute__((swift_name("init(country:state:city:address:zip:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkBillingAddressDtoCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkBillingAddressDto *)doCopyCountry:(NSString *)country state:(NSString *)state city:(NSString *)city address:(NSString *)address zip:(NSString *)zip __attribute__((swift_name("doCopy(country:state:city:address:zip:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="address")
*/
@property (readonly) NSString *address __attribute__((swift_name("address")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="city")
*/
@property (readonly) NSString *city __attribute__((swift_name("city")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="country")
*/
@property (readonly) NSString *country __attribute__((swift_name("country")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property (readonly) NSString *state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="zip")
*/
@property (readonly) NSString *zip __attribute__((swift_name("zip")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddressDto.Companion")))
@interface Edfapay_pg_sdkBillingAddressDtoCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkBillingAddressDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDto")))
@interface Edfapay_pg_sdkCardDto : Edfapay_pg_sdkBase
- (instancetype)initWithInitiateRequestId:(NSString *)initiateRequestId cardNumber:(NSString *)cardNumber cardHolder:(NSString *)cardHolder cardExpiryMonth:(NSString *)cardExpiryMonth cardExpiryYear:(NSString *)cardExpiryYear cardScheme:(NSString *)cardScheme cardCvv:(NSString *)cardCvv token:(NSString *)token __attribute__((swift_name("init(initiateRequestId:cardNumber:cardHolder:cardExpiryMonth:cardExpiryYear:cardScheme:cardCvv:token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkCardDtoCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkCardDto *)doCopyInitiateRequestId:(NSString *)initiateRequestId cardNumber:(NSString *)cardNumber cardHolder:(NSString *)cardHolder cardExpiryMonth:(NSString *)cardExpiryMonth cardExpiryYear:(NSString *)cardExpiryYear cardScheme:(NSString *)cardScheme cardCvv:(NSString *)cardCvv token:(NSString *)token __attribute__((swift_name("doCopy(initiateRequestId:cardNumber:cardHolder:cardExpiryMonth:cardExpiryYear:cardScheme:cardCvv:token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardCvv")
*/
@property (readonly) NSString *cardCvv __attribute__((swift_name("cardCvv")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardExpiryMonth")
*/
@property (readonly) NSString *cardExpiryMonth __attribute__((swift_name("cardExpiryMonth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardExpiryYear")
*/
@property (readonly) NSString *cardExpiryYear __attribute__((swift_name("cardExpiryYear")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardHolder")
*/
@property (readonly) NSString *cardHolder __attribute__((swift_name("cardHolder")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardNumber")
*/
@property (readonly) NSString *cardNumber __attribute__((swift_name("cardNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardScheme")
*/
@property (readonly) NSString *cardScheme __attribute__((swift_name("cardScheme")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="initiateRequestId")
*/
@property (readonly) NSString *initiateRequestId __attribute__((swift_name("initiateRequestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDto.Companion")))
@interface Edfapay_pg_sdkCardDtoCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkCardDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerDto")))
@interface Edfapay_pg_sdkCustomerDto : Edfapay_pg_sdkBase
- (instancetype)initWithName:(NSString *)name email:(NSString *)email phone:(NSString *)phone idNumber:(NSString *)idNumber idType:(NSString *)idType taxNumber:(NSString *)taxNumber __attribute__((swift_name("init(name:email:phone:idNumber:idType:taxNumber:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkCustomerDtoCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkCustomerDto *)doCopyName:(NSString *)name email:(NSString *)email phone:(NSString *)phone idNumber:(NSString *)idNumber idType:(NSString *)idType taxNumber:(NSString *)taxNumber __attribute__((swift_name("doCopy(name:email:phone:idNumber:idType:taxNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idNumber")
*/
@property (readonly) NSString *idNumber __attribute__((swift_name("idNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idType")
*/
@property (readonly) NSString *idType __attribute__((swift_name("idType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString *name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phone")
*/
@property (readonly) NSString *phone __attribute__((swift_name("phone")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="taxNumber")
*/
@property (readonly) NSString *taxNumber __attribute__((swift_name("taxNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerDto.Companion")))
@interface Edfapay_pg_sdkCustomerDtoCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkCustomerDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecuteData")))
@interface Edfapay_pg_sdkExecuteData : Edfapay_pg_sdkBase
- (instancetype)initWithHtmlContent:(NSString * _Nullable)htmlContent transactionId:(NSString * _Nullable)transactionId orderId:(NSString * _Nullable)orderId transactionStatus:(NSString * _Nullable)transactionStatus paymentStatus:(NSString * _Nullable)paymentStatus message:(NSString * _Nullable)message __attribute__((swift_name("init(htmlContent:transactionId:orderId:transactionStatus:paymentStatus:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkExecuteDataCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkExecuteData *)doCopyHtmlContent:(NSString * _Nullable)htmlContent transactionId:(NSString * _Nullable)transactionId orderId:(NSString * _Nullable)orderId transactionStatus:(NSString * _Nullable)transactionStatus paymentStatus:(NSString * _Nullable)paymentStatus message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(htmlContent:transactionId:orderId:transactionStatus:paymentStatus:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable htmlContent __attribute__((swift_name("htmlContent")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));
@property (readonly) NSString * _Nullable paymentStatus __attribute__((swift_name("paymentStatus")));
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@property (readonly) NSString * _Nullable transactionStatus __attribute__((swift_name("transactionStatus")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecuteData.Companion")))
@interface Edfapay_pg_sdkExecuteDataCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkExecuteDataCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalPaymentAdditionalData")))
@interface Edfapay_pg_sdkExternalPaymentAdditionalData : Edfapay_pg_sdkBase
- (instancetype)initWithStoreId:(NSString *)storeId __attribute__((swift_name("init(storeId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkExternalPaymentAdditionalDataCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkExternalPaymentAdditionalData *)doCopyStoreId:(NSString *)storeId __attribute__((swift_name("doCopy(storeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="store_id")
*/
@property (readonly) NSString *storeId __attribute__((swift_name("storeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalPaymentAdditionalData.Companion")))
@interface Edfapay_pg_sdkExternalPaymentAdditionalDataCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkExternalPaymentAdditionalDataCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalPaymentMethod")))
@interface Edfapay_pg_sdkExternalPaymentMethod : Edfapay_pg_sdkKotlinEnum<Edfapay_pg_sdkExternalPaymentMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Edfapay_pg_sdkExternalPaymentMethodCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Edfapay_pg_sdkExternalPaymentMethod *tamara __attribute__((swift_name("tamara")));
@property (class, readonly) Edfapay_pg_sdkExternalPaymentMethod *tabby __attribute__((swift_name("tabby")));
@property (class, readonly) Edfapay_pg_sdkExternalPaymentMethod *checkout __attribute__((swift_name("checkout")));
@property (class, readonly) Edfapay_pg_sdkExternalPaymentMethod *sadad __attribute__((swift_name("sadad")));
+ (Edfapay_pg_sdkKotlinArray<Edfapay_pg_sdkExternalPaymentMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Edfapay_pg_sdkExternalPaymentMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalPaymentMethod.Companion")))
@interface Edfapay_pg_sdkExternalPaymentMethodCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkExternalPaymentMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(Edfapay_pg_sdkKotlinArray<id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Unified request for the external-payment endpoints (tabby / tamara / checkout / sadad).
 *
 * Two shapes are supported, selected by [paymentMethod]:
 *  - Flat (tabby / tamara / checkout): set [phoneNumber], [email], optionally [additionalData].
 *    `paymentType` is auto-derived from the enum.
 *  - Nested (sadad): set [customerDetails] (name/email/phone). [address] is auto-defaulted
 *    by the provider; [issueDate] is always set to "today" (programmatic); [expireDate] is
 *    computed as today + [expiryInMinutes] (default: 10080 minutes = 7 days).
 *
 * Nullable fields are dropped from the request body (the SDK's JSON client uses
 * `explicitNulls = false`), so caller-irrelevant fields are simply omitted.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalPaymentRequest")))
@interface Edfapay_pg_sdkExternalPaymentRequest : Edfapay_pg_sdkBase
- (instancetype)initWithOrderId:(NSString *)orderId paymentMethod:(Edfapay_pg_sdkExternalPaymentMethod *)paymentMethod amount:(int64_t)amount currency:(NSString *)currency phoneNumber:(NSString * _Nullable)phoneNumber email:(NSString * _Nullable)email locale:(NSString * _Nullable)locale paymentType:(NSString * _Nullable)paymentType additionalData:(Edfapay_pg_sdkExternalPaymentAdditionalData * _Nullable)additionalData customerDetails:(Edfapay_pg_sdkCustomerDto * _Nullable)customerDetails address:(Edfapay_pg_sdkBillingAddressDto * _Nullable)address issueDate:(NSString * _Nullable)issueDate expireDate:(NSString * _Nullable)expireDate expiryInMinutes:(Edfapay_pg_sdkLong * _Nullable)expiryInMinutes invoice:(Edfapay_pg_sdkInvoiceDto * _Nullable)invoice description:(NSString *)description __attribute__((swift_name("init(orderId:paymentMethod:amount:currency:phoneNumber:email:locale:paymentType:additionalData:customerDetails:address:issueDate:expireDate:expiryInMinutes:invoice:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkExternalPaymentRequestCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkExternalPaymentRequest *)doCopyOrderId:(NSString *)orderId paymentMethod:(Edfapay_pg_sdkExternalPaymentMethod *)paymentMethod amount:(int64_t)amount currency:(NSString *)currency phoneNumber:(NSString * _Nullable)phoneNumber email:(NSString * _Nullable)email locale:(NSString * _Nullable)locale paymentType:(NSString * _Nullable)paymentType additionalData:(Edfapay_pg_sdkExternalPaymentAdditionalData * _Nullable)additionalData customerDetails:(Edfapay_pg_sdkCustomerDto * _Nullable)customerDetails address:(Edfapay_pg_sdkBillingAddressDto * _Nullable)address issueDate:(NSString * _Nullable)issueDate expireDate:(NSString * _Nullable)expireDate expiryInMinutes:(Edfapay_pg_sdkLong * _Nullable)expiryInMinutes invoice:(Edfapay_pg_sdkInvoiceDto * _Nullable)invoice description:(NSString *)description __attribute__((swift_name("doCopy(orderId:paymentMethod:amount:currency:phoneNumber:email:locale:paymentType:additionalData:customerDetails:address:issueDate:expireDate:expiryInMinutes:invoice:description:)")));

/**
 * Unified request for the external-payment endpoints (tabby / tamara / checkout / sadad).
 *
 * Two shapes are supported, selected by [paymentMethod]:
 *  - Flat (tabby / tamara / checkout): set [phoneNumber], [email], optionally [additionalData].
 *    `paymentType` is auto-derived from the enum.
 *  - Nested (sadad): set [customerDetails] (name/email/phone). [address] is auto-defaulted
 *    by the provider; [issueDate] is always set to "today" (programmatic); [expireDate] is
 *    computed as today + [expiryInMinutes] (default: 10080 minutes = 7 days).
 *
 * Nullable fields are dropped from the request body (the SDK's JSON client uses
 * `explicitNulls = false`), so caller-irrelevant fields are simply omitted.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Unified request for the external-payment endpoints (tabby / tamara / checkout / sadad).
 *
 * Two shapes are supported, selected by [paymentMethod]:
 *  - Flat (tabby / tamara / checkout): set [phoneNumber], [email], optionally [additionalData].
 *    `paymentType` is auto-derived from the enum.
 *  - Nested (sadad): set [customerDetails] (name/email/phone). [address] is auto-defaulted
 *    by the provider; [issueDate] is always set to "today" (programmatic); [expireDate] is
 *    computed as today + [expiryInMinutes] (default: 10080 minutes = 7 days).
 *
 * Nullable fields are dropped from the request body (the SDK's JSON client uses
 * `explicitNulls = false`), so caller-irrelevant fields are simply omitted.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Unified request for the external-payment endpoints (tabby / tamara / checkout / sadad).
 *
 * Two shapes are supported, selected by [paymentMethod]:
 *  - Flat (tabby / tamara / checkout): set [phoneNumber], [email], optionally [additionalData].
 *    `paymentType` is auto-derived from the enum.
 *  - Nested (sadad): set [customerDetails] (name/email/phone). [address] is auto-defaulted
 *    by the provider; [issueDate] is always set to "today" (programmatic); [expireDate] is
 *    computed as today + [expiryInMinutes] (default: 10080 minutes = 7 days).
 *
 * Nullable fields are dropped from the request body (the SDK's JSON client uses
 * `explicitNulls = false`), so caller-irrelevant fields are simply omitted.
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="additionalData")
*/
@property Edfapay_pg_sdkExternalPaymentAdditionalData * _Nullable additionalData __attribute__((swift_name("additionalData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="address")
*/
@property Edfapay_pg_sdkBillingAddressDto * _Nullable address __attribute__((swift_name("address")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amount")
*/
@property (readonly) int64_t amount __attribute__((swift_name("amount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency")
*/
@property (readonly) NSString *currency __attribute__((swift_name("currency")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="customerDetails")
*/
@property Edfapay_pg_sdkCustomerDto * _Nullable customerDetails __attribute__((swift_name("customerDetails")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * Programmatically populated by the SDK for SADAD as `issueDate + expiryInMinutes`.
 * Any value the caller sets is overwritten — use [expiryInMinutes] to control the
 * bill lifetime.
 *
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expireDate")
*/
@property NSString * _Nullable expireDate __attribute__((swift_name("expireDate")));

/**
 * SADAD bill lifetime, in minutes. Defaults to 7 days (10080) when not set.
 * Ignored by tabby / tamara / checkout.
 *
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property Edfapay_pg_sdkLong * _Nullable expiryInMinutes __attribute__((swift_name("expiryInMinutes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="invoice")
*/
@property Edfapay_pg_sdkInvoiceDto * _Nullable invoice __attribute__((swift_name("invoice")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="locale")
*/
@property NSString * _Nullable locale __attribute__((swift_name("locale")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderId")
*/
@property (readonly) NSString *orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="paymentMethod")
*/
@property (readonly) Edfapay_pg_sdkExternalPaymentMethod *paymentMethod __attribute__((swift_name("paymentMethod")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="paymentType")
*/
@property NSString * _Nullable paymentType __attribute__((swift_name("paymentType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="phoneNumber")
*/
@property NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@end


/**
 * Unified request for the external-payment endpoints (tabby / tamara / checkout / sadad).
 *
 * Two shapes are supported, selected by [paymentMethod]:
 *  - Flat (tabby / tamara / checkout): set [phoneNumber], [email], optionally [additionalData].
 *    `paymentType` is auto-derived from the enum.
 *  - Nested (sadad): set [customerDetails] (name/email/phone). [address] is auto-defaulted
 *    by the provider; [issueDate] is always set to "today" (programmatic); [expireDate] is
 *    computed as today + [expiryInMinutes] (default: 10080 minutes = 7 days).
 *
 * Nullable fields are dropped from the request body (the SDK's JSON client uses
 * `explicitNulls = false`), so caller-irrelevant fields are simply omitted.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalPaymentRequest.Companion")))
@interface Edfapay_pg_sdkExternalPaymentRequestCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Unified request for the external-payment endpoints (tabby / tamara / checkout / sadad).
 *
 * Two shapes are supported, selected by [paymentMethod]:
 *  - Flat (tabby / tamara / checkout): set [phoneNumber], [email], optionally [additionalData].
 *    `paymentType` is auto-derived from the enum.
 *  - Nested (sadad): set [customerDetails] (name/email/phone). [address] is auto-defaulted
 *    by the provider; [issueDate] is always set to "today" (programmatic); [expireDate] is
 *    computed as today + [expiryInMinutes] (default: 10080 minutes = 7 days).
 *
 * Nullable fields are dropped from the request body (the SDK's JSON client uses
 * `explicitNulls = false`), so caller-irrelevant fields are simply omitted.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkExternalPaymentRequestCompanion *shared __attribute__((swift_name("shared")));

/**
 * Unified request for the external-payment endpoints (tabby / tamara / checkout / sadad).
 *
 * Two shapes are supported, selected by [paymentMethod]:
 *  - Flat (tabby / tamara / checkout): set [phoneNumber], [email], optionally [additionalData].
 *    `paymentType` is auto-derived from the enum.
 *  - Nested (sadad): set [customerDetails] (name/email/phone). [address] is auto-defaulted
 *    by the provider; [issueDate] is always set to "today" (programmatic); [expireDate] is
 *    computed as today + [expiryInMinutes] (default: 10080 minutes = 7 days).
 *
 * Nullable fields are dropped from the request body (the SDK's JSON client uses
 * `explicitNulls = false`), so caller-irrelevant fields are simply omitted.
 */
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvoiceDto")))
@interface Edfapay_pg_sdkInvoiceDto : Edfapay_pg_sdkBase
- (instancetype)initWithShippingCharges:(double)shippingCharges extraCharges:(double)extraCharges extraDiscount:(double)extraDiscount total:(double)total lineItems:(NSArray<Edfapay_pg_sdkLineItemDto *> *)lineItems __attribute__((swift_name("init(shippingCharges:extraCharges:extraDiscount:total:lineItems:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkInvoiceDtoCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkInvoiceDto *)doCopyShippingCharges:(double)shippingCharges extraCharges:(double)extraCharges extraDiscount:(double)extraDiscount total:(double)total lineItems:(NSArray<Edfapay_pg_sdkLineItemDto *> *)lineItems __attribute__((swift_name("doCopy(shippingCharges:extraCharges:extraDiscount:total:lineItems:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="extraCharges")
*/
@property (readonly) double extraCharges __attribute__((swift_name("extraCharges")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="extraDiscount")
*/
@property (readonly) double extraDiscount __attribute__((swift_name("extraDiscount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lineItems")
*/
@property (readonly) NSArray<Edfapay_pg_sdkLineItemDto *> *lineItems __attribute__((swift_name("lineItems")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="shippingCharges")
*/
@property (readonly) double shippingCharges __attribute__((swift_name("shippingCharges")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total")
*/
@property (readonly) double total __attribute__((swift_name("total")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvoiceDto.Companion")))
@interface Edfapay_pg_sdkInvoiceDtoCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkInvoiceDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineItemDto")))
@interface Edfapay_pg_sdkLineItemDto : Edfapay_pg_sdkBase
- (instancetype)initWithSku:(NSString *)sku description:(NSString *)description url:(NSString *)url unitCost:(double)unitCost quantity:(int32_t)quantity netTotal:(double)netTotal discountRate:(double)discountRate discountAmount:(double)discountAmount taxRate:(double)taxRate taxTotal:(double)taxTotal total:(double)total __attribute__((swift_name("init(sku:description:url:unitCost:quantity:netTotal:discountRate:discountAmount:taxRate:taxTotal:total:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkLineItemDtoCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkLineItemDto *)doCopySku:(NSString *)sku description:(NSString *)description url:(NSString *)url unitCost:(double)unitCost quantity:(int32_t)quantity netTotal:(double)netTotal discountRate:(double)discountRate discountAmount:(double)discountAmount taxRate:(double)taxRate taxTotal:(double)taxTotal total:(double)total __attribute__((swift_name("doCopy(sku:description:url:unitCost:quantity:netTotal:discountRate:discountAmount:taxRate:taxTotal:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="discountAmount")
*/
@property (readonly) double discountAmount __attribute__((swift_name("discountAmount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="discountRate")
*/
@property (readonly) double discountRate __attribute__((swift_name("discountRate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="netTotal")
*/
@property (readonly) double netTotal __attribute__((swift_name("netTotal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="quantity")
*/
@property (readonly) int32_t quantity __attribute__((swift_name("quantity")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sku")
*/
@property (readonly) NSString *sku __attribute__((swift_name("sku")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="taxRate")
*/
@property (readonly) double taxRate __attribute__((swift_name("taxRate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="taxTotal")
*/
@property (readonly) double taxTotal __attribute__((swift_name("taxTotal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total")
*/
@property (readonly) double total __attribute__((swift_name("total")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unitCost")
*/
@property (readonly) double unitCost __attribute__((swift_name("unitCost")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineItemDto.Companion")))
@interface Edfapay_pg_sdkLineItemDtoCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkLineItemDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Order")))
@interface Edfapay_pg_sdkOrder : Edfapay_pg_sdkBase
- (instancetype)initWithNumber:(NSString * _Nullable)number amount:(Edfapay_pg_sdkDouble * _Nullable)amount currency:(NSString * _Nullable)currency description:(NSString * _Nullable)description __attribute__((swift_name("init(number:amount:currency:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkOrderCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkOrder *)doCopyNumber:(NSString * _Nullable)number amount:(Edfapay_pg_sdkDouble * _Nullable)amount currency:(NSString * _Nullable)currency description:(NSString * _Nullable)description __attribute__((swift_name("doCopy(number:amount:currency:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amount")
*/
@property (readonly) Edfapay_pg_sdkDouble * _Nullable amount __attribute__((swift_name("amount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency")
*/
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="number")
*/
@property (readonly) NSString * _Nullable number __attribute__((swift_name("number")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Order.Companion")))
@interface Edfapay_pg_sdkOrderCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkOrderCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageDto")))
@interface Edfapay_pg_sdkPageDto<T> : Edfapay_pg_sdkBase
- (instancetype)initWithContent:(NSArray<id> *)content number:(int32_t)number size:(int32_t)size totalElements:(int64_t)totalElements numberOfElements:(int32_t)numberOfElements totalPages:(int32_t)totalPages hasContent:(BOOL)hasContent first:(BOOL)first last:(BOOL)last __attribute__((swift_name("init(content:number:size:totalElements:numberOfElements:totalPages:hasContent:first:last:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkPageDtoCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkPageDto<T> *)doCopyContent:(NSArray<id> *)content number:(int32_t)number size:(int32_t)size totalElements:(int64_t)totalElements numberOfElements:(int32_t)numberOfElements totalPages:(int32_t)totalPages hasContent:(BOOL)hasContent first:(BOOL)first last:(BOOL)last __attribute__((swift_name("doCopy(content:number:size:totalElements:numberOfElements:totalPages:hasContent:first:last:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSArray<id> *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="first")
*/
@property (readonly) BOOL first __attribute__((swift_name("first")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hasContent")
*/
@property (readonly) BOOL hasContent __attribute__((swift_name("hasContent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last")
*/
@property (readonly) BOOL last __attribute__((swift_name("last")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="number")
*/
@property (readonly) int32_t number __attribute__((swift_name("number")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="numberOfElements")
*/
@property (readonly) int32_t numberOfElements __attribute__((swift_name("numberOfElements")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="size")
*/
@property (readonly) int32_t size __attribute__((swift_name("size")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalElements")
*/
@property (readonly) int64_t totalElements __attribute__((swift_name("totalElements")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalPages")
*/
@property (readonly) int32_t totalPages __attribute__((swift_name("totalPages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageDtoCompanion")))
@interface Edfapay_pg_sdkPageDtoCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkPageDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(Edfapay_pg_sdkKotlinArray<id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecurringRequest")))
@interface Edfapay_pg_sdkRecurringRequest : Edfapay_pg_sdkBase
- (instancetype)initWithTransactionId:(NSString * _Nullable)transactionId recurringToken:(NSString * _Nullable)recurringToken amount:(Edfapay_pg_sdkDouble * _Nullable)amount order:(Edfapay_pg_sdkOrder * _Nullable)order __attribute__((swift_name("init(transactionId:recurringToken:amount:order:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkRecurringRequestCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkRecurringRequest *)doCopyTransactionId:(NSString * _Nullable)transactionId recurringToken:(NSString * _Nullable)recurringToken amount:(Edfapay_pg_sdkDouble * _Nullable)amount order:(Edfapay_pg_sdkOrder * _Nullable)order __attribute__((swift_name("doCopy(transactionId:recurringToken:amount:order:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amount")
*/
@property (readonly) Edfapay_pg_sdkDouble * _Nullable amount __attribute__((swift_name("amount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="order")
*/
@property (readonly) Edfapay_pg_sdkOrder * _Nullable order __attribute__((swift_name("order")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recurringToken")
*/
@property (readonly) NSString * _Nullable recurringToken __attribute__((swift_name("recurringToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactionId")
*/
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecurringRequest.Companion")))
@interface Edfapay_pg_sdkRecurringRequestCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkRecurringRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaleRequest")))
@interface Edfapay_pg_sdkSaleRequest : Edfapay_pg_sdkBase
- (instancetype)initWithOrderId:(NSString *)orderId amount:(double)amount currency:(NSString *)currency paymentMethod:(NSString *)paymentMethod auth:(NSString *)auth recurringInit:(NSString *)recurringInit customer:(Edfapay_pg_sdkCustomerDto *)customer billingAddress:(Edfapay_pg_sdkBillingAddressDto *)billingAddress invoice:(Edfapay_pg_sdkInvoiceDto *)invoice successUrl:(NSString *)successUrl failureUrl:(NSString *)failureUrl hash:(NSString *)hash card:(Edfapay_pg_sdkCardDto *)card __attribute__((swift_name("init(orderId:amount:currency:paymentMethod:auth:recurringInit:customer:billingAddress:invoice:successUrl:failureUrl:hash:card:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkSaleRequestCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkSaleRequest *)doCopyOrderId:(NSString *)orderId amount:(double)amount currency:(NSString *)currency paymentMethod:(NSString *)paymentMethod auth:(NSString *)auth recurringInit:(NSString *)recurringInit customer:(Edfapay_pg_sdkCustomerDto *)customer billingAddress:(Edfapay_pg_sdkBillingAddressDto *)billingAddress invoice:(Edfapay_pg_sdkInvoiceDto *)invoice successUrl:(NSString *)successUrl failureUrl:(NSString *)failureUrl hash:(NSString *)hash card:(Edfapay_pg_sdkCardDto *)card __attribute__((swift_name("doCopy(orderId:amount:currency:paymentMethod:auth:recurringInit:customer:billingAddress:invoice:successUrl:failureUrl:hash:card:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amount")
*/
@property (readonly) double amount __attribute__((swift_name("amount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="auth")
*/
@property (readonly) NSString *auth __attribute__((swift_name("auth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="billingAddress")
*/
@property (readonly) Edfapay_pg_sdkBillingAddressDto *billingAddress __attribute__((swift_name("billingAddress")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="card")
*/
@property (readonly) Edfapay_pg_sdkCardDto *card __attribute__((swift_name("card")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency")
*/
@property (readonly) NSString *currency __attribute__((swift_name("currency")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="customer")
*/
@property (readonly) Edfapay_pg_sdkCustomerDto *customer __attribute__((swift_name("customer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="failureUrl")
*/
@property (readonly) NSString *failureUrl __attribute__((swift_name("failureUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hash")
*/
@property (readonly, getter=hash_) NSString *hash __attribute__((swift_name("hash")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="invoice")
*/
@property (readonly) Edfapay_pg_sdkInvoiceDto *invoice __attribute__((swift_name("invoice")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderId")
*/
@property (readonly) NSString *orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="paymentMethod")
*/
@property (readonly) NSString *paymentMethod __attribute__((swift_name("paymentMethod")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recurringInit")
*/
@property (readonly) NSString *recurringInit __attribute__((swift_name("recurringInit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="successUrl")
*/
@property (readonly) NSString *successUrl __attribute__((swift_name("successUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaleRequest.Companion")))
@interface Edfapay_pg_sdkSaleRequestCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkSaleRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionContentDto")))
@interface Edfapay_pg_sdkTransactionContentDto : Edfapay_pg_sdkBase
- (instancetype)initWithTransactionId:(NSString * _Nullable)transactionId orderId:(NSString * _Nullable)orderId amount:(NSString * _Nullable)amount currencyCode:(NSString * _Nullable)currencyCode transactionStatus:(NSString * _Nullable)transactionStatus paymentStatus:(NSString * _Nullable)paymentStatus businessUnitId:(NSString * _Nullable)businessUnitId channel:(NSString * _Nullable)channel rrn:(NSString * _Nullable)rrn transactionType:(NSString * _Nullable)transactionType reconciliationStatus:(NSString * _Nullable)reconciliationStatus reconciliationAt:(NSString * _Nullable)reconciliationAt acquirerBank:(NSString * _Nullable)acquirerBank providerTid:(NSString * _Nullable)providerTid holderAccount:(NSString * _Nullable)holderAccount cardScheme:(NSString * _Nullable)cardScheme cardChannel:(NSString * _Nullable)cardChannel cardSequenceNumber:(NSString * _Nullable)cardSequenceNumber pan:(NSString * _Nullable)pan cardExpiration:(NSString * _Nullable)cardExpiration cardHolderName:(NSString * _Nullable)cardHolderName createdAt:(NSString * _Nullable)createdAt finishedAt:(NSString * _Nullable)finishedAt createdBy:(NSString * _Nullable)createdBy createdByName:(NSString * _Nullable)createdByName totalRefundAmount:(NSString * _Nullable)totalRefundAmount refundStatus:(NSString * _Nullable)refundStatus merchantId:(NSString * _Nullable)merchantId recurringToken:(NSString * _Nullable)recurringToken __attribute__((swift_name("init(transactionId:orderId:amount:currencyCode:transactionStatus:paymentStatus:businessUnitId:channel:rrn:transactionType:reconciliationStatus:reconciliationAt:acquirerBank:providerTid:holderAccount:cardScheme:cardChannel:cardSequenceNumber:pan:cardExpiration:cardHolderName:createdAt:finishedAt:createdBy:createdByName:totalRefundAmount:refundStatus:merchantId:recurringToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkTransactionContentDtoCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkTransactionContentDto *)doCopyTransactionId:(NSString * _Nullable)transactionId orderId:(NSString * _Nullable)orderId amount:(NSString * _Nullable)amount currencyCode:(NSString * _Nullable)currencyCode transactionStatus:(NSString * _Nullable)transactionStatus paymentStatus:(NSString * _Nullable)paymentStatus businessUnitId:(NSString * _Nullable)businessUnitId channel:(NSString * _Nullable)channel rrn:(NSString * _Nullable)rrn transactionType:(NSString * _Nullable)transactionType reconciliationStatus:(NSString * _Nullable)reconciliationStatus reconciliationAt:(NSString * _Nullable)reconciliationAt acquirerBank:(NSString * _Nullable)acquirerBank providerTid:(NSString * _Nullable)providerTid holderAccount:(NSString * _Nullable)holderAccount cardScheme:(NSString * _Nullable)cardScheme cardChannel:(NSString * _Nullable)cardChannel cardSequenceNumber:(NSString * _Nullable)cardSequenceNumber pan:(NSString * _Nullable)pan cardExpiration:(NSString * _Nullable)cardExpiration cardHolderName:(NSString * _Nullable)cardHolderName createdAt:(NSString * _Nullable)createdAt finishedAt:(NSString * _Nullable)finishedAt createdBy:(NSString * _Nullable)createdBy createdByName:(NSString * _Nullable)createdByName totalRefundAmount:(NSString * _Nullable)totalRefundAmount refundStatus:(NSString * _Nullable)refundStatus merchantId:(NSString * _Nullable)merchantId recurringToken:(NSString * _Nullable)recurringToken __attribute__((swift_name("doCopy(transactionId:orderId:amount:currencyCode:transactionStatus:paymentStatus:businessUnitId:channel:rrn:transactionType:reconciliationStatus:reconciliationAt:acquirerBank:providerTid:holderAccount:cardScheme:cardChannel:cardSequenceNumber:pan:cardExpiration:cardHolderName:createdAt:finishedAt:createdBy:createdByName:totalRefundAmount:refundStatus:merchantId:recurringToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="acquirerBank")
*/
@property (readonly) NSString * _Nullable acquirerBank __attribute__((swift_name("acquirerBank")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="amount")
*/
@property (readonly) NSString * _Nullable amount __attribute__((swift_name("amount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="businessUnitId")
*/
@property (readonly) NSString * _Nullable businessUnitId __attribute__((swift_name("businessUnitId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardChannel")
*/
@property (readonly) NSString * _Nullable cardChannel __attribute__((swift_name("cardChannel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardExpiration")
*/
@property (readonly) NSString * _Nullable cardExpiration __attribute__((swift_name("cardExpiration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardHolderName")
*/
@property (readonly) NSString * _Nullable cardHolderName __attribute__((swift_name("cardHolderName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardScheme")
*/
@property (readonly) NSString * _Nullable cardScheme __attribute__((swift_name("cardScheme")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cardSequenceNumber")
*/
@property (readonly) NSString * _Nullable cardSequenceNumber __attribute__((swift_name("cardSequenceNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
*/
@property (readonly) NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="createdAt")
*/
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="createdBy")
*/
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="createdByName")
*/
@property (readonly) NSString * _Nullable createdByName __attribute__((swift_name("createdByName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currencyCode")
*/
@property (readonly) NSString * _Nullable currencyCode __attribute__((swift_name("currencyCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="finishedAt")
*/
@property (readonly) NSString * _Nullable finishedAt __attribute__((swift_name("finishedAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="holderAccount")
*/
@property (readonly) NSString * _Nullable holderAccount __attribute__((swift_name("holderAccount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="merchantId")
*/
@property (readonly) NSString * _Nullable merchantId __attribute__((swift_name("merchantId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orderId")
*/
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pan")
*/
@property (readonly) NSString * _Nullable pan __attribute__((swift_name("pan")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="paymentStatus")
*/
@property (readonly) NSString * _Nullable paymentStatus __attribute__((swift_name("paymentStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="providerTid")
*/
@property (readonly) NSString * _Nullable providerTid __attribute__((swift_name("providerTid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reconciliationAt")
*/
@property (readonly) NSString * _Nullable reconciliationAt __attribute__((swift_name("reconciliationAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reconciliationStatus")
*/
@property (readonly) NSString * _Nullable reconciliationStatus __attribute__((swift_name("reconciliationStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recurringToken")
*/
@property (readonly) NSString * _Nullable recurringToken __attribute__((swift_name("recurringToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refundStatus")
*/
@property (readonly) NSString * _Nullable refundStatus __attribute__((swift_name("refundStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rrn")
*/
@property (readonly) NSString * _Nullable rrn __attribute__((swift_name("rrn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="totalRefundAmount")
*/
@property (readonly) NSString * _Nullable totalRefundAmount __attribute__((swift_name("totalRefundAmount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactionId")
*/
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactionStatus")
*/
@property (readonly) NSString * _Nullable transactionStatus __attribute__((swift_name("transactionStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactionType")
*/
@property (readonly) NSString * _Nullable transactionType __attribute__((swift_name("transactionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionContentDto.Companion")))
@interface Edfapay_pg_sdkTransactionContentDtoCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkTransactionContentDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The required order data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgRecurringSaleAdapter
 * @see IEdfaPgOrder
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Extra")))
@interface Edfapay_pg_sdkExtra : Edfapay_pg_sdkBase
- (instancetype)initWithType:(NSString *)type name:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(type:name:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkExtraCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkExtra *)doCopyType:(NSString *)type name:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(type:name:value:)")));

/**
 * The required order data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgRecurringSaleAdapter
 * @see IEdfaPgOrder
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The required order data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgRecurringSaleAdapter
 * @see IEdfaPgOrder
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The required order data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgRecurringSaleAdapter
 * @see IEdfaPgOrder
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * The required order data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgRecurringSaleAdapter
 * @see IEdfaPgOrder
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Extra.Companion")))
@interface Edfapay_pg_sdkExtraCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The required order data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgRecurringSaleAdapter
 * @see IEdfaPgOrder
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkExtraCompanion *shared __attribute__((swift_name("shared")));

/**
 * The required order data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgRecurringSaleAdapter
 * @see IEdfaPgOrder
 */
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Card data for S2S / UI flows. The host app supplies an instance, e.g. from a form
 * or a sandbox test value kept in the app (not in the SDK).
 *
 * @property number the credit card number.
 * @property expireMonth the month of expiry of the credit card. Month in the form XX.
 * @property expireYear the year of expiry of the credit card. Year in the form XXXX.
 * @property cvv the CVV/CVC2 credit card verification code. 3-4 symbols.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgCard")))
@interface Edfapay_pg_sdkEdfaPgCard : Edfapay_pg_sdkBase
- (instancetype)initWithNumber:(NSString *)number expireMonth:(int32_t)expireMonth expireYear:(int32_t)expireYear cvv:(NSString *)cvv __attribute__((swift_name("init(number:expireMonth:expireYear:cvv:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkEdfaPgCardCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkEdfaPgCard *)doCopyNumber:(NSString *)number expireMonth:(int32_t)expireMonth expireYear:(int32_t)expireYear cvv:(NSString *)cvv __attribute__((swift_name("doCopy(number:expireMonth:expireYear:cvv:)")));

/**
 * Card data for S2S / UI flows. The host app supplies an instance, e.g. from a form
 * or a sandbox test value kept in the app (not in the SDK).
 *
 * @property number the credit card number.
 * @property expireMonth the month of expiry of the credit card. Month in the form XX.
 * @property expireYear the year of expiry of the credit card. Year in the form XXXX.
 * @property cvv the CVV/CVC2 credit card verification code. 3-4 symbols.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Card data for S2S / UI flows. The host app supplies an instance, e.g. from a form
 * or a sandbox test value kept in the app (not in the SDK).
 *
 * @property number the credit card number.
 * @property expireMonth the month of expiry of the credit card. Month in the form XX.
 * @property expireYear the year of expiry of the credit card. Year in the form XXXX.
 * @property cvv the CVV/CVC2 credit card verification code. 3-4 symbols.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Card data for S2S / UI flows. The host app supplies an instance, e.g. from a form
 * or a sandbox test value kept in the app (not in the SDK).
 *
 * @property number the credit card number.
 * @property expireMonth the month of expiry of the credit card. Month in the form XX.
 * @property expireYear the year of expiry of the credit card. Year in the form XXXX.
 * @property cvv the CVV/CVC2 credit card verification code. 3-4 symbols.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cvv __attribute__((swift_name("cvv")));
@property (readonly) int32_t expireMonth __attribute__((swift_name("expireMonth")));
@property (readonly) int32_t expireYear __attribute__((swift_name("expireYear")));
@property (readonly) NSString *number __attribute__((swift_name("number")));
@end


/**
 * Card data for S2S / UI flows. The host app supplies an instance, e.g. from a form
 * or a sandbox test value kept in the app (not in the SDK).
 *
 * @property number the credit card number.
 * @property expireMonth the month of expiry of the credit card. Month in the form XX.
 * @property expireYear the year of expiry of the credit card. Year in the form XXXX.
 * @property cvv the CVV/CVC2 credit card verification code. 3-4 symbols.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgCard.Companion")))
@interface Edfapay_pg_sdkEdfaPgCardCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Card data for S2S / UI flows. The host app supplies an instance, e.g. from a form
 * or a sandbox test value kept in the app (not in the SDK).
 *
 * @property number the credit card number.
 * @property expireMonth the month of expiry of the credit card. Month in the form XX.
 * @property expireYear the year of expiry of the credit card. Year in the form XXXX.
 * @property cvv the CVV/CVC2 credit card verification code. 3-4 symbols.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkEdfaPgCardCompanion *shared __attribute__((swift_name("shared")));

/**
 * Card data for S2S / UI flows. The host app supplies an instance, e.g. from a form
 * or a sandbox test value kept in the app (not in the SDK).
 *
 * @property number the credit card number.
 * @property expireMonth the month of expiry of the credit card. Month in the form XX.
 * @property expireYear the year of expiry of the credit card. Year in the form XXXX.
 * @property cvv the CVV/CVC2 credit card verification code. 3-4 symbols.
 */
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 *
 * @property channelId payment channel (Sub-account). String up to 16 characters.
 * @property recurringInit initialization of the transaction with possible following recurring.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgSaleOptions")))
@interface Edfapay_pg_sdkEdfaPgSaleOptions : Edfapay_pg_sdkBase
- (instancetype)initWithChannelId:(NSString * _Nullable)channelId recurringInit:(Edfapay_pg_sdkBoolean * _Nullable)recurringInit __attribute__((swift_name("init(channelId:recurringInit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkEdfaPgSaleOptionsCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkEdfaPgSaleOptions *)doCopyChannelId:(NSString * _Nullable)channelId recurringInit:(Edfapay_pg_sdkBoolean * _Nullable)recurringInit __attribute__((swift_name("doCopy(channelId:recurringInit:)")));

/**
 *
 * @property channelId payment channel (Sub-account). String up to 16 characters.
 * @property recurringInit initialization of the transaction with possible following recurring.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 *
 * @property channelId payment channel (Sub-account). String up to 16 characters.
 * @property recurringInit initialization of the transaction with possible following recurring.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 *
 * @property channelId payment channel (Sub-account). String up to 16 characters.
 * @property recurringInit initialization of the transaction with possible following recurring.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property (readonly) Edfapay_pg_sdkBoolean * _Nullable recurringInit __attribute__((swift_name("recurringInit")));
@end


/**
 *
 * @property channelId payment channel (Sub-account). String up to 16 characters.
 * @property recurringInit initialization of the transaction with possible following recurring.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgSaleOptions.Companion")))
@interface Edfapay_pg_sdkEdfaPgSaleOptionsCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 *
 * @property channelId payment channel (Sub-account). String up to 16 characters.
 * @property recurringInit initialization of the transaction with possible following recurring.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkEdfaPgSaleOptionsCompanion *shared __attribute__((swift_name("shared")));

/**
 *
 * @property channelId payment channel (Sub-account). String up to 16 characters.
 * @property recurringInit initialization of the transaction with possible following recurring.
 */
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 *
 * @property currency the currency. 3-letter code.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgSaleOrder")))
@interface Edfapay_pg_sdkEdfaPgSaleOrder : Edfapay_pg_sdkBase
- (instancetype)initWithId:(NSString *)id amount:(double)amount currency:(NSString *)currency description:(NSString *)description __attribute__((swift_name("init(id:amount:currency:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkEdfaPgSaleOrderCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkEdfaPgSaleOrder *)doCopyId:(NSString *)id amount:(double)amount currency:(NSString *)currency description:(NSString *)description __attribute__((swift_name("doCopy(id:amount:currency:description:)")));

/**
 *
 * @property currency the currency. 3-letter code.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)formattedAmount __attribute__((swift_name("formattedAmount()")));
- (NSString *)formattedCurrency __attribute__((swift_name("formattedCurrency()")));

/**
 *
 * @property currency the currency. 3-letter code.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 *
 * @property currency the currency. 3-letter code.
 */
- (NSString *)description __attribute__((swift_name("description()")));
- (NSArray<NSString *> *)validate __attribute__((swift_name("validate()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end


/**
 *
 * @property currency the currency. 3-letter code.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgSaleOrder.Companion")))
@interface Edfapay_pg_sdkEdfaPgSaleOrderCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 *
 * @property currency the currency. 3-letter code.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkEdfaPgSaleOrderCompanion *shared __attribute__((swift_name("shared")));

/**
 *
 * @property currency the currency. 3-letter code.
 */
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The required payer data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayerOptions
 *
 * @property firstName customer’s name. String up to 32 characters.
 * @property lastName customer’s surname. String up to 32 characters.
 * @property address customer’s address. String up to 255 characters.
 * @property country customer’s country. 2-letter code.
 * @property city customer’s city. String up to 32 characters.
 * @property zip ZIP-code of the Customer. String up to 32 characters.
 * @property email customer’s email. String up to 256 characters.
 * @property phone customer’s phone. String up to 32 characters.
 * @property ip IP-address of the Customer. XXX.XXX.XXX.XXX.
 * @property options the optional [EdfaPgPayerOptions].
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgPayer")))
@interface Edfapay_pg_sdkEdfaPgPayer : Edfapay_pg_sdkBase
- (instancetype)initWithFirstName:(NSString *)firstName lastName:(NSString *)lastName address:(NSString *)address country:(NSString *)country city:(NSString *)city zip:(NSString *)zip email:(NSString *)email phone:(NSString *)phone ip:(NSString *)ip options:(Edfapay_pg_sdkEdfaPgPayerOptions * _Nullable)options __attribute__((swift_name("init(firstName:lastName:address:country:city:zip:email:phone:ip:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkEdfaPgPayerCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkEdfaPgPayer *)doCopyFirstName:(NSString *)firstName lastName:(NSString *)lastName address:(NSString *)address country:(NSString *)country city:(NSString *)city zip:(NSString *)zip email:(NSString *)email phone:(NSString *)phone ip:(NSString *)ip options:(Edfapay_pg_sdkEdfaPgPayerOptions * _Nullable)options __attribute__((swift_name("doCopy(firstName:lastName:address:country:city:zip:email:phone:ip:options:)")));

/**
 * The required payer data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayerOptions
 *
 * @property firstName customer’s name. String up to 32 characters.
 * @property lastName customer’s surname. String up to 32 characters.
 * @property address customer’s address. String up to 255 characters.
 * @property country customer’s country. 2-letter code.
 * @property city customer’s city. String up to 32 characters.
 * @property zip ZIP-code of the Customer. String up to 32 characters.
 * @property email customer’s email. String up to 256 characters.
 * @property phone customer’s phone. String up to 32 characters.
 * @property ip IP-address of the Customer. XXX.XXX.XXX.XXX.
 * @property options the optional [EdfaPgPayerOptions].
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The required payer data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayerOptions
 *
 * @property firstName customer’s name. String up to 32 characters.
 * @property lastName customer’s surname. String up to 32 characters.
 * @property address customer’s address. String up to 255 characters.
 * @property country customer’s country. 2-letter code.
 * @property city customer’s city. String up to 32 characters.
 * @property zip ZIP-code of the Customer. String up to 32 characters.
 * @property email customer’s email. String up to 256 characters.
 * @property phone customer’s phone. String up to 32 characters.
 * @property ip IP-address of the Customer. XXX.XXX.XXX.XXX.
 * @property options the optional [EdfaPgPayerOptions].
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The required payer data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayerOptions
 *
 * @property firstName customer’s name. String up to 32 characters.
 * @property lastName customer’s surname. String up to 32 characters.
 * @property address customer’s address. String up to 255 characters.
 * @property country customer’s country. 2-letter code.
 * @property city customer’s city. String up to 32 characters.
 * @property zip ZIP-code of the Customer. String up to 32 characters.
 * @property email customer’s email. String up to 256 characters.
 * @property phone customer’s phone. String up to 32 characters.
 * @property ip IP-address of the Customer. XXX.XXX.XXX.XXX.
 * @property options the optional [EdfaPgPayerOptions].
 */
- (NSString *)description __attribute__((swift_name("description()")));
- (NSArray<NSString *> *)validate __attribute__((swift_name("validate()")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *ip __attribute__((swift_name("ip")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) Edfapay_pg_sdkEdfaPgPayerOptions * _Nullable options __attribute__((swift_name("options")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@property (readonly) NSString *zip __attribute__((swift_name("zip")));
@end


/**
 * The required payer data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayerOptions
 *
 * @property firstName customer’s name. String up to 32 characters.
 * @property lastName customer’s surname. String up to 32 characters.
 * @property address customer’s address. String up to 255 characters.
 * @property country customer’s country. 2-letter code.
 * @property city customer’s city. String up to 32 characters.
 * @property zip ZIP-code of the Customer. String up to 32 characters.
 * @property email customer’s email. String up to 256 characters.
 * @property phone customer’s phone. String up to 32 characters.
 * @property ip IP-address of the Customer. XXX.XXX.XXX.XXX.
 * @property options the optional [EdfaPgPayerOptions].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgPayer.Companion")))
@interface Edfapay_pg_sdkEdfaPgPayerCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The required payer data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayerOptions
 *
 * @property firstName customer’s name. String up to 32 characters.
 * @property lastName customer’s surname. String up to 32 characters.
 * @property address customer’s address. String up to 255 characters.
 * @property country customer’s country. 2-letter code.
 * @property city customer’s city. String up to 32 characters.
 * @property zip ZIP-code of the Customer. String up to 32 characters.
 * @property email customer’s email. String up to 256 characters.
 * @property phone customer’s phone. String up to 32 characters.
 * @property ip IP-address of the Customer. XXX.XXX.XXX.XXX.
 * @property options the optional [EdfaPgPayerOptions].
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkEdfaPgPayerCompanion *shared __attribute__((swift_name("shared")));

/**
 * The required payer data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayerOptions
 *
 * @property firstName customer’s name. String up to 32 characters.
 * @property lastName customer’s surname. String up to 32 characters.
 * @property address customer’s address. String up to 255 characters.
 * @property country customer’s country. 2-letter code.
 * @property city customer’s city. String up to 32 characters.
 * @property zip ZIP-code of the Customer. String up to 32 characters.
 * @property email customer’s email. String up to 256 characters.
 * @property phone customer’s phone. String up to 32 characters.
 * @property ip IP-address of the Customer. XXX.XXX.XXX.XXX.
 * @property options the optional [EdfaPgPayerOptions].
 */
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The optional payer options data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayer
 *
 * @property middleName customer’s middle name. String up to 32 characters.
 * @property birthdate customer’s birthday. Format: yyyy-MM-dd, e.g. 1970-02-17.
 * @property address2 the adjoining road or locality of the сustomer’s address. String up to 255 characters.
 * @property state customer’s state. String up to 32 characters.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgPayerOptions")))
@interface Edfapay_pg_sdkEdfaPgPayerOptions : Edfapay_pg_sdkBase
- (instancetype)initWithMiddleName:(NSString * _Nullable)middleName birthdate:(Edfapay_pg_sdkKotlinx_datetimeLocalDate * _Nullable)birthdate address2:(NSString * _Nullable)address2 state:(NSString * _Nullable)state __attribute__((swift_name("init(middleName:birthdate:address2:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkEdfaPgPayerOptionsCompanion *companion __attribute__((swift_name("companion")));
- (Edfapay_pg_sdkEdfaPgPayerOptions *)doCopyMiddleName:(NSString * _Nullable)middleName birthdate:(Edfapay_pg_sdkKotlinx_datetimeLocalDate * _Nullable)birthdate address2:(NSString * _Nullable)address2 state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(middleName:birthdate:address2:state:)")));

/**
 * The optional payer options data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayer
 *
 * @property middleName customer’s middle name. String up to 32 characters.
 * @property birthdate customer’s birthday. Format: yyyy-MM-dd, e.g. 1970-02-17.
 * @property address2 the adjoining road or locality of the сustomer’s address. String up to 255 characters.
 * @property state customer’s state. String up to 32 characters.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * The optional payer options data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayer
 *
 * @property middleName customer’s middle name. String up to 32 characters.
 * @property birthdate customer’s birthday. Format: yyyy-MM-dd, e.g. 1970-02-17.
 * @property address2 the adjoining road or locality of the сustomer’s address. String up to 255 characters.
 * @property state customer’s state. String up to 32 characters.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * The optional payer options data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayer
 *
 * @property middleName customer’s middle name. String up to 32 characters.
 * @property birthdate customer’s birthday. Format: yyyy-MM-dd, e.g. 1970-02-17.
 * @property address2 the adjoining road or locality of the сustomer’s address. String up to 255 characters.
 * @property state customer’s state. String up to 32 characters.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address2 __attribute__((swift_name("address2")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeLocalDate * _Nullable birthdate __attribute__((swift_name("birthdate")));
@property (readonly) NSString * _Nullable middleName __attribute__((swift_name("middleName")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@end


/**
 * The optional payer options data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayer
 *
 * @property middleName customer’s middle name. String up to 32 characters.
 * @property birthdate customer’s birthday. Format: yyyy-MM-dd, e.g. 1970-02-17.
 * @property address2 the adjoining road or locality of the сustomer’s address. String up to 255 characters.
 * @property state customer’s state. String up to 32 characters.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaPgPayerOptions.Companion")))
@interface Edfapay_pg_sdkEdfaPgPayerOptionsCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The optional payer options data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayer
 *
 * @property middleName customer’s middle name. String up to 32 characters.
 * @property birthdate customer’s birthday. Format: yyyy-MM-dd, e.g. 1970-02-17.
 * @property address2 the adjoining road or locality of the сustomer’s address. String up to 255 characters.
 * @property state customer’s state. String up to 32 characters.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkEdfaPgPayerOptionsCompanion *shared __attribute__((swift_name("shared")));

/**
 * The optional payer options data holder.
 * @see com.edfapg.sdk.feature.adapter.EdfaPgSaleAdapter
 * @see EdfaPgPayer
 *
 * @property middleName customer’s middle name. String up to 32 characters.
 * @property birthdate customer’s birthday. Format: yyyy-MM-dd, e.g. 1970-02-17.
 * @property address2 the adjoining road or locality of the сustomer’s address. String up to 255 characters.
 * @property state customer’s state. String up to 32 characters.
 */
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionFilter")))
@interface Edfapay_pg_sdkTransactionFilter : Edfapay_pg_sdkBase
- (instancetype)initWithPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize rrn:(NSString * _Nullable)rrn status:(NSString * _Nullable)status id:(NSString * _Nullable)id orderId:(NSString * _Nullable)orderId __attribute__((swift_name("init(pageNumber:pageSize:rrn:status:id:orderId:)"))) __attribute__((objc_designated_initializer));
- (Edfapay_pg_sdkTransactionFilter *)doCopyPageNumber:(int32_t)pageNumber pageSize:(int32_t)pageSize rrn:(NSString * _Nullable)rrn status:(NSString * _Nullable)status id:(NSString * _Nullable)id orderId:(NSString * _Nullable)orderId __attribute__((swift_name("doCopy(pageNumber:pageSize:rrn:status:id:orderId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));
@property (readonly) int32_t pageNumber __attribute__((swift_name("pageNumber")));
@property (readonly) int32_t pageSize __attribute__((swift_name("pageSize")));
@property (readonly) NSString * _Nullable rrn __attribute__((swift_name("rrn")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
@interface EdfaPayUi : Edfapay_pg_sdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UIViewController *)createOnDismiss:(void (^)(void))onDismiss __attribute__((swift_name("create(onDismiss:)")));
@end

__attribute__((objc_subclassing_restricted))
@interface EdfaApplePaySheet : Edfapay_pg_sdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) EdfaApplePaySheetCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canMakePayments __attribute__((swift_name("canMakePayments()")));
- (void)presentFromViewController:(UIViewController *)fromViewController countryCode:(NSString *)countryCode currencyCode:(NSString *)currencyCode merchantName:(NSString *)merchantName order:(Edfapay_pg_sdkEdfaPgSaleOrder *)order payer:(Edfapay_pg_sdkEdfaPgPayer *)payer successUrl:(NSString *)successUrl failureUrl:(NSString *)failureUrl onSuccess:(void (^)(NSString *))onSuccess onFailure:(void (^)(NSString *))onFailure onCancelled:(void (^)(void))onCancelled __attribute__((swift_name("present(fromViewController:countryCode:currencyCode:merchantName:order:payer:successUrl:failureUrl:onSuccess:onFailure:onCancelled:)")));
- (void)presentFromViewController:(UIViewController *)fromViewController merchantIdentifier:(NSString *)merchantIdentifier countryCode:(NSString *)countryCode currencyCode:(NSString *)currencyCode merchantName:(NSString *)merchantName order:(Edfapay_pg_sdkEdfaPgSaleOrder *)order payer:(Edfapay_pg_sdkEdfaPgPayer *)payer successUrl:(NSString *)successUrl failureUrl:(NSString *)failureUrl onSuccess:(void (^)(NSString *))onSuccess onFailure:(void (^)(NSString *))onFailure onCancelled:(void (^)(void))onCancelled __attribute__((swift_name("present(fromViewController:merchantIdentifier:countryCode:currencyCode:merchantName:order:payer:successUrl:failureUrl:onSuccess:onFailure:onCancelled:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdfaApplePaySheet.Companion")))
@interface EdfaApplePaySheetCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) EdfaApplePaySheetCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *DEFAULT_MERCHANT_IDENTIFIER __attribute__((swift_name("DEFAULT_MERCHANT_IDENTIFIER")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardBackState")))
@interface Edfapay_pg_sdkCardBackState : Edfapay_pg_sdkBase
- (instancetype)initWithCardNumber:(NSString *)cardNumber holderName:(NSString *)holderName expiry:(NSString *)expiry cvv:(NSString *)cvv amount:(NSString *)amount currency:(NSString *)currency __attribute__((swift_name("init(cardNumber:holderName:expiry:cvv:amount:currency:)"))) __attribute__((objc_designated_initializer));
- (Edfapay_pg_sdkCardBackState *)doCopyCardNumber:(NSString *)cardNumber holderName:(NSString *)holderName expiry:(NSString *)expiry cvv:(NSString *)cvv amount:(NSString *)amount currency:(NSString *)currency __attribute__((swift_name("doCopy(cardNumber:holderName:expiry:cvv:amount:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *cardNumber __attribute__((swift_name("cardNumber")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) NSString *cvv __attribute__((swift_name("cvv")));
@property (readonly) NSString *expiry __attribute__((swift_name("expiry")));
@property (readonly) NSString *holderName __attribute__((swift_name("holderName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface Edfapay_pg_sdkUtilsKt : Edfapay_pg_sdkBase

/**
 * KMP-safe money formatting: 1,000.50
 * - thousands separator: ','
 * - decimal separator: '.'
 * - always 2 fractional digits
 */
+ (NSString *)formatMoney:(double)receiver __attribute__((swift_name("formatMoney(_:)")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface Edfapay_pg_sdkKotlinIllegalStateException : Edfapay_pg_sdkKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface Edfapay_pg_sdkKotlinCancellationException : Edfapay_pg_sdkKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Edfapay_pg_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface Edfapay_pg_sdkKotlinx_serialization_jsonJsonElement : Edfapay_pg_sdkBase
@property (class, readonly, getter=companion) Edfapay_pg_sdkKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Edfapay_pg_sdkKotlinArray<T> : Edfapay_pg_sdkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Edfapay_pg_sdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Edfapay_pg_sdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface Edfapay_pg_sdkKotlinEnumCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol Edfapay_pg_sdkKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<Edfapay_pg_sdkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Edfapay_pg_sdkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol Edfapay_pg_sdkKotlinx_serialization_coreKSerializer <Edfapay_pg_sdkKotlinx_serialization_coreSerializationStrategy, Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface Edfapay_pg_sdkKotlinx_datetimeLocalDate : Edfapay_pg_sdkBase <Edfapay_pg_sdkKotlinComparable>
- (instancetype)initWithYear:(int32_t)year month:(int32_t)month day:(int32_t)day __attribute__((swift_name("init(year:month:day:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(Edfapay_pg_sdkKotlinx_datetimeMonth *)month day_:(int32_t)day __attribute__((swift_name("init(year:month:day_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(Edfapay_pg_sdkKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (Edfapay_pg_sdkKotlinx_datetimeLocalDateRange *)rangeToThat:(Edfapay_pg_sdkKotlinx_datetimeLocalDate *)that __attribute__((swift_name("rangeTo(that:)")));
- (Edfapay_pg_sdkKotlinx_datetimeLocalDateRange *)rangeUntilThat:(Edfapay_pg_sdkKotlinx_datetimeLocalDate *)that __attribute__((swift_name("rangeUntil(that:)")));
- (int64_t)toEpochDays __attribute__((swift_name("toEpochDays()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t day __attribute__((swift_name("day")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth"))) __attribute__((deprecated("Use the 'day' property instead")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber"))) __attribute__((deprecated("Use the 'month' property instead")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface Edfapay_pg_sdkKotlinx_serialization_jsonJsonElementCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol Edfapay_pg_sdkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol Edfapay_pg_sdkKotlinx_serialization_coreEncoder
@required
- (id<Edfapay_pg_sdkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) Edfapay_pg_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<Edfapay_pg_sdkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<Edfapay_pg_sdkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) Edfapay_pg_sdkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol Edfapay_pg_sdkKotlinx_serialization_coreDecoder
@required
- (id<Edfapay_pg_sdkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (Edfapay_pg_sdkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) Edfapay_pg_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface Edfapay_pg_sdkKotlinx_datetimeMonth : Edfapay_pg_sdkKotlinEnum<Edfapay_pg_sdkKotlinx_datetimeMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
+ (Edfapay_pg_sdkKotlinArray<Edfapay_pg_sdkKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Edfapay_pg_sdkKotlinx_datetimeMonth *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface Edfapay_pg_sdkKotlinx_datetimeLocalDateCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
- (id<Edfapay_pg_sdkKotlinx_datetimeDateTimeFormat>)FormatBlock:(void (^)(id<Edfapay_pg_sdkKotlinx_datetimeDateTimeFormatBuilderWithDate>))block __attribute__((swift_name("Format(block:)")));
- (Edfapay_pg_sdkKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays:(int32_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays:)")));
- (Edfapay_pg_sdkKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays_:(int64_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays_:)")));
- (Edfapay_pg_sdkKotlinx_datetimeLocalDate *)parseInput:(id)input format:(id<Edfapay_pg_sdkKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol Edfapay_pg_sdkKotlinIterable
@required
- (id<Edfapay_pg_sdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol Edfapay_pg_sdkKotlinCollection <Edfapay_pg_sdkKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_datetimeLocalDateProgression")))
@interface Edfapay_pg_sdkKotlinx_datetimeLocalDateProgression : Edfapay_pg_sdkBase <Edfapay_pg_sdkKotlinCollection>
@property (class, readonly, getter=companion) Edfapay_pg_sdkKotlinx_datetimeLocalDateProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsElement:(Edfapay_pg_sdkKotlinx_datetimeLocalDate *)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (id<Edfapay_pg_sdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeLocalDate *first __attribute__((swift_name("first")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeLocalDate *last __attribute__((swift_name("last")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol Edfapay_pg_sdkKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol Edfapay_pg_sdkKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateRange")))
@interface Edfapay_pg_sdkKotlinx_datetimeLocalDateRange : Edfapay_pg_sdkKotlinx_datetimeLocalDateProgression <Edfapay_pg_sdkKotlinClosedRange, Edfapay_pg_sdkKotlinOpenEndRange>
- (instancetype)initWithStart:(Edfapay_pg_sdkKotlinx_datetimeLocalDate *)start endInclusive:(Edfapay_pg_sdkKotlinx_datetimeLocalDate *)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkKotlinx_datetimeLocalDateRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsElement:(Edfapay_pg_sdkKotlinx_datetimeLocalDate *)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsValue:(Edfapay_pg_sdkKotlinx_datetimeLocalDate *)element __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(Edfapay_pg_sdkKotlinx_datetimeLocalDate *)element __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeLocalDate *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("This throws an exception if the exclusive end if not inside the platform-specific boundaries for LocalDate. The 'endInclusive' property does not throw and should be preferred.")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeLocalDate *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeLocalDate *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface Edfapay_pg_sdkKotlinx_datetimeDayOfWeek : Edfapay_pg_sdkKotlinEnum<Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (Edfapay_pg_sdkKotlinArray<Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Edfapay_pg_sdkKotlinx_datetimeDayOfWeek *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol Edfapay_pg_sdkKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) Edfapay_pg_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface Edfapay_pg_sdkKotlinx_serialization_coreSerializersModule : Edfapay_pg_sdkBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<Edfapay_pg_sdkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Edfapay_pg_sdkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Edfapay_pg_sdkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Edfapay_pg_sdkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol Edfapay_pg_sdkKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface Edfapay_pg_sdkKotlinx_serialization_coreSerialKind : Edfapay_pg_sdkBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol Edfapay_pg_sdkKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<Edfapay_pg_sdkKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) Edfapay_pg_sdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Edfapay_pg_sdkKotlinNothing : Edfapay_pg_sdkBase
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol Edfapay_pg_sdkKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<Edfapay_pg_sdkKotlinAppendable>)formatToAppendable:(id<Edfapay_pg_sdkKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilder")))
@protocol Edfapay_pg_sdkKotlinx_datetimeDateTimeFormatBuilder
@required
- (void)charsValue:(NSString *)value __attribute__((swift_name("chars(value:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithYearMonth")))
@protocol Edfapay_pg_sdkKotlinx_datetimeDateTimeFormatBuilderWithYearMonth <Edfapay_pg_sdkKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)monthNameNames:(Edfapay_pg_sdkKotlinx_datetimeMonthNames *)names __attribute__((swift_name("monthName(names:)")));
- (void)monthNumberPadding:(Edfapay_pg_sdkKotlinx_datetimePadding *)padding __attribute__((swift_name("monthNumber(padding:)")));
- (void)yearPadding:(Edfapay_pg_sdkKotlinx_datetimePadding *)padding __attribute__((swift_name("year(padding:)")));
- (void)yearMonthFormat:(id<Edfapay_pg_sdkKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("yearMonth(format:)")));
- (void)yearTwoDigitsBaseYear:(int32_t)baseYear __attribute__((swift_name("yearTwoDigits(baseYear:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDate")))
@protocol Edfapay_pg_sdkKotlinx_datetimeDateTimeFormatBuilderWithDate <Edfapay_pg_sdkKotlinx_datetimeDateTimeFormatBuilderWithYearMonth>
@required
- (void)dateFormat:(id<Edfapay_pg_sdkKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("date(format:)")));
- (void)dayPadding:(Edfapay_pg_sdkKotlinx_datetimePadding *)padding __attribute__((swift_name("day(padding:)")));
- (void)dayOfMonthPadding:(Edfapay_pg_sdkKotlinx_datetimePadding *)padding __attribute__((swift_name("dayOfMonth(padding:)"))) __attribute__((deprecated("Use 'day' instead")));
- (void)dayOfWeekNames:(Edfapay_pg_sdkKotlinx_datetimeDayOfWeekNames *)names __attribute__((swift_name("dayOfWeek(names:)")));
- (void)dayOfYearPadding:(Edfapay_pg_sdkKotlinx_datetimePadding *)padding __attribute__((swift_name("dayOfYear(padding:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateProgression.Companion")))
@interface Edfapay_pg_sdkKotlinx_datetimeLocalDateProgressionCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkKotlinx_datetimeLocalDateProgressionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateRange.Companion")))
@interface Edfapay_pg_sdkKotlinx_datetimeLocalDateRangeCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkKotlinx_datetimeLocalDateRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeLocalDateRange *EMPTY __attribute__((swift_name("EMPTY")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol Edfapay_pg_sdkKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<Edfapay_pg_sdkKotlinKClass>)kClass provider:(id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer> (^)(NSArray<id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>> *typeArgumentsSerializers))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<Edfapay_pg_sdkKotlinKClass>)kClass serializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Edfapay_pg_sdkKotlinKClass>)baseClass actualClass:(id<Edfapay_pg_sdkKotlinKClass>)actualClass actualSerializer:(id<Edfapay_pg_sdkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<Edfapay_pg_sdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<Edfapay_pg_sdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<Edfapay_pg_sdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<Edfapay_pg_sdkKotlinKClass>)baseClass defaultSerializerProvider:(id<Edfapay_pg_sdkKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id value))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Edfapay_pg_sdkKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Edfapay_pg_sdkKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol Edfapay_pg_sdkKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol Edfapay_pg_sdkKotlinKClass <Edfapay_pg_sdkKotlinKDeclarationContainer, Edfapay_pg_sdkKotlinKAnnotatedElement, Edfapay_pg_sdkKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol Edfapay_pg_sdkKotlinAppendable
@required

/**
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (id<Edfapay_pg_sdkKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));

/**
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (id<Edfapay_pg_sdkKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));

/**
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (id<Edfapay_pg_sdkKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimePadding")))
@interface Edfapay_pg_sdkKotlinx_datetimePadding : Edfapay_pg_sdkKotlinEnum<Edfapay_pg_sdkKotlinx_datetimePadding *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimePadding *none __attribute__((swift_name("none")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimePadding *zero __attribute__((swift_name("zero")));
@property (class, readonly) Edfapay_pg_sdkKotlinx_datetimePadding *space __attribute__((swift_name("space")));
+ (Edfapay_pg_sdkKotlinArray<Edfapay_pg_sdkKotlinx_datetimePadding *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<Edfapay_pg_sdkKotlinx_datetimePadding *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames")))
@interface Edfapay_pg_sdkKotlinx_datetimeDayOfWeekNames : Edfapay_pg_sdkBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMonday:(NSString *)monday tuesday:(NSString *)tuesday wednesday:(NSString *)wednesday thursday:(NSString *)thursday friday:(NSString *)friday saturday:(NSString *)saturday sunday:(NSString *)sunday __attribute__((swift_name("init(monday:tuesday:wednesday:thursday:friday:saturday:sunday:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkKotlinx_datetimeDayOfWeekNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames")))
@interface Edfapay_pg_sdkKotlinx_datetimeMonthNames : Edfapay_pg_sdkBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithJanuary:(NSString *)january february:(NSString *)february march:(NSString *)march april:(NSString *)april may:(NSString *)may june:(NSString *)june july:(NSString *)july august:(NSString *)august september:(NSString *)september october:(NSString *)october november:(NSString *)november december:(NSString *)december __attribute__((swift_name("init(january:february:march:april:may:june:july:august:september:october:november:december:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Edfapay_pg_sdkKotlinx_datetimeMonthNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames.Companion")))
@interface Edfapay_pg_sdkKotlinx_datetimeDayOfWeekNamesCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkKotlinx_datetimeDayOfWeekNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeekNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeDayOfWeekNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames.Companion")))
@interface Edfapay_pg_sdkKotlinx_datetimeMonthNamesCompanion : Edfapay_pg_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Edfapay_pg_sdkKotlinx_datetimeMonthNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeMonthNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) Edfapay_pg_sdkKotlinx_datetimeMonthNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
