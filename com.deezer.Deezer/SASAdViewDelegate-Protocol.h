//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVPlayer, CALayer, NSError, NSString, NSURL, SASAd, SASAdView, UIView;

@protocol SASAdViewDelegate <NSObject>

@optional
- (void)adViewDidLoadEndCard:(SASAdView *)arg1;
- (void)adView:(SASAdView *)arg1 withAVPlayer:(AVPlayer *)arg2 didSwitchToPlayerLayer:(CALayer *)arg3 withContainingView:(UIView *)arg4;
- (void)adView:(SASAdView *)arg1 willPlayVideoWithAVPlayer:(AVPlayer *)arg2 withPlayerLayer:(CALayer *)arg3 withContainingView:(UIView *)arg4;
- (void)adView:(SASAdView *)arg1 didSendVideoEvent:(long long)arg2;
- (void)adViewDidFinishPlayingAudio:(SASAdView *)arg1;
- (void)adViewWillPlayAudio:(SASAdView *)arg1;
- (_Bool)adViewShouldHandleAudioSession:(SASAdView *)arg1;
- (_Bool)adViewCanStickToTop:(SASAdView *)arg1;
- (void)adView:(SASAdView *)arg1 withStickyView:(UIView *)arg2 didStick:(_Bool)arg3 withFrame:(struct CGRect)arg4;
- (double)visibilityPercentageForAdView:(SASAdView *)arg1;
- (void)adView:(SASAdView *)arg1 didReceiveMessage:(NSString *)arg2;
- (void)adView:(SASAdView *)arg1 didCloseExpandWithFrame:(struct CGRect)arg2;
- (void)adViewWillCloseExpand:(SASAdView *)arg1;
- (void)adView:(SASAdView *)arg1 didExpandWithFrame:(struct CGRect)arg2;
- (void)adViewWillExpand:(SASAdView *)arg1;
- (void)adView:(SASAdView *)arg1 didCloseResizeWithFrame:(struct CGRect)arg2;
- (void)adViewDidFailToResize:(SASAdView *)arg1 error:(NSError *)arg2;
- (void)adView:(SASAdView *)arg1 didResizeWithFrame:(struct CGRect)arg2;
- (void)adView:(SASAdView *)arg1 willResizeWithFrame:(struct CGRect)arg2;
- (unsigned long long)animationOptionsForDismissingAdView:(SASAdView *)arg1;
- (double)animationDurationForDismissingAdView:(SASAdView *)arg1;
- (_Bool)adView:(SASAdView *)arg1 shouldHandleURL:(NSURL *)arg2;
- (void)adView:(SASAdView *)arg1 willPerformActionWithExit:(_Bool)arg2;
- (void)adViewWillDismissModalView:(SASAdView *)arg1;
- (void)adViewWillPresentModalView:(SASAdView *)arg1;
- (void)adViewDidDisappear:(SASAdView *)arg1;
- (void)adViewDidCollapse:(SASAdView *)arg1;
- (void)adView:(SASAdView *)arg1 didFailToPrefetchWithError:(NSError *)arg2;
- (void)adViewDidPrefetch:(SASAdView *)arg1;
- (void)adView:(SASAdView *)arg1 didFailToLoadWithError:(NSError *)arg2;
- (void)adViewDidLoad:(SASAdView *)arg1;
- (void)adView:(SASAdView *)arg1 didDownloadAd:(SASAd *)arg2;
@end
