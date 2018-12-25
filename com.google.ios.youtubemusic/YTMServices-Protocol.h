//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeUIGlobals-Protocol.h"
#import "YTPlayerServicesServiceProvider-Protocol.h"

@class NSDate, YTBackgroundURLSessionNotifications, YTIdentityController, YTInterstitialPromoViewController, YTMARIController, YTMCSIActionsController, YTMClingManager, YTMLocationAuthorizationController, YTMMusicAppMetadata, YTMMusicGlobalConfig, YTMObserverCenter, YTMQuickActionsController, YTMSettings, YTMTagManager, YTMTodayWidgetController, YTMURLHandler, YTMVoicePromptController, YTPushNotificationController, YTStoreKitPurchaseController, YTTransactionQueueController;

@protocol YTMServices <YTInnerTubeUIGlobals, YTPlayerServicesServiceProvider>
@property(retain, nonatomic) NSDate *applicationInitDate;
- (YTMARIController *)ARIController;
- (YTMLocationAuthorizationController *)locationAuthorizationController;
- (YTMTodayWidgetController *)todayWidgetController;
- (YTPushNotificationController *)pushNotificationController;
- (void)didReceiveMemoryWarning;
- (YTMTagManager *)tagManager;
- (YTMQuickActionsController *)quickActionsController;
- (YTMURLHandler *)URLHandler;
- (YTMMusicGlobalConfig *)musicGlobalConfig;
- (YTMMusicAppMetadata *)musicAppMetadata;
- (YTTransactionQueueController *)transactionQueueController;
- (YTMVoicePromptController *)voicePromptController;
- (YTInterstitialPromoViewController *)interstitialPromoController;
- (YTStoreKitPurchaseController *)storeKitPurchaseController;
- (YTMClingManager *)clingManager;
- (YTMCSIActionsController *)CSIActionsController;
- (YTMObserverCenter *)observerCenter;
- (YTIdentityController *)identityController;
- (YTBackgroundURLSessionNotifications *)backgroundURLSessionNotifications;
- (YTMSettings *)settings;
- (void)prepareForBackgroundFetch;
- (void)start;
@end
