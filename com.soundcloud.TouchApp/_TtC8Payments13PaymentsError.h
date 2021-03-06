//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC8Payments13PaymentsError : NSObject
{
}

+ (id)dismissedWhyAds;
+ (id)failedConfigUpdate;
+ (id)fetchStoreProductsAlreadyRunning;
+ (id)fetchStoreProductsFailed;
+ (id)appStoreTransactionFailed;
+ (id)noAppStoreProductsFound;
+ (id)noTokenFound;
+ (id)restoreProductsSynchronizationFailed;
+ (id)receiptRefreshFailed;
+ (id)receiptNotFound;
+ (id)verificationFailed;
+ (id)pollingFailed;
+ (id)checkoutAlreadySubscribed;
+ (id)checkoutUnconfirmedEmail;
+ (id)checkoutWrongUser;
+ (id)checkoutStartFailed;
+ (_Bool)shouldOpenSupportSiteWithError:(id)arg1;
+ (_Bool)purchaseSucceedsWithError:(id)arg1;
+ (_Bool)shouldDoNothingWithError:(id)arg1;
+ (_Bool)isAppStoreErrorWithError:(id)arg1;
+ (_Bool)shouldLogUserOutWithError:(id)arg1;
+ (id)cancelTitleWithError:(id)arg1;
+ (id)continueTitleWithError:(id)arg1;
+ (id)alertMessageWithError:(id)arg1;
+ (id)alertTitleWithError:(id)arg1;
+ (id)humanReadableWithError:(id)arg1;
+ (id)parseWithCheckoutError:(id)arg1 default:(id)arg2;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;

@end

