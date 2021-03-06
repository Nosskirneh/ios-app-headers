//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASMediationAdapter.h"

#import "GADBannerViewDelegate-Protocol.h"
#import "GADInterstitialDelegate-Protocol.h"
#import "GADNativeExpressAdViewDelegate-Protocol.h"
#import "GADRewardBasedVideoAdDelegate-Protocol.h"

@class GADBannerView, GADInterstitial, GADNativeExpressAdView, NSString, SASAdView, UIViewController;

@interface SASAdMobAdapter : SASMediationAdapter <GADBannerViewDelegate, GADInterstitialDelegate, GADRewardBasedVideoAdDelegate, GADNativeExpressAdViewDelegate>
{
    SASAdView *_adView;
    UIViewController *_rootViewController;
    NSString *_applicationID;
    NSString *_adUnitID;
    long long _adUnitType;
    GADBannerView *_bannerView;
    GADInterstitial *_interstitial;
    GADNativeExpressAdView *_nativeExpressAdView;
    double _nativeAdViewWidth;
    double _nativeAdViewHeight;
}

@property(nonatomic) double nativeAdViewHeight; // @synthesize nativeAdViewHeight=_nativeAdViewHeight;
@property(nonatomic) double nativeAdViewWidth; // @synthesize nativeAdViewWidth=_nativeAdViewWidth;
@property(retain, nonatomic) GADNativeExpressAdView *nativeExpressAdView; // @synthesize nativeExpressAdView=_nativeExpressAdView;
@property(retain, nonatomic) GADInterstitial *interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) GADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) long long adUnitType; // @synthesize adUnitType=_adUnitType;
@property(retain, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(retain, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak SASAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (_Bool)hasValidAdUnitType;
- (_Bool)hasValidIDs;
- (void)nativeExpressAdViewWillLeaveApplication:(id)arg1;
- (void)nativeExpressAdViewDidDismissScreen:(id)arg1;
- (void)nativeExpressAdViewWillDismissScreen:(id)arg1;
- (void)nativeExpressAdViewWillPresentScreen:(id)arg1;
- (void)nativeExpressAdView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)nativeExpressAdViewDidReceiveAd:(id)arg1;
- (void)rewardBasedVideoAd:(id)arg1 didRewardUserWithReward:(id)arg2;
- (void)rewardBasedVideoAdWillLeaveApplication:(id)arg1;
- (void)rewardBasedVideoAdDidClose:(id)arg1;
- (void)rewardBasedVideoAdDidStartPlaying:(id)arg1;
- (void)rewardBasedVideoAdDidOpen:(id)arg1;
- (void)rewardBasedVideoAd:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)rewardBasedVideoAdDidReceiveAd:(id)arg1;
- (_Bool)isRewardedVideoAdReady;
- (void)showRewardedVideoAdFromViewController:(id)arg1;
- (void)interstitialWillLeaveApplication:(id)arg1;
- (void)interstitialDidDismissScreen:(id)arg1;
- (void)interstitialWillDismissScreen:(id)arg1;
- (void)interstitialDidFailToPresentScreen:(id)arg1;
- (void)interstitialWillPresentScreen:(id)arg1;
- (void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialDidReceiveAd:(id)arg1;
- (void)adViewWillLeaveApplication:(id)arg1;
- (void)adViewDidDismissScreen:(id)arg1;
- (void)adViewWillDismissScreen:(id)arg1;
- (void)adViewWillPresentScreen:(id)arg1;
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (void)loadNativeAdExpress;
- (void)loadRewardedVideoAd;
- (void)loadInterstitialAd;
- (void)loadBannerAd;
- (id)mediationAdView;
- (void)cancelAd;
- (void)requestAd;
- (id)initMediationAdViewWithAdView:(id)arg1 adParameters:(id)arg2 interfaceParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

