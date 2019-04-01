//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GCDTimer, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, VXBassSourceLoaderDelegate;

@interface VXBassSourceLoader : NSObject
{
    NSObject<OS_dispatch_semaphore> *_pendingSourceSemaphore;
    _Bool _loading;
    _Bool _running;
    NSMutableArray *_failedUserObjects;
    _Bool _shouldLoadLocalToMemory;
    id <VXBassSourceLoaderDelegate> _delegate;
    CDUnknownBlockType _deferredTaskBlock;
    long long _loadingRequestsCount;
    id _lastRequestedUserInfo;
    id _additionalServiceData;
    GCDTimer *_reloadTimer;
    NSObject<OS_dispatch_queue> *_loadingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue; // @synthesize loadingQueue=_loadingQueue;
@property(retain) GCDTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property(retain, nonatomic) id additionalServiceData; // @synthesize additionalServiceData=_additionalServiceData;
@property(readonly, nonatomic) id lastRequestedUserInfo; // @synthesize lastRequestedUserInfo=_lastRequestedUserInfo;
@property(nonatomic) _Bool shouldLoadLocalToMemory; // @synthesize shouldLoadLocalToMemory=_shouldLoadLocalToMemory;
@property(readonly, nonatomic) long long loadingRequestsCount; // @synthesize loadingRequestsCount=_loadingRequestsCount;
@property(copy, nonatomic) CDUnknownBlockType deferredTaskBlock; // @synthesize deferredTaskBlock=_deferredTaskBlock;
@property(nonatomic) __weak id <VXBassSourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)setLastRequestedUserInfo:(id)arg1;
- (_Bool)userIDHasFailed:(id)arg1;
- (void)addToFailed:(id)arg1;
- (void)_loadSourceForURL:(id)arg1 isPartial:(_Bool)arg2 startPos:(float)arg3 length:(float)arg4 initPosition:(float)arg5 userInfo:(id)arg6 urlResolver:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)loadSourceFromDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

