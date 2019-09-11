//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSMessageOperationDelegate-Protocol.h"
#import "INSSchedulerProtocol-Protocol.h"
#import "INSTimerObserver-Protocol.h"

@class NSMutableSet, NSOperationQueue, NSString;
@protocol INSEventEnvelopeFactoryProtocol, INSLogger, INSSchedulerDataDelegate, INSSchedulerDataSource, INSSchedulerDelegate, INSTransport;

@interface INSScheduler : NSObject <INSMessageOperationDelegate, INSSchedulerProtocol, INSTimerObserver>
{
    NSOperationQueue *_executionQueue;
    NSMutableSet *_operationsInFlight;
    id <INSTransport> _transport;
    id <INSLogger> _logger;
    id <INSEventEnvelopeFactoryProtocol> _eventEnvelopeFactory;
    id <INSSchedulerDelegate> _delegate;
    id <INSSchedulerDataSource> _dataSource;
    id <INSSchedulerDataDelegate> _dataDelegate;
}

@property(nonatomic) __weak id <INSSchedulerDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) __weak id <INSSchedulerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <INSSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <INSEventEnvelopeFactoryProtocol> eventEnvelopeFactory; // @synthesize eventEnvelopeFactory=_eventEnvelopeFactory;
@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <INSTransport> transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSMutableSet *operationsInFlight; // @synthesize operationsInFlight=_operationsInFlight;
@property(retain, nonatomic) NSOperationQueue *executionQueue; // @synthesize executionQueue=_executionQueue;
- (void).cxx_destruct;
- (void)messageOperationDidFinish:(id)arg1;
- (id)eventsDescriptionWithEnvelopes:(id)arg1;
- (void)handleShouldBackoff;
- (void)handleRetryEventEnvelopes:(id)arg1;
- (void)handleDeliveredEventEnvelopes:(id)arg1;
- (void)handleFailedEventEnvelopes:(id)arg1 responseCode:(long long)arg2;
- (void)logFailedEnvelopes:(id)arg1 responseCode:(long long)arg2;
- (void)handleMessageOperationResponse:(id)arg1;
- (void)handleMessageOperation:(id)arg1;
- (void)scheduleQueueBackoff;
- (void)addBatchToExecutionQueue:(id)arg1 route:(long long)arg2;
- (void)batchAndAddToExecutionQueue:(id)arg1 queuedEnvelopes:(id)arg2 route:(long long)arg3;
- (id)queuedEnvelopes;
- (void)scheduleAllMessages;
- (id)wrappedNodesFromEnvelopes:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)timer:(id)arg1 didScheduleWithInterval:(double)arg2 attempt:(unsigned long long)arg3;
- (void)scheduleMessage:(id)arg1 authenticated:(_Bool)arg2;
- (id)initWithTransport:(id)arg1 dataSource:(id)arg2 dataDelegate:(id)arg3 logger:(id)arg4 eventEnvelopeFactory:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

