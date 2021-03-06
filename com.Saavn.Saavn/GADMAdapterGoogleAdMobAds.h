//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAppEventDelegate-Protocol.h"
#import "GADBannerViewDelegate-Protocol.h"
#import "GADInterstitialDelegate-Protocol.h"
#import "GADMAdNetworkAdapter-Protocol.h"
#import "GADMRewardBasedVideoAdNetworkAdapter-Protocol.h"
#import "GADNativeAppInstallAdLoaderDelegate-Protocol.h"
#import "GADNativeContentAdLoaderDelegate-Protocol.h"
#import "GADNativeCustomTemplateAdLoaderDelegate-Protocol.h"
#import "GADOInterstitialAdClickDelegate-Protocol.h"
#import "GADORewardBasedVideoAdClickDelegate-Protocol.h"
#import "GADRewardBasedVideoAdDelegate-Protocol.h"

@class GADMAdNetworkConnector, GADOAdLoader, GADOBannerView, GADOInterstitial, GADORewardBasedVideoAd, NSString;
@protocol GADAppEventDelegate, GADMAdNetworkConnector, GADMRewardBasedVideoAdNetworkConnector;

@interface GADMAdapterGoogleAdMobAds : NSObject <GADMRewardBasedVideoAdNetworkAdapter, GADORewardBasedVideoAdClickDelegate, GADRewardBasedVideoAdDelegate, GADAppEventDelegate, GADMAdNetworkAdapter, GADBannerViewDelegate, GADInterstitialDelegate, GADOInterstitialAdClickDelegate, GADNativeAppInstallAdLoaderDelegate, GADNativeContentAdLoaderDelegate, GADNativeCustomTemplateAdLoaderDelegate>
{
    GADOBannerView *_bannerView;
    GADOInterstitial *_interstitial;
    GADORewardBasedVideoAd *_rewardBasedVideoAd;
    GADOAdLoader *_adLoader;
    GADMAdNetworkConnector<GADMAdNetworkConnector> *_connector;
    id <GADMRewardBasedVideoAdNetworkConnector> _rewardBasedVideoAdNetworkConnector;
    id <GADAppEventDelegate> _appEventDelegate;
    id _manualImpressionObserver;
}

+ (Class)networkExtrasClass;
+ (id)adapterVersion;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)adLoader:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adLoader:(id)arg1 didReceiveNativeCustomTemplateAd:(id)arg2;
- (id)nativeCustomTemplateIDsForAdLoader:(id)arg1;
- (void)adLoader:(id)arg1 didReceiveNativeContentAd:(id)arg2;
- (void)adLoader:(id)arg1 didReceiveNativeAppInstallAd:(id)arg2;
- (void)adLoader:(id)arg1 didReceiveNativeAd:(id)arg2;
- (void)interstitialDidReceiveAdClick:(id)arg1;
- (void)interstitialWillLeaveApplication:(id)arg1;
- (void)interstitialDidDismissScreen:(id)arg1;
- (void)interstitialWillDismissScreen:(id)arg1;
- (void)interstitialWillPresentScreen:(id)arg1;
- (void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialDidReceiveAd:(id)arg1;
- (void)adViewWillLeaveApplication:(id)arg1;
- (void)adViewDidDismissScreen:(id)arg1;
- (void)adViewWillDismissScreen:(id)arg1;
- (void)adViewWillPresentScreen:(id)arg1;
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (_Bool)handlesUserImpressions;
- (_Bool)handlesUserClicks;
- (void)changeAdSizeTo:(struct GADOAdSize)arg1;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (_Bool)isBannerAnimationOK:(long long)arg1;
- (void)stopBeingDelegate;
- (void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2;
- (void)getInterstitial;
- (void)getBannerWithSize:(struct GADOAdSize)arg1;
- (id)initWithGADMAdNetworkConnector:(id)arg1;
- (void)dealloc;
- (id)request;
- (void)rewardBasedVideoAdDidReceiveAdClick:(id)arg1;
- (void)rewardBasedVideoAdMetadataDidChange:(id)arg1;
- (void)rewardBasedVideoAd:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)rewardBasedVideoAd:(id)arg1 didRewardUserWithReward:(id)arg2;
- (void)rewardBasedVideoAdWillLeaveApplication:(id)arg1;
- (void)rewardBasedVideoAdDidClose:(id)arg1;
- (void)rewardBasedVideoAdDidCompletePlaying:(id)arg1;
- (void)rewardBasedVideoAdDidStartPlaying:(id)arg1;
- (void)rewardBasedVideoAdDidOpen:(id)arg1;
- (void)rewardBasedVideoAdDidReceiveAd:(id)arg1;
- (void)presentRewardBasedVideoAdWithRootViewController:(id)arg1;
- (void)stopLoadingRewardBasedVideoAd;
- (void)requestRewardBasedVideoAd;
- (void)setUp;
- (id)initWithRewardBasedVideoAdNetworkConnector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

