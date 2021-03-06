//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSOperationQueue, UAConfig, UAEventAPIClient, UAEventStore, UAPreferenceDataStore;

@interface UAEventManager : NSObject
{
    UAConfig *_config;
    UAEventStore *_eventStore;
    UAPreferenceDataStore *_dataStore;
    UAEventAPIClient *_client;
    NSDate *_earliestForegroundSendTime;
    NSOperationQueue *_queue;
    NSDate *_nextUploadDate;
}

+ (unsigned long long)clampValue:(unsigned long long)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3;
+ (id)eventManagerWithConfig:(id)arg1 dataStore:(id)arg2 eventStore:(id)arg3 client:(id)arg4 queue:(id)arg5;
+ (id)eventManagerWithConfig:(id)arg1 dataStore:(id)arg2;
@property(retain) NSDate *nextUploadDate; // @synthesize nextUploadDate=_nextUploadDate;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain) NSDate *earliestForegroundSendTime; // @synthesize earliestForegroundSendTime=_earliestForegroundSendTime;
@property(retain, nonatomic) UAEventAPIClient *client; // @synthesize client=_client;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) UAEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(retain, nonatomic) UAConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (_Bool)enqueueUploadOperationWithDelay:(double)arg1;
- (void)scheduleUploadWithDelay:(double)arg1;
- (void)scheduleUpload;
- (void)cancelUpload;
- (void)deleteAllEvents;
- (void)addEvent:(id)arg1 sessionID:(id)arg2;
@property(nonatomic) unsigned long long minBatchInterval;
@property(nonatomic) unsigned long long maxBatchSize;
@property(nonatomic) unsigned long long maxTotalDBSize;
- (void)updateAnalyticsParametersWithResponse:(id)arg1;
@property(retain) NSDate *lastSendTime;
- (void)enterBackground;
- (void)enterForeground;
- (void)didBecomeActive;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 dataStore:(id)arg2 eventStore:(id)arg3 client:(id)arg4 queue:(id)arg5;

@end

