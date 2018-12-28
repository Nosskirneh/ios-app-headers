//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DownstreamSyncHandler, GPMBackgroundTask, GPMEventLogger, GPMServiceConfiguration, NSConditionLock, NSDate, NSMutableArray, NSTimer, UpstreamSyncHandler;

@interface SyncManager : NSObject
{
    GPMServiceConfiguration *_serviceConfiguration;
    GPMEventLogger *_eventLogger;
    UpstreamSyncHandler *_upstreamHandler;
    DownstreamSyncHandler *_downstreamHandler;
    _Bool _invalidated;
    _Bool _periodicSyncStarted;
    NSTimer *_periodicSyncTimer;
    NSConditionLock *_syncCancelToken;
    NSDate *_syncStartDate;
    GPMBackgroundTask *_syncBackgroundTask;
    NSMutableArray *_syncCompletionRecords;
    NSMutableArray *_syncAgainCompletionRecords;
}

- (void).cxx_destruct;
- (void)attemptSyncWithCompletionRecord:(id)arg1 forced:(_Bool)arg2;
- (void)periodicSyncFired:(id)arg1;
- (void)schedulePeriodicSync;
- (void)cancelSync;
- (void)requestSyncOfType:(unsigned long long)arg1 progressHandler:(CDUnknownBlockType)arg2 progressQueue:(id)arg3;
- (void)stopPeriodicSync;
- (void)startPeriodicSync;
- (void)invalidate;
- (void)dealloc;
- (id)initWithMusicFetcher:(id)arg1 musicPreferences:(id)arg2 serviceConfiguration:(id)arg3 musicService:(id)arg4 musicModel:(id)arg5 versionUtil:(id)arg6 eventLogger:(id)arg7;
- (id)init;

@end

