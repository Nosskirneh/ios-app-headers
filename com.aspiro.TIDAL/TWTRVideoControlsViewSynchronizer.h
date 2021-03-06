//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRVideoPlayerScribeDelegate-Protocol.h"
#import "TWTRVideoPlayerViewDelegate-Protocol.h"

@class NSString, TWTRSynchronizerDisplayLinkWrapper, TWTRVideoControlsView, TWTRVideoPlayerView;
@protocol TWTRVideoPlayerScribeDelegate;

@interface TWTRVideoControlsViewSynchronizer : NSObject <TWTRVideoPlayerViewDelegate, TWTRVideoPlayerScribeDelegate>
{
    _Bool _disableSynchronization;
    _Bool _presentsVideoControlsOnReady;
    TWTRVideoControlsView *_controlsView;
    TWTRVideoPlayerView *_videoPlayerView;
    id <TWTRVideoPlayerScribeDelegate> _scribeDelegate;
    TWTRSynchronizerDisplayLinkWrapper *_displayLinkWrapper;
    long long _playbackStateBeforeScrubbing;
}

@property(nonatomic) long long playbackStateBeforeScrubbing; // @synthesize playbackStateBeforeScrubbing=_playbackStateBeforeScrubbing;
@property(readonly, nonatomic) TWTRSynchronizerDisplayLinkWrapper *displayLinkWrapper; // @synthesize displayLinkWrapper=_displayLinkWrapper;
@property(nonatomic) _Bool presentsVideoControlsOnReady; // @synthesize presentsVideoControlsOnReady=_presentsVideoControlsOnReady;
@property(nonatomic) __weak id <TWTRVideoPlayerScribeDelegate> scribeDelegate; // @synthesize scribeDelegate=_scribeDelegate;
@property(readonly, nonatomic) __weak TWTRVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(readonly, nonatomic) __weak TWTRVideoControlsView *controlsView; // @synthesize controlsView=_controlsView;
- (void).cxx_destruct;
- (void)videoPlayer:(id)arg1 didPlayPercentOfMedia:(unsigned long long)arg2 videoEntity:(id)arg3;
- (void)videoPlayerDidBecomeReady:(id)arg1;
- (void)videoPlayer:(id)arg1 didChangePlaybackState:(long long)arg2;
- (void)handleActionButton;
- (void)handleScrubberValueChange;
- (void)handleScrubberTouchUp;
- (void)handleScrubberTouchDown;
- (id)displayStringForTimeInterval:(double)arg1;
- (void)updateTimeLabelWithElapsedTime:(double)arg1 duration:(double)arg2;
- (void)synchronizeUI;
- (CDUnknownBlockType)displayLinkDidFireBlock;
- (void)dealloc;
- (id)initWithVideoPlayer:(id)arg1 controls:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

