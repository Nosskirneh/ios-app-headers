//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSThread;
@protocol OS_dispatch_queue;

@interface FlurryActor : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSThread *_activeThread;
}

+ (id)currentActor;
+ (void)load;
@property(retain, nonatomic) NSThread *activeThread; // @synthesize activeThread=_activeThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (CDUnknownBlockType)wrapAsyncBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)wrapSyncBlock:(CDUnknownBlockType)arg1 withException:(CDUnknownBlockType)arg2 onCurrentThread:(id)arg3;
- (void)asyncCallback:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)asyncBlock:(CDUnknownBlockType)arg1 afterDate:(id)arg2;
- (void)asyncBlock:(CDUnknownBlockType)arg1 afterDelay:(long long)arg2;
- (void)groupNotify:(CDUnknownBlockType)arg1 onGroup:(id)arg2;
- (void)groupLeave:(id)arg1;
- (void)groupEnter:(id)arg1;
- (void)asyncBlock:(CDUnknownBlockType)arg1 onGroup:(id)arg2;
- (void)asyncBlock:(CDUnknownBlockType)arg1;
- (long long)syncGroup:(id)arg1 withTimeout:(unsigned long long)arg2;
- (void)syncBlock:(CDUnknownBlockType)arg1;
- (id)initWithDescription:(id)arg1 target:(id)arg2;
- (id)initWithDescription:(id)arg1;
- (id)init;
- (id)createDeferredQueueWithDescription:(id)arg1;

@end

