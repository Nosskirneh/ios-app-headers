//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNSignal-Protocol.h"
#import "GADNSignalSource-Protocol.h"

@class GADNAd, GADNObserverCollection, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GADNRequestStatisticsSignals : NSObject <GADNSignal, GADNSignalSource>
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    // Error parsing type: Aq, name: _sequenceNumber
    long long _previousRequestCount;
    NSMutableDictionary *_applicationMetrics;
    NSMutableDictionary *_requestMetricsBySequenceNumber;
    NSMapTable *_adMetricsByAdContext;
    NSMutableDictionary *_unfinalizedAdsBySequenceNumber;
    GADNAd *_appExitingAd;
    GADNObserverCollection *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)getSignalUpdateQueue:(id *)arg1 signalCreationBlock:(CDUnknownBlockType *)arg2;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
- (void)updateRequestTimeMetrics;
- (id)appStatistics;
- (id)adStatistics;
- (void)cleanUpMetricsSentByRequest:(id)arg1;
- (_Bool)hasFinalizedStatisticsForSequenceNumber:(id)arg1;
- (void)setValue:(id)arg1 forRequest:(id)arg2 signal:(id)arg3;
- (void)resetQualitySessionIfNeeded;
- (void)endClickEventsForContext:(id)arg1;
- (void)endClickEventForExitingAd;
- (void)recordClickForAd:(id)arg1;
- (id)knownAdContexts;
- (void)setAds:(id)arg1 forRequest:(id)arg2;
- (void)addServerRequest:(id)arg1;
- (long long)nextSequenceNumber;
- (void)addSynchronizedObserverForName:(id)arg1 fromInstanceOfClass:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (void)observeAdEvents;
- (void)observeAppEvents;
- (void)observeRequests;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

