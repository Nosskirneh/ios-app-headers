//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIView<SPTVideoSurface>;

@protocol SPTVideoEventObserver <NSObject>

@optional
- (void)videoPlaybackSubtitleDidChange:(id <SPTVideoSubtitle>)arg1 atPosition:(double)arg2;
- (void)videoPlaybackDidDropVideoFrames:(unsigned long long)arg1;
- (void)videoPlaybackDidTransferBytes:(long long)arg1 bitrate:(double)arg2;
- (void)videoPlaybackFormatDidChange:(id <SPTVideoFormat>)arg1 atPosition:(double)arg2;
- (void)videoPlaybackSurfaceDidChange:(UIView<SPTVideoSurface> *)arg1 atPosition:(double)arg2;
- (void)videoPlaybackBackgroundStateDidChange:(double)arg1 backgrounded:(_Bool)arg2;
- (void)videoPlaybackDidFailWithRecoverableError:(NSError *)arg1 atPosition:(double)arg2;
- (void)videoPlaybackDidFailWithError:(NSError *)arg1 atPosition:(double)arg2;
- (void)videoPlaybackDidEndAtPosition:(double)arg1 withEndReason:(long long)arg2;
- (void)videoPlaybackWillSeekToPosition:(double)arg1 fromPosition:(double)arg2;
- (void)videoPlaybackRateDidChangeTo:(double)arg1 atPosition:(double)arg2;
- (void)videoPlaybackReadyAtPosition:(double)arg1 duration:(double)arg2 playWhenReady:(_Bool)arg3;
- (void)videoPlaybackDidStartBuffering:(double)arg1;
- (void)videoPlaybackDidLoadDRMSession;
- (void)videoPlaybackWillLoadDRMSession;
- (void)videoPlaybackDidLoadManifest;
- (void)videoPlaybackWillLoadManifest;
- (void)videoPlaybackWillEndWithNextPlaybackIdentity:(id <SPTVideoPlaybackIdentity>)arg1;
- (void)videoPlaybackDidCreateSessionWithIdentity:(id <SPTVideoPlaybackIdentity>)arg1 timeObservable:(id <SPTVideoPlaybackTimeObservable>)arg2 inBackground:(_Bool)arg3;
@end

