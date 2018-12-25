//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseWorker.h"

#import "YTWorker-Protocol.h"

@class GIMMe, NSDate, NSString, YTOfflineCoordinator, YTTimedAction, YTUserDefaults;
@protocol YTIdentityProvider, YTWorkerDelegate;

@interface YTOfflineUserRemovalCleanupWorker : YTBaseWorker <YTWorker>
{
    YTOfflineCoordinator *_offlineCoordinator;
    id <YTIdentityProvider> _identityProvider;
    YTUserDefaults *_userDefaults;
    YTTimedAction *_timedAction;
    double _tryAgainLaterBackoff;
    id <YTWorkerDelegate> _workerDelegate;
    NSDate *_nextWorkDate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (void).cxx_destruct;
- (void)timedActionDidFire;
- (void)startTimedAction;
- (void)stopTimedAction;
- (void)resetTryAgainLater;
- (CDUnknownBlockType)tryAgainLaterBlockWithErrorBlock:(CDUnknownBlockType)arg1;
- (_Bool)refreshIntervalHasExpired;
- (void)deleteResourcesForUserIDs:(id)arg1;
- (void)getAllAvailableIdentitiesAndDeleteUnusedForUserIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)doWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)hasWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSDate *nextWorkDate; // @synthesize nextWorkDate=_nextWorkDate;
- (double)tryAgainLaterBackoff;
- (id)timedAction;
- (long long)workerRequirements;
- (void)startWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

