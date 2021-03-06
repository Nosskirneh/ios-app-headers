//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADBannerViewDelegate-Protocol.h"
#import "GADInterstitialDelegate-Protocol.h"
#import "GADMAdNetworkAdapter-Protocol.h"
#import "GADOInterstitialAdClickDelegate-Protocol.h"
#import "GADOSDKCoreControllerDelegate-Protocol.h"

@class GADOBannerView, GADOInterstitial, NSString;
@protocol GADOMInternalAdNetworkConnector;

@interface GADMAdURLAdapter : NSObject <GADOSDKCoreControllerDelegate, GADBannerViewDelegate, GADInterstitialDelegate, GADOInterstitialAdClickDelegate, GADMAdNetworkAdapter>
{
    _Bool _shouldRespondToSDKCore;
    GADOBannerView *_banner;
    GADOInterstitial *_interstitial;
    id <GADOMInternalAdNetworkConnector> _connector;
    NSString *_requestID;
}

+ (Class)networkExtrasClass;
+ (id)adapterVersion;
@property(nonatomic) _Bool shouldRespondToSDKCore; // @synthesize shouldRespondToSDKCore=_shouldRespondToSDKCore;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) __weak id <GADOMInternalAdNetworkConnector> connector; // @synthesize connector=_connector;
@property(retain, nonatomic) GADOInterstitial *interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) GADOBannerView *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;
- (void)reportInterstitialLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2;
- (void)reportBannerLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2;
- (void)reportAdLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2;
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
- (void)failedJavaScriptFile;
- (void)invalidJavaScriptRequest;
- (void)loadAd:(id)arg1 headers:(id)arg2;
- (void)loadAdURLWithParameters:(id)arg1;
- (long long)requestedAdType;
- (id)backgroundRequestParameters;
- (_Bool)requiresBackgroundSignalCollection;
- (id)requestParameters;
- (id)adLoadActionTimeRecorder;
- (void)loadRequest;
- (void)changeAdSizeTo:(struct GADOAdSize)arg1;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (_Bool)isBannerAnimationOK:(long long)arg1;
- (void)stopBeingDelegate;
- (void)getInterstitial;
- (void)getBannerWithSize:(struct GADOAdSize)arg1;
- (id)initWithGADMAdNetworkConnector:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

