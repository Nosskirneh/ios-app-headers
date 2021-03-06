//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPMOperationBatch, GPMOperationQueue, NSBlockOperation;

@interface GPMOperation : NSObject
{
    GPMOperationQueue *_queue;
    GPMOperationBatch *_batch;
    NSBlockOperation *_wrappedOp;
    _Bool _cancelled;
    _Bool _finished;
}

+ (id)currentOperation;
- (void).cxx_destruct;
- (void)cancel;
@property(readonly) _Bool cancelled;
@property(readonly) _Bool finished;
@property(readonly) _Bool executing;
@property(readonly) _Bool ready;
- (void)postExecution;
- (_Bool)preflightExecution;
- (id)initWithQueue:(id)arg1 batch:(id)arg2 delay:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)init;

@end

