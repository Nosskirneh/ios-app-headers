//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseWorker.h"

#import "YTWorker-Protocol.h"

@class GIMMe, NSString, YTOfflineVideoController, YTUserDefaults;
@protocol YTOfflineConfig, YTWorkerDelegate;

@interface YTOfflineVideoStoreMigrationWorker : YTBaseWorker <YTWorker>
{
    YTOfflineVideoController *_offlineVideoController;
    id <YTOfflineConfig> _offlineConfig;
    YTUserDefaults *_userDefaults;
    id <YTWorkerDelegate> _workerDelegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (void).cxx_destruct;
- (long long)workerRequirements;
- (void)startWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

