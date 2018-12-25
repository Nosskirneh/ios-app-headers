//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBaseChunkLoadTask.h"

#import "HAMDataLoadTaskDelegate-Protocol.h"

@class MLChunkLoader, MLPlayerEventCenter, NSDictionary, NSObject, NSString;
@protocol HAMClock, HAMDataLoadTask, MLABRPolicy, OS_dispatch_queue;

@interface MLChunkLoadTask : HAMBaseChunkLoadTask <HAMDataLoadTaskDelegate>
{
    MLChunkLoader *_chunkLoader;
    NSDictionary *_userInfo;
    id <MLABRPolicy> _ABRPolicy;
    id <HAMClock> _clock;
    MLPlayerEventCenter *_eventCenter;
    NSObject<OS_dispatch_queue> *_queue;
    id <HAMDataLoadTask> _dataLoadTask;
    NSString *_URLRelativeString;
}

- (void).cxx_destruct;
- (void)dataLoadTask:(id)arg1 didReceiveData:(id)arg2;
- (void)dataLoadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)dataLoadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (id)cancel;
- (id)initWithChunks:(id)arg1 delegate:(id)arg2 dataLoadTask:(id)arg3 chunkLoader:(id)arg4 ABRPolicy:(id)arg5 clock:(id)arg6 eventCenter:(id)arg7 queue:(id)arg8 URLRelativeString:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
