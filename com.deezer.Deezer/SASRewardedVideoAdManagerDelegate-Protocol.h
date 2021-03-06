//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVPlayer, CALayer, NSError, NSURL, SASAd, SASReward, SASRewardedVideoAdManager, SASRewardedVideoPlacement, UIView, UIViewController;

@protocol SASRewardedVideoAdManagerDelegate <NSObject>
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 forPlacement:(SASRewardedVideoPlacement *)arg2 withAVPlayer:(AVPlayer *)arg3 didSwitchToPlayerLayer:(CALayer *)arg4 withContainingView:(UIView *)arg5;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 forPlacement:(SASRewardedVideoPlacement *)arg2 willPlayVideoWithAVPlayer:(AVPlayer *)arg3 withPlayerLayer:(CALayer *)arg4 withContainingView:(UIView *)arg5;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 forPlacement:(SASRewardedVideoPlacement *)arg2 didLoadEndCardInView:(UIView *)arg3 fromViewController:(UIViewController *)arg4;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 didFinishPlayingAudioForPlacement:(SASRewardedVideoPlacement *)arg2;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 willPlayAudioForPlacement:(SASRewardedVideoPlacement *)arg2;
- (_Bool)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 shouldHandleAudioSessionForPlacement:(SASRewardedVideoPlacement *)arg2;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 forPlacement:(SASRewardedVideoPlacement *)arg2 willDismissModalViewFromViewController:(UIViewController *)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 forPlacement:(SASRewardedVideoPlacement *)arg2 willPresentModalViewFromViewController:(UIViewController *)arg3;
- (_Bool)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 forPlacement:(SASRewardedVideoPlacement *)arg2 shouldHandleURL:(NSURL *)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 forPlacement:(SASRewardedVideoPlacement *)arg2 didCollectReward:(SASReward *)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 forPlacement:(SASRewardedVideoPlacement *)arg2 didSendVideoEvent:(long long)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 didDisappearForPlacement:(SASRewardedVideoPlacement *)arg2 fromViewController:(UIViewController *)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 willDisappearForPlacement:(SASRewardedVideoPlacement *)arg2 fromViewController:(UIViewController *)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 didAppearForPlacement:(SASRewardedVideoPlacement *)arg2 fromViewController:(UIViewController *)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 willAppearForPlacement:(SASRewardedVideoPlacement *)arg2 fromViewController:(UIViewController *)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 didFailToShowForPlacement:(SASRewardedVideoPlacement *)arg2 error:(NSError *)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 didFailToLoadForPlacement:(SASRewardedVideoPlacement *)arg2 error:(NSError *)arg3;
- (void)rewardedVideoAdManager:(SASRewardedVideoAdManager *)arg1 didLoadAd:(SASAd *)arg2 forPlacement:(SASRewardedVideoPlacement *)arg3;
@end

