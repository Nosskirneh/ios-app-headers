//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADNMediatedAdRenderer.h"

#import "GADNAdPresenting-Protocol.h"

@class GADNInterstitialAd, GADNMediatedIntermission, NSString;

@interface GADNMediationInterstitialAdRenderer : GADNMediatedAdRenderer <GADNAdPresenting>
{
    GADNInterstitialAd *_interstitialAd;
    _Bool _clickEventReceived;
    CDUnknownBlockType _renderCompletionHandler;
    GADNMediatedIntermission *_intermission;
}

- (void).cxx_destruct;
- (void)adapterDidGetAdClick:(id)arg1;
- (void)adapterWillLeaveApplication:(id)arg1;
- (void)adapterDidDismissInterstitial:(id)arg1;
- (void)adapterWillDismissInterstitial:(id)arg1;
- (void)adapterWillPresentInterstitial:(id)arg1;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (void)adapterDidReceiveInterstitial:(id)arg1;
- (void)presentFromViewController:(id)arg1;
- (_Bool)canPresent;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)viewControllerForPresentingModalView;
- (void)reportClick;
- (void)adapterCompletedLoadWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

