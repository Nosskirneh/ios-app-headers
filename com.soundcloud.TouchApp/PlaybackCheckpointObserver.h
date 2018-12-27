//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, PlaybackTimerFactory;
@protocol CheckpointEventCreating, _TtP8Features28APAnalyticsProviderInterface_;

@interface PlaybackCheckpointObserver : NSObject
{
    id <_TtP8Features28APAnalyticsProviderInterface_> _analyticsController;
    id <CheckpointEventCreating> _eventFactory;
    PlaybackTimerFactory *_timerFactory;
    NSTimer *_checkpointTimer;
}

@property(retain, nonatomic) NSTimer *checkpointTimer; // @synthesize checkpointTimer=_checkpointTimer;
@property(readonly, nonatomic) PlaybackTimerFactory *timerFactory; // @synthesize timerFactory=_timerFactory;
@property(readonly, nonatomic) id <CheckpointEventCreating> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <_TtP8Features28APAnalyticsProviderInterface_> analyticsController; // @synthesize analyticsController=_analyticsController;
- (void).cxx_destruct;
- (void)sendCheckpointEvent:(id)arg1;
- (void)startTimerWithItem:(id)arg1;
- (void)stop;
- (void)updateWithTrack:(id)arg1 state:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAnalyticsController:(id)arg1 eventFactory:(id)arg2 timerFactory:(id)arg3;

@end

