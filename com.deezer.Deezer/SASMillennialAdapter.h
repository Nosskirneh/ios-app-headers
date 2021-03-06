//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASMediationAdapter.h"

#import "MMInlineDelegate-Protocol.h"
#import "MMInterstitialDelegate-Protocol.h"

@class MMInlineAd, MMInterstitialAd, NSString, SASAdView, UIViewController;

@interface SASMillennialAdapter : SASMediationAdapter <MMInlineDelegate, MMInterstitialDelegate>
{
    _Bool _isCompletionDelegateCalled;
    _Bool _isClickPixelCalled;
    SASAdView *_adView;
    NSString *_appID;
    UIViewController *_rootViewController;
    MMInlineAd *_millennialInlineAd;
    MMInterstitialAd *_millennialInterstitialAd;
}

@property(retain, nonatomic) MMInterstitialAd *millennialInterstitialAd; // @synthesize millennialInterstitialAd=_millennialInterstitialAd;
@property(retain, nonatomic) MMInlineAd *millennialInlineAd; // @synthesize millennialInlineAd=_millennialInlineAd;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) __weak SASAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)interstitialAdWillLeaveApplication:(id)arg1;
- (void)interstitialAdTapped:(id)arg1;
- (void)interstitialAdDidDismiss:(id)arg1;
- (void)interstitialAd:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)interstitialAdLoadDidSucceed:(id)arg1;
- (void)inlineAdWillLeaveApplication:(id)arg1;
- (void)inlineAdWillCloseModal:(id)arg1;
- (void)inlineAdWillPresentModal:(id)arg1;
- (void)inlineAdContentTapped:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (void)inlineAd:(id)arg1 requestDidFailWithError:(id)arg2;
- (void)inlineAdRequestDidSucceed:(id)arg1;
- (_Bool)mediationAdIsABanner;
- (id)mediationAdView;
- (void)requestInterstitialAd;
- (void)requestBannerAd;
- (void)cancelAd;
- (void)requestAd;
- (id)initMediationAdViewWithAdView:(id)arg1 adParameters:(id)arg2 interfaceParameters:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

