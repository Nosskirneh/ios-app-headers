//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "CancelableSyncOperation-Protocol.h"

@class NSObject, NSString, RACDisposable;
@protocol ApiDispatcher, OS_dispatch_queue, RACSubscriber, Sync;

@interface SyncOperation : NSOperation <CancelableSyncOperation>
{
    _Bool _isOperationFinished;
    _Bool _isOperationExecuting;
    id <Sync> _sync;
    id <RACSubscriber> _subscriber;
    id <ApiDispatcher> _apiDispatcher;
    RACDisposable *_signalDisposable;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(retain, nonatomic) RACDisposable *signalDisposable; // @synthesize signalDisposable=_signalDisposable;
@property(readonly, nonatomic) id <ApiDispatcher> apiDispatcher; // @synthesize apiDispatcher=_apiDispatcher;
@property(readonly, nonatomic) id <RACSubscriber> subscriber; // @synthesize subscriber=_subscriber;
@property(readonly, nonatomic) id <Sync> sync; // @synthesize sync=_sync;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToOperation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isAsynchronous;
@property(nonatomic) _Bool isOperationExecuting; // @synthesize isOperationExecuting=_isOperationExecuting;
@property(nonatomic) _Bool isOperationFinished; // @synthesize isOperationFinished=_isOperationFinished;
- (void)cancelBeforeBeingQueued;
- (void)cancel;
- (void)start;
- (id)initWithSync:(id)arg1 subscriber:(id)arg2 apiDispatcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
