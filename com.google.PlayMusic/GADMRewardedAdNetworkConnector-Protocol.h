//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMediationAdRequest-Protocol.h"

@class GADNAdReward, NSError;

@protocol GADMRewardedAdNetworkConnector <GADMediationAdRequest>
- (void)userDidEarnReward:(GADNAdReward *)arg1;
- (void)rewardedAdDidDismiss;
- (void)rewardedAdDidCompletePlaying;
- (void)rewardedAdDidGetClick;
- (void)rewardedAdDidStartPlaying;
- (void)rewardedAdDidPresent;
- (void)rewardedAdDidFailToLoadWithError:(NSError *)arg1;
- (void)rewardedAdDidLoad;
- (void)rewardedAdDidFailToPresentWithError:(NSError *)arg1;
@end

