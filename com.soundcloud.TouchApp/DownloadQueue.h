//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, RACBehaviorSubject, RACDisposable;
@protocol _TtP4Core9Reachable_;

@interface DownloadQueue : NSObject
{
    _Bool _wifiRequered;
    NSOperationQueue *_operationQueue;
    id <_TtP4Core9Reachable_> _reachability;
    RACDisposable *_disposable;
    RACBehaviorSubject *_nonCancelledOperations;
    id _reachabilityObservationToken;
}

@property(retain, nonatomic) id reachabilityObservationToken; // @synthesize reachabilityObservationToken=_reachabilityObservationToken;
@property(retain, nonatomic) RACBehaviorSubject *nonCancelledOperations; // @synthesize nonCancelledOperations=_nonCancelledOperations;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(readonly, nonatomic) id <_TtP4Core9Reachable_> reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool wifiRequered; // @synthesize wifiRequered=_wifiRequered;
- (void).cxx_destruct;
- (void)enforceQueueSuspention;
- (void)subscribeReachability;
- (void)subscribeToOperationsChanges;
- (void)notifyCancelledOperationsCountSubject;
- (void)updateOperations:(CDUnknownBlockType)arg1;
- (id)activeOperationsCount;
- (_Bool)isSuspended;
- (id)activeOperationsFrom:(id)arg1;
- (id)activeOperations;
- (void)clearQueue;
- (void)addOperations:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 reachability:(id)arg2;

@end

