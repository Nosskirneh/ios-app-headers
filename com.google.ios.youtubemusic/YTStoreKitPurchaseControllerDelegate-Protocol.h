//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol YTActivityWaitTimeoutDelegate;

@protocol YTStoreKitPurchaseControllerDelegate <NSObject>
- (void)storeKitPaymentFailed;
- (void)storeKitPaymentStarted;
- (void)storeKitProductsRequestStarted;
- (void)ypcGetOffersServiceSucceeded;
- (void)ypcGetOffersServiceFailed;
- (void)ypcInAppPurchasesEndpointStarted:(id <YTActivityWaitTimeoutDelegate>)arg1 timeoutInterval:(double)arg2;
- (void)ypcGetOffersServiceStarted:(id <YTActivityWaitTimeoutDelegate>)arg1 timeoutInterval:(double)arg2;

@optional
- (void)processingFailedWithError:(NSError *)arg1;
@end

