//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseWorker.h"

#import "YTOfflineVideoControllerObserver-Protocol.h"
#import "YTWorker-Protocol.h"

@class GIMMe, NSString, YTOfflineVideoController;
@protocol YTOfflineConfig, YTWorkerDelegate;

@interface YTOfflineStateActionWorker : YTBaseWorker <YTOfflineVideoControllerObserver, YTWorker>
{
    YTOfflineVideoController *_offlineVideoController;
    id <YTOfflineConfig> _offlineConfig;
    id <YTWorkerDelegate> _workerDelegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (void).cxx_destruct;
- (void)didUpdateOfflineStateActionsForVideoIDs:(id)arg1;
- (long long)workerRequirements;
- (_Bool)workerRequirementsCanChangeAtRuntime;
- (void)startWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

