//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMediationRewardedAdEventDelegate-Protocol.h"
#import "GADNAdPresenting-Protocol.h"
#import "GADNRewardedConnector-Protocol.h"

@class GADNInterstitialAd, GADNMediatedIntermission, GADNMediationRewardBasedVideoAdRenderer, NSDictionary, NSString;
@protocol GADMediationAdapter, GADMediationRewardedAd;

@interface GADNMRewardedAdNetworkConnector : NSObject <GADMediationRewardedAdEventDelegate, GADNAdPresenting, GADNRewardedConnector>
{
    id <GADMediationAdapter> _rewardedAdAdapter;
    NSString *_adapterClassName;
    GADNInterstitialAd *_rewardedAd;
    id <GADMediationRewardedAd> _mediationRewardedAd;
    GADNMediatedIntermission *_intermission;
    GADNMediationRewardBasedVideoAdRenderer *_renderer;
    NSDictionary *_adConfiguration;
}

@property(copy, nonatomic) NSDictionary *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(nonatomic) __weak GADNMediationRewardBasedVideoAdRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)presentFromViewController:(id)arg1;
- (_Bool)canPresent;
- (void)willDismissFullScreenView;
- (void)reportImpression;
- (void)didRewardUserWithReward:(id)arg1;
- (void)didEndVideo;
- (void)didStartVideo;
- (void)reportClick;
- (void)didDismissFullScreenView;
- (void)willPresentFullScreenView;
- (void)rewardedAdDidFailToLoadWithError:(id)arg1;
- (void)rewardedAdDidLoad;
- (void)didFailToPresentWithError:(id)arg1;
@property(readonly, copy, nonatomic) NSString *adapterName;
- (void)requestRewardBasedVideoAd;
- (void)setRewardBasedVideoAd:(id)arg1;
- (id)initWithAdNetworkConfiguration:(id)arg1 adapterClassName:(id)arg2 renderer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

