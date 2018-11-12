//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASMediationAdapter.h"

#import "MNGHimonoBannerViewDelegate-Protocol.h"
#import "MNGNativeAdDelegate-Protocol.h"
#import "MNGSushiViewDelegate-Protocol.h"

@class MNGDisplayableNativeAd, MNGHimonoBannerView, MNGSushiViewController, NSString, SASAdView, UIViewController;

@interface SASMNGAdsAdapter : SASMediationAdapter <MNGHimonoBannerViewDelegate, MNGNativeAdDelegate, MNGSushiViewDelegate>
{
    SASAdView *_adView;
    UIViewController *_rootViewController;
    NSString *_publisherID;
    MNGHimonoBannerView *_himonoBannerView;
    MNGDisplayableNativeAd *_interNativeAd;
    MNGSushiViewController *_interViewController;
}

@property(retain, nonatomic) MNGSushiViewController *interViewController; // @synthesize interViewController=_interViewController;
@property(retain, nonatomic) MNGDisplayableNativeAd *interNativeAd; // @synthesize interNativeAd=_interNativeAd;
@property(retain, nonatomic) MNGHimonoBannerView *himonoBannerView; // @synthesize himonoBannerView=_himonoBannerView;
@property(copy, nonatomic) NSString *publisherID; // @synthesize publisherID=_publisherID;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak SASAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)interstitialWillDisappear:(id)arg1;
- (void)interstitialWasClicked:(id)arg1;
- (void)interstitialDidAppear:(id)arg1;
- (void)nativeAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdDidLoad:(id)arg1;
- (void)himonoBannerViewDidRecordClick:(id)arg1;
- (void)himonoBannerViewDidFailToLoadAd:(id)arg1 withError:(id)arg2;
- (void)himonoBannerViewDidLoadAd:(id)arg1;
- (void)handleFailureWithError:(id)arg1;
- (id)mediationAdView;
- (void)cancelAd;
- (void)requestInterstitialAd;
- (void)requestBannerAd;
- (void)requestAd;
- (id)initMediationAdViewWithAdView:(id)arg1 adParameters:(id)arg2 interfaceParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
