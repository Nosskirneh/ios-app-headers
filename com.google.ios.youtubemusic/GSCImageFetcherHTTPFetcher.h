//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSCImageCacheReservedItem, GSCImageFetcherCache, GSCImageFetcherHTTPFetcherSession, NSData, NSMutableData, NSMutableURLRequest, NSString, NSURLSessionTask;
@protocol GTMFetcherAuthorizationProtocol, OS_dispatch_queue;

@interface GSCImageFetcherHTTPFetcher : NSObject
{
    _Bool _fetchWasCancelled;
    unsigned short _responseFlags;
    CDUnknownBlockType _progressBlock;
    GSCImageFetcherHTTPFetcherSession *_session;
    NSURLSessionTask *_task;
    NSMutableURLRequest *_request;
    id <GTMFetcherAuthorizationProtocol> _authorizer;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GSCImageFetcherCache *_cache;
    NSString *_cacheKey;
    GSCImageCacheReservedItem *_reservedItem;
    NSData *_receivedData;
    NSMutableData *_accumulatedData;
    unsigned long long _accumulatedDataCapacity;
    unsigned long long _retryTaskCount;
}

+ (id)fetcherWithURL:(id)arg1 cacheKey:(id)arg2 gaiaIdToLog:(id)arg3 authorizer:(id)arg4 callbackQueue:(id)arg5 session:(id)arg6 cache:(id)arg7 allowHTTPRequests:(_Bool)arg8;
+ (id)createFetcherSession;
+ (void)setNetworkCancellationEnabled:(_Bool)arg1;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long retryTaskCount; // @synthesize retryTaskCount=_retryTaskCount;
@property(readonly, nonatomic) unsigned short responseFlags; // @synthesize responseFlags=_responseFlags;
@property(readonly, nonatomic) unsigned long long accumulatedDataCapacity; // @synthesize accumulatedDataCapacity=_accumulatedDataCapacity;
@property(readonly, nonatomic) NSMutableData *accumulatedData; // @synthesize accumulatedData=_accumulatedData;
@property(readonly, nonatomic) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property(readonly, nonatomic) GSCImageCacheReservedItem *reservedItem; // @synthesize reservedItem=_reservedItem;
@property(readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) GSCImageFetcherCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) _Bool fetchWasCancelled; // @synthesize fetchWasCancelled=_fetchWasCancelled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) id <GTMFetcherAuthorizationProtocol> authorizer; // @synthesize authorizer=_authorizer;
@property(readonly, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) GSCImageFetcherHTTPFetcherSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (_Bool)reserveCacheSpaceFromResponse:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didCompleteWithError:(id)arg1;
- (void)authorizeAndScheduleOnSession;
- (id)createTaskFromSession:(id)arg1;
- (void)cancelFetching;
- (void)beginFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)consumeReservedItem;
- (void)dealloc;
- (id)initWithURL:(id)arg1 cacheKey:(id)arg2 gaiaIdToLog:(id)arg3 authorizer:(id)arg4 callbackQueue:(id)arg5 session:(id)arg6 cache:(id)arg7 allowHTTPRequests:(_Bool)arg8;

@end
