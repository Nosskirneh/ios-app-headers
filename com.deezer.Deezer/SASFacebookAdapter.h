//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASMediationAdapter.h"

#import "FBAdViewDelegate-Protocol.h"
#import "FBRewardedVideoAdDelegate-Protocol.h"

@class FBAdView, FBInterstitialAd, FBRewardedVideoAd, NSNumber, NSString, SASAdView, SASReward, UIViewController;

@interface SASFacebookAdapter : SASMediationAdapter <FBAdViewDelegate, FBRewardedVideoAdDelegate>
{
    _Bool _videoCompleted;
    _Bool _distributedReward;
    SASAdView *_adView;
    UIViewController *_rootViewController;
    NSString *_placementID;
    long long _adUnitType;
    FBAdView *_facebookAdView;
    FBInterstitialAd *_interstitialAd;
    FBRewardedVideoAd *_rewardedVideoAd;
    NSString *_rewardCurrency;
    NSNumber *_rewardAmount;
    SASReward *_sasReward;
    struct CGRect _frame;
}

+ (struct FBAdSize)fbAdSize:(struct CGSize)arg1;
@property(retain, nonatomic) SASReward *sasReward; // @synthesize sasReward=_sasReward;
@property(nonatomic) _Bool distributedReward; // @synthesize distributedReward=_distributedReward;
@property(nonatomic) _Bool videoCompleted; // @synthesize videoCompleted=_videoCompleted;
@property(retain, nonatomic) NSNumber *rewardAmount; // @synthesize rewardAmount=_rewardAmount;
@property(retain, nonatomic) NSString *rewardCurrency; // @synthesize rewardCurrency=_rewardCurrency;
@property(retain, nonatomic) FBRewardedVideoAd *rewardedVideoAd; // @synthesize rewardedVideoAd=_rewardedVideoAd;
@property(retain, nonatomic) FBInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
@property(retain, nonatomic) FBAdView *facebookAdView; // @synthesize facebookAdView=_facebookAdView;
@property(nonatomic) long long adUnitType; // @synthesize adUnitType=_adUnitType;
@property(retain, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak SASAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (struct FBAdSize)bannerAdSize;
- (void)rewardedVideoAdServerRewardDidFail:(id)arg1;
- (void)rewardedVideoAdServerRewardDidSucceed:(id)arg1;
- (void)rewardedVideoAdComplete:(id)arg1;
- (void)rewardedVideoAdWillLogImpression:(id)arg1;
- (void)rewardedVideoAdWillClose:(id)arg1;
- (void)rewardedVideoAdDidClose:(id)arg1;
- (void)rewardedVideoAdDidClick:(id)arg1;
- (void)rewardedVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdDidLoad:(id)arg1;
- (void)interstitialAdDidClose:(id)arg1;
- (void)interstitialAdDidClick:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)adViewDidClick:(id)arg1;
- (void)adView:(id)arg1 didFailWithError:(id)arg2;
- (void)adViewDidLoad:(id)arg1;
- (void)handleFailureWithError:(id)arg1;
- (id)mediationAdView;
- (_Bool)isRewardedVideoAdReady;
- (void)showRewardedVideoAdFromViewController:(id)arg1;
- (void)cancelAd;
- (void)requestRewardedVideoAd;
- (void)requestInterstitialAd;
- (void)requestBannerAdWithSize:(struct FBAdSize)arg1;
- (void)requestAd;
- (id)initMediationAdViewWithAdView:(id)arg1 adParameters:(id)arg2 interfaceParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;

@end

