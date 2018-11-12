//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASMediationNativeAdapter.h"

#import "FBNativeAdDelegate-Protocol.h"

@class FBMediaView, FBNativeAd, NSDictionary, NSString, SASMediationAd, SASNativeAd;

@interface SASFacebookNativeAdapter : SASMediationNativeAdapter <FBNativeAdDelegate>
{
    NSDictionary *_adParameters;
    FBNativeAd *_facebookNativeAd;
    FBMediaView *_mediaView;
    SASNativeAd *_nativeAd;
    SASMediationAd *_meditationAd;
}

- (void).cxx_destruct;
- (float)smartRatingFromFacebookRating:(struct FBAdStarRating)arg1;
- (id)adChoicesURL;
- (id)mediaView:(id)arg1;
- (_Bool)hasMedia;
- (void)nativeAdDidFinishHandlingClick:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (void)nativeAdWillLogImpression:(id)arg1;
- (void)nativeAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdDidLoad:(id)arg1;
- (void)unregisterViews;
- (void)registerView:(id)arg1 tappableViews:(id)arg2 modalParentViewController:(id)arg3;
- (void)fillAdWithFacebookNativeAd:(id)arg1;
- (id)nativeAd;
- (void)cancelAd;
- (void)requestAd;
- (id)initMediationWithAdParameters:(id)arg1 interfaceParameters:(id)arg2 mediationAd:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
