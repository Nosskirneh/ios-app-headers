//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SASMediationAd, SASReward, UIView;

@protocol SASMediationAdManagerDelegate <NSObject>
- (void)mediationAdViewDidCollectReward:(SASReward *)arg1;
- (void)mediationAdViewDidStopPlayingAudio:(UIView *)arg1;
- (void)mediationAdViewWillStartPlayingAudio:(UIView *)arg1;
- (void)mediationAdViewDidDisappear:(UIView *)arg1;
- (void)mediationAdViewWillPerformActionWithExit:(UIView *)arg1;
- (void)mediationAdViewWillDismissModalView:(UIView *)arg1;
- (void)mediationAdViewWillPresentModalView:(UIView *)arg1;
- (void)mediationAdView:(UIView *)arg1 wasClickedForAd:(SASMediationAd *)arg2;
- (void)mediationAdManagerDidFailFetchingAdWithErrors:(NSArray *)arg1;
- (void)mediationAdManagerDidFinishFetchingAdView:(UIView *)arg1 forAd:(SASMediationAd *)arg2;
@end
