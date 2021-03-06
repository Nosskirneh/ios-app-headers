//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTDelayedEventSchedulerDelegate-Protocol.h"

@class GIMMe, NSHashTable, NSString;
@protocol YTDelayedEventConfig, YTDelayedEventQueue, YTDelayedEventScheduler, YTDelayedEventWorkerHandler;

@interface YTDelayedEventController : NSObject <YTDelayedEventSchedulerDelegate>
{
    id <YTDelayedEventQueue> _queue;
    id <YTDelayedEventScheduler> _scheduler;
    id <YTDelayedEventWorkerHandler> _handler;
    id <YTDelayedEventConfig> _config;
    int _eventType;
    NSHashTable *_observers;
    GIMMe *_gimme;
}

+ (_Bool)validateDelayedEvent:(id)arg1;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)handleMultipleBatchesOfEvents:(id)arg1;
- (void)dispatchUntilEmptyWithTier:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dispatchOneBatchWithTier:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didTriggerFlushWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)didTriggerDispatchWithTier:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addDelayedEventControllerObserver:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendEvents:(id)arg1;
- (id)initWithEventType:(int)arg1 eventQueue:(id)arg2 eventScheduler:(id)arg3 eventHandler:(id)arg4 eventConfig:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

