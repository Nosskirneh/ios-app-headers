//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APEventGatewayRequestFactory, APEventSerializer, NSMutableSet, RequestQueue;
@protocol OS_dispatch_queue, _TtP4Core10TechLogger_;

@interface APEventGatewayBatchUploader : NSObject
{
    APEventSerializer *_eventSerializer;
    APEventGatewayRequestFactory *_requestFactory;
    RequestQueue *_requestQueue;
    NSMutableSet *_queuedEvents;
    unsigned long long _minimumBatchSize;
    id <_TtP4Core10TechLogger_> _techLogger;
    NSObject<OS_dispatch_queue> *_eventGatewayQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *eventGatewayQueue; // @synthesize eventGatewayQueue=_eventGatewayQueue;
@property(readonly, nonatomic) id <_TtP4Core10TechLogger_> techLogger; // @synthesize techLogger=_techLogger;
@property(readonly, nonatomic) unsigned long long minimumBatchSize; // @synthesize minimumBatchSize=_minimumBatchSize;
@property(readonly, nonatomic) NSMutableSet *queuedEvents; // @synthesize queuedEvents=_queuedEvents;
@property(readonly, nonatomic) RequestQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(readonly, nonatomic) APEventGatewayRequestFactory *requestFactory; // @synthesize requestFactory=_requestFactory;
@property(readonly, nonatomic) APEventSerializer *eventSerializer; // @synthesize eventSerializer=_eventSerializer;
- (void).cxx_destruct;
- (unsigned long long)numberOfEventsWaitingToBeUploaded;
- (id)serializedEventsNotQueued;
- (void)increaseRetryCountAndDeleteEventsIfNeeded:(id)arg1;
- (void)uploadSerializedEvents:(id)arg1 withRequest:(id)arg2;
- (void)deleteCorruptedEvents:(id)arg1 withError:(id)arg2;
- (void)createRequestAndUploadSerializedEvents:(id)arg1;
- (void)flush;
- (void)flushIfPossible;
- (void)flushIfNeeded;
- (void)flushDelayed;
- (void)uploadEvent:(id)arg1;
- (id)initWithEventSerializer:(id)arg1 requestFactory:(id)arg2 requestQueue:(id)arg3 queuedEvents:(id)arg4 minimumBatchSize:(unsigned long long)arg5 techLogger:(id)arg6 queue:(id)arg7;
- (id)initWithBaseURL:(id)arg1 queue:(id)arg2;

@end

