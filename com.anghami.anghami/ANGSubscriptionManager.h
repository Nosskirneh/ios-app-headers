//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANGSubscribeViewController;

@interface ANGSubscriptionManager : NSObject
{
    _Bool _isRunning;
    _Bool _isStoreShowing;
    _Bool _restoreInProgress;
    ANGSubscribeViewController *_storeController;
}

+ (id)sharedInstance;
@property _Bool restoreInProgress; // @synthesize restoreInProgress=_restoreInProgress;
@property(nonatomic) _Bool isStoreShowing; // @synthesize isStoreShowing=_isStoreShowing;
@property(readonly) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) ANGSubscribeViewController *storeController; // @synthesize storeController=_storeController;
- (void).cxx_destruct;
- (void)logSubscribeFailEvent:(id)arg1 message:(id)arg2;
- (void)reportViewStoreSource:(id)arg1 params:(id)arg2;
- (void)hideStoreAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideStoreAnimated:(_Bool)arg1;
- (void)showStoreFromMenu:(_Bool)arg1 fromViewController:(id)arg2 withParameters:(id)arg3 source:(id)arg4 userAction:(_Bool)arg5;
- (void)showStoreFromMenu:(_Bool)arg1 withParameters:(id)arg2 source:(id)arg3 userAction:(_Bool)arg4;
- (void)showStoreFromMenu:(_Bool)arg1 withParameters:(id)arg2 source:(id)arg3;
- (void)showUpgradeOptionsWithParameters:(id)arg1;
- (void)handlePurchaseError:(id)arg1;
- (void)logSuccessfulPurchase:(id)arg1;
- (void)restoreTransactions:(_Bool)arg1;
- (void)startReportSubscriptionPurchaseLoader:(id)arg1 urlString:(id)arg2 andSource:(id)arg3 andOnCompletion:(CDUnknownBlockType)arg4;
- (void)reportingLoaderCompleted:(_Bool)arg1 userAction:(_Bool)arg2 loader:(id)arg3 plan:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)subscribeToPlan:(id)arg1 withOperator:(id)arg2 andSource:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reportPurchasePlan:(id)arg1 source:(id)arg2 params:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startAppStoreReceiptValidationWithPlan:(id)arg1 source:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startAppleStorePurchaseWithProduct:(id)arg1 source:(id)arg2 params:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 showLoading:(_Bool)arg5;
- (void)promoCodeCompleted:(_Bool)arg1 loader:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)reportPromoCode:(id)arg1 parameters:(id)arg2 andOnCompletion:(CDUnknownBlockType)arg3;
- (void)subscribeToProductID:(id)arg1 andSource:(id)arg2;
- (void)subscribeToPlanMethod:(id)arg1 andSource:(id)arg2;
- (void)purchaseGift:(id)arg1 andSource:(id)arg2 params:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)purchaseConsumable:(id)arg1 andSource:(id)arg2 params:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;

@end
