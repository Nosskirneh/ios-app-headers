//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPCQueue, GSCRpcLibOptions, NSString;
@protocol GSCRpcErrorHandler;

@interface GSCRpcLib : NSObject
{
    NSString *_acceptLanguage;
    id <GSCRpcErrorHandler> _errorHandler;
    GSCRpcLibOptions *_options;
    GPCQueue *_concurrentQueue;
}

+ (id)pbErrorFromError:(id)arg1;
@property(readonly, nonatomic) GPCQueue *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(retain, nonatomic) GSCRpcLibOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)multipartPostDataForRpcRequest:(id)arg1 forLogging:(_Bool)arg2;
- (id)mutableUrlRequestForBatch;
- (id)handleMultipartResponse:(id)arg1 requestIdsMap:(id)arg2;
- (id)parseMultipartResponse:(id)arg1 fetcher:(id)arg2 error:(id *)arg3;
- (id)preprocessRequests:(id)arg1 onQueue:(id)arg2;
- (id)runBatchFetcher:(id)arg1 withRequestIdMap:(id)arg2 boundary:(id)arg3 onQueue:(id)arg4;
- (id)startBatch:(id)arg1;
- (id)startBatchRequest:(id)arg1;
- (void)addLoggingToPromise:(id)arg1 toFetcher:(id)arg2;
- (void)handleError:(id)arg1 forRequest:(id)arg2 withPromise:(id)arg3;
- (void)configureFetcher:(id)arg1 withOptions:(id)arg2;
- (id)pathForRpcRequest:(id)arg1;
- (id)mutableUrlRequestWithUrl:(id)arg1;
- (id)mutableUrlRequestWithRpcRequest:(id)arg1;
- (id)transformNetworkError:(id)arg1 data:(id)arg2 rpcClass:(Class)arg3;
- (id)createFetcherWithUrlRequest:(id)arg1 gaiaId:(id)arg2 uploadParameters:(id)arg3;
- (id)setupFetcherWithRpcRequest:(id)arg1;
- (void)logFetcher:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)runFetcher:(id)arg1 withRequest:(id)arg2 withPromise:(id)arg3 onQueue:(id)arg4;
- (id)parseResponseFromData:(id)arg1 forRequest:(id)arg2;
- (id)preprocessRequest:(id)arg1;
- (id)extensionRegistry;
- (id)start:(id)arg1;
- (void)configureWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;

@end

