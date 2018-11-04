//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASMediationAdapter.h"

#import "MPAdViewDelegate-Protocol.h"
#import "MPInterstitialAdControllerDelegate-Protocol.h"
#import "MPRewardedVideoDelegate-Protocol.h"

@class MPAdView, MPInterstitialAdController, NSString, SASAdView, UIViewController;

@interface SASMopubAdapter : SASMediationAdapter <MPAdViewDelegate, MPInterstitialAdControllerDelegate, MPRewardedVideoDelegate>
{
    SASAdView *_adView;
    UIViewController *_rootViewController;
    NSString *_adUnitID;
    long long _adUnitType;
    MPAdView *_bannerView;
    MPInterstitialAdController *_interstitial;
}

@property(retain, nonatomic) MPInterstitialAdController *interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) MPAdView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) long long adUnitType; // @synthesize adUnitType=_adUnitType;
@property(retain, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak SASAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (_Bool)hasValidAdUnitType;
- (_Bool)hasValidIDs;
- (void)rewardedVideoAdShouldRewardForAdUnitID:(id)arg1 reward:(id)arg2;
- (void)rewardedVideoAdWillLeaveApplicationForAdUnitID:(id)arg1;
- (void)rewardedVideoAdDidReceiveTapEventForAdUnitID:(id)arg1;
- (void)rewardedVideoAdDidDisappearForAdUnitID:(id)arg1;
- (void)rewardedVideoAdWillDisappearForAdUnitID:(id)arg1;
- (void)rewardedVideoAdDidAppearForAdUnitID:(id)arg1;
- (void)rewardedVideoAdWillAppearForAdUnitID:(id)arg1;
- (void)rewardedVideoAdDidFailToPlayForAdUnitID:(id)arg1 error:(id)arg2;
- (void)rewardedVideoAdDidExpireForAdUnitID:(id)arg1;
- (void)rewardedVideoAdDidFailToLoadForAdUnitID:(id)arg1 error:(id)arg2;
- (void)rewardedVideoAdDidLoadForAdUnitID:(id)arg1;
- (_Bool)isRewardedVideoAdReady;
- (void)showRewardedVideoAdFromViewController:(id)arg1;
- (void)interstitialDidReceiveTapEvent:(id)arg1;
- (void)interstitialDidDisappear:(id)arg1;
- (void)interstitialWillDisappear:(id)arg1;
- (void)interstitialDidAppear:(id)arg1;
- (void)interstitialWillAppear:(id)arg1;
- (void)interstitialDidExpire:(id)arg1;
- (void)interstitialDidFailToLoadAd:(id)arg1;
- (void)interstitialDidLoadAd:(id)arg1;
- (void)willLeaveApplicationFromAd:(id)arg1;
- (void)didDismissModalViewForAd:(id)arg1;
- (void)willPresentModalViewForAd:(id)arg1;
- (void)adViewDidFailToLoadAd:(id)arg1;
- (void)adViewDidLoadAd:(id)arg1;
- (id)viewControllerForPresentingModalView;
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

