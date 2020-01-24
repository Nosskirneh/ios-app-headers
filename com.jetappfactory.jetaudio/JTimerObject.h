//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface JTimerObject : NSObject
{
    int mTimerRemaining;
    NSTimer *mTimer;
    _Bool mPaused;
    int _timerTime;
    int _timerAction;
}

@property(nonatomic) int timerAction; // @synthesize timerAction=_timerAction;
@property(nonatomic) int timerTime; // @synthesize timerTime=_timerTime;
- (void).cxx_destruct;
- (void)onTimer:(id)arg1;
- (_Bool)isPaused;
- (_Bool)isRunning;
- (_Bool)pauseOrResume;
- (_Bool)stop;
- (_Bool)start;
- (int)getRemainingTime;
- (void)saveDefaults;
- (void)loadDefaults;
- (void)dealloc;
- (id)init;

@end

