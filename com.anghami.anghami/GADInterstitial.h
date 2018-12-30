//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdMediationDelegate-Protocol.h"
#import "GADRewardBasedVideoAdGMSGHandlerDelegate-Protocol.h"
#import "GADSlotAdEventDelegate-Protocol.h"
#import "GADSlotAdLoadDelegate-Protocol.h"
#import "GADSlotAdResponseDelegate-Protocol.h"
#import "GADSlotDelegate-Protocol.h"

@class GADBufferedClearcutLogger, GADClearcutLogger, GADInterstitialOwner, GADInterstitialViewController, GADSlot, NSError, NSString;
@protocol GADInAppPurchaseDelegate, GADInterstitialDelegate;

@interface GADInterstitial : NSObject <GADRewardBasedVideoAdGMSGHandlerDelegate, GADAdMediationDelegate, GADSlotAdEventDelegate, GADSlotAdLoadDelegate, GADSlotDelegate, GADSlotAdResponseDelegate>
{
    NSError *_alreadyUsedError;
    GADInterstitialOwner *_interstitialOwner;
    GADClearcutLogger *_logger;
    GADBufferedClearcutLogger *_bufferedLogger;
    _Bool _isMediated;
    _Bool _adUnitExposureBegan;
    _Bool _hasBeenUsed;
    NSString *_adUnitID;
    id <GADInterstitialDelegate> _delegate;
    id <GADInAppPurchaseDelegate> _inAppPurchaseDelegate;
    GADInterstitialViewController *_viewController;
    GADSlot *_slot;
}

@property(readonly, nonatomic) GADSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) GADInterstitialViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <GADInAppPurchaseDelegate> inAppPurchaseDelegate; // @synthesize inAppPurchaseDelegate=_inAppPurchaseDelegate;
@property(nonatomic) _Bool hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property(nonatomic) __weak id <GADInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;
- (void)setAdUnitID:(id)arg1;
- (id)init;
- (id)mediationConnectorForConfiguration:(id)arg1 networkConfiguration:(id)arg2;
- (void)slot:(id)arg1 willProcessMediatedAdResponse:(id)arg2;
- (_Bool)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id *)arg3;
- (_Bool)canPresentFullScreen;
- (_Bool)canFitAdSize:(struct CGSize)arg1 inWindowSize:(struct CGSize)arg2 withThreshold:(double)arg3;
- (void)presentFromRootViewController:(id)arg1;
- (void)adPresentationDidFail;
@property(readonly, nonatomic) _Bool isReady;
@property(readonly, copy, nonatomic) NSString *adNetworkClassName;
- (void)loadRequest:(id)arg1;
- (void)loadSlotFromCacheEntry:(id)arg1;
- (void)createSlot;
- (void)slotWillLeaveApplication:(id)arg1;
- (void)slotDidDismissScreen:(id)arg1;
- (void)slotWillDismissScreen:(id)arg1;
- (void)slotWillPresentScreen:(id)arg1;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (void)slotDidReceiveAdClick:(id)arg1;
- (_Bool)slot:(id)arg1 shouldLoadRequest:(id)arg2 error:(id *)arg3;
- (_Bool)slotShouldReloadCurrentRequest:(id)arg1;
- (void)slotDidLoadMRAIDAd:(id)arg1;
- (void)setMediated;
- (void)cancel;
- (void)dealloc;
- (id)initWithAdUnitID:(id)arg1;
- (void)rootObjectLoggerChanged;
- (void)interstitialAdIsDismissed;
- (void)interstitialAdIsPresented;
- (void)interstitialAdLoadFailedWithError:(id)arg1;
- (void)interstitialAdLoadSucceeded;
- (void)interstitialAdLoadStarted;
- (void)interstitialCreatedSlot:(id)arg1;
- (void)rewardBasedVideoAdGMSGHandlerDidReceiveStartVideoNotification:(id)arg1;
- (void)rewardBasedVideoAdGMSGHandler:(id)arg1 didReceiveRewardNotificationWithRewardItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

