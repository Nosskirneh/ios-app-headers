//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSOperationQueue, NSURLSession;
@protocol OS_dispatch_queue, TWTRNetworkingResponseValidating;

@interface TWTRNetworkingPipelineQueue : NSObject
{
    _Bool _fetchingSession;
    long long _queueType;
    id <TWTRNetworkingResponseValidating> _responseValidator;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
    id _session;
    NSError *_sessionFetchError;
    NSOperationQueue *_operationQueue;
    NSURLSession *_URLSession;
}

+ (id)sessionFetchFailureError;
+ (id)userPipelineQueueWithURLSession:(id)arg1 responseValidator:(id)arg2;
+ (id)guestPipelineQueueWithURLSession:(id)arg1 responseValidator:(id)arg2;
@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSError *sessionFetchError; // @synthesize sessionFetchError=_sessionFetchError;
@property(retain, nonatomic) id session; // @synthesize session=_session;
@property(nonatomic, getter=isFetchingSession) _Bool fetchingSession; // @synthesize fetchingSession=_fetchingSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialAccessQueue; // @synthesize serialAccessQueue=_serialAccessQueue;
@property(readonly, nonatomic) id <TWTRNetworkingResponseValidating> responseValidator; // @synthesize responseValidator=_responseValidator;
@property(readonly, nonatomic) long long queueType; // @synthesize queueType=_queueType;
- (void).cxx_destruct;
- (void)syncLocalTime:(id)arg1;
- (_Bool)validateResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (void)invokeCallbackForPackage:(id)arg1 withData:(id)arg2 response:(id)arg3 error:(id)arg4;
- (void)invokeCancelCallbackForPackage:(id)arg1;
- (void)packageRequest:(id)arg1 session:(id)arg2 didReceiveResponse:(id)arg3 data:(id)arg4;
- (void)packageRequest:(id)arg1 session:(id)arg2 didReceiveError:(id)arg3;
- (void)sendRequestForPackage:(id)arg1 withSignedRequest:(id)arg2;
- (void)endFetchingOrRefreshingSession;
- (void)beginFetchingOrRefreshingSession;
- (void)handleSessionStoreResponse:(id)arg1 error:(id)arg2;
- (void)refreshSession:(id)arg1 forPackage:(id)arg2;
- (void)fetchSessionForPackage:(id)arg1;
- (void)cancelAllPendingRequests;
- (void)fetchSessionIfNeededForPackage:(id)arg1;
- (CDUnknownBlockType)requestSigningCancelBlock:(id)arg1;
- (CDUnknownBlockType)requestSigningSuccessBlock:(id)arg1;
- (id)userRequestSigningOperationWithPackage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)guestRequestSigningOperationWithPackage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)requestSigningOperationWithPackage:(id)arg1;
- (void)enqueuePipelinePackage:(id)arg1;
- (id)initWithType:(long long)arg1 URLSession:(id)arg2 responseValidator:(id)arg3;

@end

