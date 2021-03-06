//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTAdInterrupt, YTPlaybackConfig, YTPlaybackData, YTPlayerTransition, YTPrebufferingVideoTransitionController, YTSingleVideoController, YTVSSControllerState;
@protocol YTSingleVideoObservable;

@protocol YTSingleVideoSequencer <NSObject>
@property(readonly, nonatomic) YTSingleVideoController *contentVideoController;
@property(readonly, nonatomic) YTSingleVideoController *activeVideoController;
- (void)reloadActiveVideoControllerMediaPlayer;
- (void)shutDownAdVideoControllersAndReloadVideoTimeline;
- (id <YTSingleVideoObservable>)registerAdInterrupt:(YTAdInterrupt *)arg1;
- (YTVSSControllerState *)shutDownAd;
- (void)activateAdInterrupt:(YTAdInterrupt *)arg1 withTransition:(YTPrebufferingVideoTransitionController *)arg2;
- (void)loadFirstVideoInContentSequenceIntoInactiveState;
- (void)suspendContentSequence;
- (void)restartContentSequence;
- (void)activateContentSequence;
- (void)setContentPlaybackData:(YTPlaybackData *)arg1 initialContentMediaTime:(double)arg2 playerTransition:(YTPlayerTransition *)arg3 playbackConfig:(YTPlaybackConfig *)arg4 prebufferedContentVideo:(YTSingleVideoController *)arg5;
- (void)shutDown;
@end

