//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMAdNetworkAdapter-Protocol.h"
#import "GADMRewardBasedVideoAdNetworkAdapter-Protocol.h"
#import "IMBannerDelegate-Protocol.h"
#import "IMInterstitialDelegate-Protocol.h"
#import "IMNativeDelegate-Protocol.h"

@class IMBanner, IMInterstitial, IMNative, NSString;
@protocol GADMAdNetworkConnector, GADMRewardBasedVideoAdNetworkConnector;

@interface GADMAdapterInMobi : NSObject <GADMAdNetworkAdapter, GADMRewardBasedVideoAdNetworkAdapter, IMBannerDelegate, IMInterstitialDelegate, IMNativeDelegate>
{
    IMBanner *adView_;
    IMInterstitial *interstitial_;
    IMInterstitial *adRewarded_;
    IMNative *native_;
    id <GADMAdNetworkConnector> connector_;
    id <GADMRewardBasedVideoAdNetworkConnector> _rewardedConnector;
    double _width;
    double _height;
}

+ (Class)networkExtrasClass;
+ (id)adapterVersion;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) id <GADMRewardBasedVideoAdNetworkConnector> rewardedConnector; // @synthesize rewardedConnector=_rewardedConnector;
@property(retain, nonatomic) id <GADMAdNetworkConnector> connector; // @synthesize connector=connector_;
@property(retain, nonatomic) IMNative *native; // @synthesize native=native_;
@property(retain, nonatomic) IMInterstitial *adRewarded; // @synthesize adRewarded=adRewarded_;
@property(retain, nonatomic) IMInterstitial *interstitial; // @synthesize interstitial=interstitial_;
@property(retain, nonatomic) IMBanner *adView; // @synthesize adView=adView_;
- (void)nativeAdImpressed:(id)arg1;
- (void)userWillLeaveApplicationFromNative:(id)arg1;
- (void)nativeDidDismissScreen:(id)arg1;
- (void)nativeWillDismissScreen:(id)arg1;
- (void)nativeDidPresentScreen:(id)arg1;
- (void)nativeWillPresentScreen:(id)arg1;
- (void)native:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)nativeDidFinishLoading:(id)arg1;
- (void)interstitialDidReceiveAd:(id)arg1;
- (void)userWillLeaveApplicationFromInterstitial:(id)arg1;
- (void)interstitial:(id)arg1 rewardActionCompletedWithRewards:(id)arg2;
- (void)interstitial:(id)arg1 didInteractWithParams:(id)arg2;
- (void)interstitialDidDismiss:(id)arg1;
- (void)interstitialWillDismiss:(id)arg1;
- (void)interstitial:(id)arg1 didFailToPresentWithError:(id)arg2;
- (void)interstitialDidPresent:(id)arg1;
- (void)interstitialWillPresent:(id)arg1;
- (void)interstitial:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)interstitialDidFinishLoading:(id)arg1;
- (void)banner:(id)arg1 rewardActionCompletedWithRewards:(id)arg2;
- (void)bannerDidDismissScreen:(id)arg1;
- (void)bannerWillDismissScreen:(id)arg1;
- (void)bannerDidPresentScreen:(id)arg1;
- (void)bannerWillPresentScreen:(id)arg1;
- (void)userWillLeaveApplicationFromBanner:(id)arg1;
- (void)banner:(id)arg1 didInteractWithParams:(id)arg2;
- (void)banner:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)bannerDidFinishLoading:(id)arg1;
- (long long)getAdMobErrorCode:(long long)arg1;
@property(readonly, nonatomic) long long placementId;
- (_Bool)isBannerAnimationOK:(long long)arg1;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (void)stopBeingDelegate;
- (void)getOptimalSlotSize;
- (void)presentRewardBasedVideoAdWithRootViewController:(id)arg1;
- (void)requestRewardBasedVideoAd;
- (void)setUp;
- (void)getBannerWithSize:(struct GADAdSize)arg1;
- (void)getInterstitial;
- (_Bool)handlesUserClicks;
- (_Bool)handlesUserImpressions;
- (void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2;
- (unsigned char)isPerformanceAd:(id)arg1;
- (void)prepareRequestParameters;
- (id)initWithRewardBasedVideoAdNetworkConnector:(id)arg1;
- (id)initWithGADMAdNetworkConnector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
