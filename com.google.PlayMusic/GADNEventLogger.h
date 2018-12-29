//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNObserverCollection, GADNScheduler, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GADNEventLogger : NSObject
{
    GADNObserverCollection *_observers;
    // Error parsing type: AB, name: _enabled
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableDictionary *_eventObserversMap;
    NSMutableArray *_enqueuedEvents;
    GADNScheduler *_scheduler;
    double _flushBufferTimestamp;
    _Bool _didDropEvents;
    NSMutableDictionary *_requestEventsMap;
    _Bool _shouldBatchRequestEvents;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addEventToRequestMap:(id)arg1;
- (void)addEventsToQueue:(id)arg1;
- (void)handleNotificationName:(id)arg1 context:(id)arg2 userInfo:(id)arg3;
- (_Bool)flushEventsQueue;
- (void)updateScheduler;
- (void)updateEventObservers;
- (void)updateBatchEvents;
- (void)updateLoggingState;
- (void)startScheduler;
- (void)disableLogging;
- (void)enableLogging;
- (_Bool)isNotificationLogged:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
- (id)init;

@end
