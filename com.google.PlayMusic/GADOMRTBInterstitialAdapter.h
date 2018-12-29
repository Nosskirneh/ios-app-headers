//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMAdNetworkAdapter-Protocol.h"
#import "GADMediationInterstitialAdEventDelegate-Protocol.h"

@class GADMAdNetworkConnector, GADMediationInterstitialAdConfiguration, NSString;
@protocol GADMediationInterstitialAd;

@interface GADOMRTBInterstitialAdapter : NSObject <GADMediationInterstitialAdEventDelegate, GADMAdNetworkAdapter>
{
    GADMAdNetworkConnector *_connector;
    id <GADMediationInterstitialAd> _mediatedAd;
    GADMediationInterstitialAdConfiguration *_mediationConfiguration;
}

+ (Class)networkExtrasClass;
+ (id)adapterVersion;
- (void).cxx_destruct;
- (void)changeAdSizeTo:(struct GADOAdSize)arg1;
- (void)stopBeingDelegate;
- (void)getBannerWithSize:(struct GADOAdSize)arg1;
- (void)willBackgroundApplication;
- (void)didDismissFullScreenView;
- (void)willDismissFullScreenView;
- (void)willPresentFullScreenView;
- (void)reportClick;
- (void)reportImpression;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (_Bool)adapter:(id)arg1 completedLoadForConnector:(id)arg2 withMediatedAd:(id)arg3 error:(id)arg4;
- (void)getInterstitial;
- (id)initWithGADMAdNetworkConnector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
