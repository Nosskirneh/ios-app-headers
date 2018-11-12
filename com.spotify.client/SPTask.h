//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPCallbackHolderParent-Protocol.h"

@class NSError, NSMutableArray, NSString, SPTaskCompletionSource;

@interface SPTask : NSObject <SPCallbackHolderParent>
{
    _Bool _completed;
    _Bool _cancelled;
    NSMutableArray *_callbacks;
    NSMutableArray *_errbacks;
    NSMutableArray *_finallys;
    NSMutableArray *_childTasks;
    SPTaskCompletionSource *_source;
    id _completedValue;
    NSError *_completedError;
}

+ (id)awaitAll:(id)arg1;
+ (id)fetchWork:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
+ (id)performWork:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
+ (id)failedTask:(id)arg1;
+ (id)completedTask:(id)arg1;
+ (id)delay:(double)arg1;
+ (id)delay:(double)arg1 completeValue:(id)arg2;
@property(retain, nonatomic) NSError *completedError; // @synthesize completedError=_completedError;
@property(retain, nonatomic) id completedValue; // @synthesize completedValue=_completedValue;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) __weak SPTaskCompletionSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *childTasks; // @synthesize childTasks=_childTasks;
@property(retain, nonatomic) NSMutableArray *finallys; // @synthesize finallys=_finallys;
@property(retain, nonatomic) NSMutableArray *errbacks; // @synthesize errbacks=_errbacks;
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)completeWithValue:(id)arg1;
- (id)addFinallyCallback:(CDUnknownBlockType)arg1;
- (id)addFinallyCallback:(CDUnknownBlockType)arg1 on:(id)arg2;
- (id)addErrorCallback:(CDUnknownBlockType)arg1;
- (id)addErrorCallback:(CDUnknownBlockType)arg1 on:(id)arg2;
- (id)addCallback:(CDUnknownBlockType)arg1;
- (id)addCallback:(CDUnknownBlockType)arg1 on:(id)arg2;
- (id)initFromSource:(id)arg1;
- (void)cancel;
- (id)recover:(CDUnknownBlockType)arg1 on:(id)arg2;
- (id)chain;
- (id)chain:(CDUnknownBlockType)arg1 on:(id)arg2;
- (id)then:(CDUnknownBlockType)arg1 on:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

