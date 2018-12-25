//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTLockScreenController, YTLockScreenControllerStateBuilder;

@interface YTPlaybackLockScreenController : NSObject
{
    YTLockScreenController *_lockScreenController;
    YTLockScreenControllerStateBuilder *_stateBuilder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateLockScreen;
- (void)setLockScreenEnabled:(_Bool)arg1;
- (void)reset;
- (void)setPlaybackQueueIndex:(id)arg1 playbackQueueCount:(id)arg2;
- (void)setPlaybackRate:(float)arg1 currentTime:(double)arg2 totalTime:(double)arg3;
- (void)setLockScreenRenderer:(id)arg1;
- (void)setLive:(_Bool)arg1;
- (id)init;

@end

