//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMOperationBatch.h"

@interface GPMOperationSequence : GPMOperationBatch
{
    _Bool _cancelled;
    _Bool _markFinished;
}

- (void)notifyFinishedOnOperationQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)wait;
- (_Bool)waitUntilDate:(id)arg1;
- (void)markFinished;
- (void)cancel;
@property(readonly) _Bool finished;
@property(readonly) _Bool cancelled;
- (_Bool)batchIsFinishedWhileLocked;
- (_Bool)addOperation:(id)arg1;
- (void)dealloc;

@end

