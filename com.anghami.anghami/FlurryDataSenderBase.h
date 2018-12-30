//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FlurryBackgroundTaskTracker, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FlurryDataSenderBase : NSObject
{
    NSMutableArray *_runningTasks;
    NSObject<OS_dispatch_queue> *_queue;
    FlurryBackgroundTaskTracker *_backgroundTaskTracker;
    CDUnknownBlockType _completionHandler;
}

@property(nonatomic) __weak CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) FlurryBackgroundTaskTracker *backgroundTaskTracker; // @synthesize backgroundTaskTracker=_backgroundTaskTracker;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *runningTasks; // @synthesize runningTasks=_runningTasks;
- (void).cxx_destruct;
- (void)performRetransmitNotSentBlocks;
- (void)networkStatusChanged:(id)arg1;
- (void)cancelTasks;
- (void)didCompleteAllTasks;
- (void)retransmitNotSentBlocks;
- (void)unregisterTask:(id)arg1 completedSuccessfuly:(_Bool)arg2;
- (void)registerNewTask:(id)arg1;
- (void)registerNewTask:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasOngoingTasksWindow;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 backgroundTracker:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;
- (void)initialize;

@end
