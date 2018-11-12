//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTVideoPlayerSubtitleModule-Protocol.h"

@class UIView;
@protocol SPTVideoEventObserverFactory, SPTVideoPlaybackRequest, SPTVideoPlaybackRequestFactory, SPTVideoSurface;

@protocol SPTVideoPlayer <SPTVideoPlayerSubtitleModule>
@property(nonatomic) _Bool repeat;
@property(nonatomic, getter=isAudioDisabled) _Bool audioDisabled;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic) float playbackRate;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *surfaceView;
- (void)registerPlaybackEventObserverFactoryBlock:(id <SPTVideoEventObserver> (^)(id <SPTVideoPlaybackIdentity>))arg1;
- (void)registerPlaybackEventObserverFactory:(id <SPTVideoEventObserverFactory>)arg1;
- (void)seekTo:(double)arg1 completion:(void (^)(_Bool))arg2;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)playVideoWithPlaybackRequest:(id <SPTVideoPlaybackRequest>)arg1;
- (id <SPTVideoPlaybackRequestFactory>)providePlaybackRequestFactory;
@end

