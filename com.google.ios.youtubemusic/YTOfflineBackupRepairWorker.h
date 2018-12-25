//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseWorker.h"

#import "YTHotConfigObserver-Protocol.h"
#import "YTWorker-Protocol.h"

@class GIMMe, NSDate, NSMutableArray, NSString, YTHotConfig, YTOfflineVideoController, YTTimedAction, YTUserDefaults;
@protocol YTWorkerDelegate;

@interface YTOfflineBackupRepairWorker : YTBaseWorker <YTHotConfigObserver, YTWorker>
{
    YTUserDefaults *_userDefaults;
    YTHotConfig *_hotConfig;
    YTTimedAction *_timedAction;
    NSMutableArray *_pendingPlayableVideoIDs;
    YTOfflineVideoController *_offlineVideoController;
    _Bool _hasCompletedRepair;
    _Bool _enabled;
    id <YTWorkerDelegate> _workerDelegate;
    NSDate *_lastWorkDate;
    GIMMe *_gimme;
    long long _nextRepairInterval;
}

@property(nonatomic) long long nextRepairInterval; // @synthesize nextRepairInterval=_nextRepairInterval;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) NSDate *lastWorkDate; // @synthesize lastWorkDate=_lastWorkDate;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (void).cxx_destruct;
- (_Bool)hasEnableBackupOfflineFixChanged;
- (void)timedActionDidFire;
- (void)startTimedAction;
- (void)stopTimedAction;
- (void)doWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)hasWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (_Bool)isRepairIntervalExpired;
- (id)projectedNextWorkDate;
- (void)hotConfigDidChange:(id)arg1;
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

