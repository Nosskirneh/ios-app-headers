//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTPlaybackData, YTPlayerPrebufferConfig, YTSingleVideoController;
@protocol MLViewportSizeProvider;

@interface YTPlayerPrebufferTask : NSObject
{
    YTSingleVideoController *_videoController;
    int _expectedVisibility;
    id <MLViewportSizeProvider> _viewportSizeProvider;
    GIMMe *_gimme;
    YTPlayerPrebufferConfig *_prebufferConfig;
    YTPlaybackData *_playbackData;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) YTPlaybackData *playbackData; // @synthesize playbackData=_playbackData;
@property(retain, nonatomic) YTPlayerPrebufferConfig *prebufferConfig; // @synthesize prebufferConfig=_prebufferConfig;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)resetVideoFormatConstraintToDefault;
- (void)applyPrebufferingVideoFormatConstraint;
- (void)createAndLoadVideoController;
- (id)releaseVideoController;
- (void)shutDownVideoController;
- (void)suspendPrebuffering;
- (void)startPrebuffering;
- (id)initWithPlayerResponse:(id)arg1 prebufferConfig:(id)arg2 expectedVisibility:(int)arg3 cacheContext:(id)arg4 CPN:(id)arg5 QOEController:(id)arg6 viewportSizeProvider:(id)arg7;

@end

