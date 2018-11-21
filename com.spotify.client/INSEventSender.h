//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSSchedulerDelegate-Protocol.h"

@class INSPersistentStoreStack, INSScheduler, INSSchedulerConfiguration, NSMutableArray, NSString;
@protocol INSLogger, INSTransport;

@interface INSEventSender : NSObject <INSSchedulerDelegate>
{
    id <INSTransport> _transport;
    INSScheduler *_scheduler;
    INSPersistentStoreStack *_persistenceStoreStack;
    id <INSLogger> _logger;
    INSSchedulerConfiguration *_configuration;
    NSMutableArray *_observers;
}

@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) INSSchedulerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) INSPersistentStoreStack *persistenceStoreStack; // @synthesize persistenceStoreStack=_persistenceStoreStack;
@property(retain, nonatomic) INSScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) id <INSTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)schedulerDidFailWithErrorBatch:(id)arg1;
- (void)schedulerDidFinishWithSuccessBatch:(id)arg1;
- (void)schedulerDidStartBatch:(id)arg1;
- (void)schedulerDidAddMessageNode:(id)arg1;
- (void)schedulerDidScheduleTimerWithInterval:(double)arg1 attempt:(unsigned long long)arg2;
- (id)version;
- (void)removeConfigurationOverride:(id)arg1;
- (void)addConfigurationOverride:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)initWithTransport:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

