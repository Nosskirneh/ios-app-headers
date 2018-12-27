//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OfflineProgressProvider-Protocol.h"

@class DownloadQueue, NSString, RACDisposable, RACSubject;
@protocol OfflineUserConfigDataSourcing, _TtP4Core9Reachable_;

@interface OfflineSyncProgressObserver : NSObject <OfflineProgressProvider>
{
    RACSubject *_progressSubject;
    id <OfflineUserConfigDataSourcing> _offlineUserConfigRepository;
    id <_TtP4Core9Reachable_> _reachability;
    DownloadQueue *_queueToObserve;
    RACDisposable *_queueObservationDisposable;
    id _reachabilityObservationToken;
}

@property(retain, nonatomic) id reachabilityObservationToken; // @synthesize reachabilityObservationToken=_reachabilityObservationToken;
@property(retain, nonatomic) RACDisposable *queueObservationDisposable; // @synthesize queueObservationDisposable=_queueObservationDisposable;
@property(readonly, nonatomic) __weak DownloadQueue *queueToObserve; // @synthesize queueToObserve=_queueToObserve;
@property(readonly, nonatomic) id <_TtP4Core9Reachable_> reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) id <OfflineUserConfigDataSourcing> offlineUserConfigRepository; // @synthesize offlineUserConfigRepository=_offlineUserConfigRepository;
@property(readonly, nonatomic) RACSubject *progressSubject; // @synthesize progressSubject=_progressSubject;
- (void).cxx_destruct;
- (_Bool)isAllowedReachabilityStateWhenIsReachable:(_Bool)arg1 isOnWifi:(_Bool)arg2;
- (void)updateProgressObserverWhenIsReachable:(_Bool)arg1 isOnWifi:(_Bool)arg2;
- (void)subscribeReachabilityChanges;
- (_Bool)shouldUpdateProgress;
- (id)subscribeQueueChanges;
- (void)sendWithReplayability:(id)arg1;
- (void)sendWithoutReplayability:(id)arg1;
- (id)progressChange;
- (void)startObservation;
- (id)initWithQueueToObserve:(id)arg1 offlineUserConfigRepository:(id)arg2 reachability:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

