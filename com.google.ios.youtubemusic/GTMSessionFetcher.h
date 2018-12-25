//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class GTMSessionUploadFetcher, NSArray, NSData, NSDate, NSDictionary, NSError, NSHTTPCookieStorage, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSOperationQueue, NSString, NSTimer, NSURL, NSURLCredential, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionConfiguration, NSURLSessionTask;
@protocol GTMFetcherAuthorizationProtocol, GTMSessionFetcherServiceProtocol, OS_dispatch_group, OS_dispatch_queue;

@interface GTMSessionFetcher : NSObject <NSURLSessionDelegate>
{
    NSMutableURLRequest *_request;
    _Bool _useUploadTask;
    NSURL *_bodyFileURL;
    CDUnknownBlockType _bodyStreamProvider;
    NSURLSession *_session;
    _Bool _shouldInvalidateSession;
    NSURLSession *_sessionNeedingInvalidation;
    NSURLSessionConfiguration *_configuration;
    NSURLSessionTask *_sessionTask;
    NSString *_taskDescription;
    float _taskPriority;
    NSURLResponse *_response;
    NSString *_sessionIdentifier;
    _Bool _wasCreatedFromBackgroundSession;
    _Bool _didCreateSessionIdentifier;
    NSString *_sessionIdentifierUUID;
    _Bool _userRequestedBackgroundSession;
    _Bool _usingBackgroundSession;
    NSMutableData *_downloadedData;
    NSError *_downloadFinishedError;
    NSData *_downloadResumeData;
    NSData *_downloadTaskErrorData;
    NSURL *_destinationFileURL;
    long long _downloadedLength;
    NSURLCredential *_credential;
    NSURLCredential *_proxyCredential;
    _Bool _isStopNotificationNeeded;
    _Bool _isUsingTestBlock;
    id _userData;
    NSMutableDictionary *_properties;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_callbackGroup;
    NSOperationQueue *_delegateQueue;
    id <GTMFetcherAuthorizationProtocol> _authorizer;
    id <GTMSessionFetcherServiceProtocol> _service;
    NSString *_serviceHost;
    long long _servicePriority;
    _Bool _hasStoppedFetching;
    _Bool _userStoppedFetching;
    _Bool _isRetryEnabled;
    NSTimer *_retryTimer;
    unsigned long long _retryCount;
    double _maxRetryInterval;
    double _minRetryInterval;
    double _retryFactor;
    double _lastRetryInterval;
    NSDate *_initialBeginFetchDate;
    NSDate *_initialRequestDate;
    _Bool _hasAttemptedAuthRefresh;
    NSString *_comment;
    NSString *_log;
    _Bool _canShareSession;
    _Bool _allowLocalhostRequest;
    _Bool _allowInvalidServerCertificates;
    _Bool _skipBackgroundTask;
    CDUnknownBlockType _configurationBlock;
    NSDictionary *_sessionUserInfo;
    CDUnknownBlockType _completionHandler;
    NSData *_bodyData;
    long long _bodyLength;
    CDUnknownBlockType _accumulateDataBlock;
    CDUnknownBlockType _receivedProgressBlock;
    CDUnknownBlockType _downloadProgressBlock;
    CDUnknownBlockType _resumeDataBlock;
    CDUnknownBlockType _didReceiveResponseBlock;
    CDUnknownBlockType _challengeBlock;
    CDUnknownBlockType _willRedirectBlock;
    CDUnknownBlockType _sendProgressBlock;
    CDUnknownBlockType _willCacheURLResponseBlock;
    CDUnknownBlockType _retryBlock;
    NSArray *_allowedInsecureSchemes;
    NSHTTPCookieStorage *_cookieStorage;
    CDUnknownBlockType _testBlock;
    unsigned long long _testBlockAccumulateDataChunkCount;
    unsigned long long _backgroundTaskIdentifier;
}

+ (_Bool)isLoggingEnabled;
+ (void)setLoggingEnabled:(_Bool)arg1;
+ (CDUnknownBlockType)systemCompletionHandlerForSessionIdentifier:(id)arg1;
+ (void)setSystemCompletionHandler:(CDUnknownBlockType)arg1 forSessionIdentifier:(id)arg2;
+ (void)evaluateServerTrust:(struct __SecTrust *)arg1 forRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)redirectURLWithOriginalRequestURL:(id)arg1 redirectRequestURL:(id)arg2;
+ (id)fetcherUIApplication;
+ (id)substituteUIApplication;
+ (void)setSubstituteUIApplication:(id)arg1;
+ (void)setGlobalTestBlock:(CDUnknownBlockType)arg1;
+ (id)staticCookieStorage;
+ (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)fetchersForBackgroundSessions;
+ (id)activePersistedBackgroundSessions;
+ (id)fetcherUserDefaults;
+ (_Bool)appAllowsInsecureRequests;
+ (id)sessionIdentifierToFetcherMap;
+ (id)fetcherWithSessionIdentifier:(id)arg1;
+ (id)fetcherWithDownloadResumeData:(id)arg1;
+ (id)fetcherWithURLString:(id)arg1;
+ (id)fetcherWithURL:(id)arg1;
+ (id)fetcherWithRequest:(id)arg1;
+ (void)load;
+ (id)remoteSegmentForSessionFetcher:(id)arg1;
+ (_Bool)isBackgroundDownloadFetcherForSessionIdentifier:(id)arg1;
+ (void)stopFetcherWithSessionIdentifier:(id)arg1;
+ (id)remoteSegmentForSessionIdentifier:(id)arg1;
+ (id)youTubeFetcherWithURL:(id)arg1;
+ (id)youTubeFetcherWithRequest:(id)arg1;
@property _Bool skipBackgroundTask; // @synthesize skipBackgroundTask=_skipBackgroundTask;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(copy) NSString *log; // @synthesize log=_log;
@property(copy) NSString *comment; // @synthesize comment=_comment;
@property unsigned long long testBlockAccumulateDataChunkCount; // @synthesize testBlockAccumulateDataChunkCount=_testBlockAccumulateDataChunkCount;
@property(copy) CDUnknownBlockType testBlock; // @synthesize testBlock=_testBlock;
@property(readonly) NSDate *initialBeginFetchDate; // @synthesize initialBeginFetchDate=_initialBeginFetchDate;
@property(retain) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property _Bool allowInvalidServerCertificates; // @synthesize allowInvalidServerCertificates=_allowInvalidServerCertificates;
@property _Bool allowLocalhostRequest; // @synthesize allowLocalhostRequest=_allowLocalhostRequest;
@property(copy) NSArray *allowedInsecureSchemes; // @synthesize allowedInsecureSchemes=_allowedInsecureSchemes;
@property double retryFactor; // @synthesize retryFactor=_retryFactor;
@property(copy) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(copy) CDUnknownBlockType willCacheURLResponseBlock; // @synthesize willCacheURLResponseBlock=_willCacheURLResponseBlock;
@property(copy) CDUnknownBlockType sendProgressBlock; // @synthesize sendProgressBlock=_sendProgressBlock;
@property(copy) CDUnknownBlockType willRedirectBlock; // @synthesize willRedirectBlock=_willRedirectBlock;
@property(copy) CDUnknownBlockType challengeBlock; // @synthesize challengeBlock=_challengeBlock;
@property(copy) CDUnknownBlockType didReceiveResponseBlock; // @synthesize didReceiveResponseBlock=_didReceiveResponseBlock;
@property(copy) CDUnknownBlockType resumeDataBlock; // @synthesize resumeDataBlock=_resumeDataBlock;
@property(copy) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(copy) CDUnknownBlockType receivedProgressBlock; // @synthesize receivedProgressBlock=_receivedProgressBlock;
@property(copy) CDUnknownBlockType accumulateDataBlock; // @synthesize accumulateDataBlock=_accumulateDataBlock;
@property(copy) NSString *serviceHost; // @synthesize serviceHost=_serviceHost;
@property(retain) id <GTMSessionFetcherServiceProtocol> service; // @synthesize service=_service;
@property(retain) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(retain) NSURLCredential *proxyCredential; // @synthesize proxyCredential=_proxyCredential;
@property(retain) NSURLCredential *credential; // @synthesize credential=_credential;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property float taskPriority; // @synthesize taskPriority=_taskPriority;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(readonly) _Bool wasCreatedFromBackgroundSession; // @synthesize wasCreatedFromBackgroundSession=_wasCreatedFromBackgroundSession;
@property(copy) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(retain) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) NSData *downloadResumeData; // @synthesize downloadResumeData=_downloadResumeData;
- (void).cxx_destruct;
- (void)setCommentWithFormat:(id)arg1;
- (void)addPropertiesFromDictionary:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
@property(copy) NSDictionary *properties;
@property(retain) NSURL *destinationFileURL;
@property(retain) id userData;
- (_Bool)userStoppedFetching;
@property(retain) NSOperationQueue *sessionDelegateQueue;
- (void)setSessionNeedingInvalidation:(id)arg1;
- (id)sessionNeedingInvalidation;
@property(getter=isUsingBackgroundSession) _Bool usingBackgroundSession; // @synthesize usingBackgroundSession=_usingBackgroundSession;
@property _Bool useBackgroundSession;
- (void)setCanShareSession:(_Bool)arg1;
@property(readonly) _Bool canShareSession; // @synthesize canShareSession=_canShareSession;
@property(retain) NSURLSession *session;
@property long long servicePriority;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void)setDownloadedLength:(long long)arg1;
@property(readonly) long long downloadedLength;
@property(retain) NSData *downloadedData;
@property(retain) id <GTMFetcherAuthorizationProtocol> authorizer;
@property(copy) CDUnknownBlockType bodyStreamProvider;
@property(retain) NSURL *bodyFileURL;
@property _Bool useUploadTask;
@property(readonly) long long bodyLength; // @synthesize bodyLength=_bodyLength;
- (void)setResponse:(id)arg1;
- (void)updateRequestValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setRequestValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)updateMutableRequest:(id)arg1;
- (void)setMutableRequest:(id)arg1;
@property(readonly) NSMutableURLRequest *mutableRequest;
- (id)mutableRequestForTesting;
@property(retain) NSURLRequest *request;
- (void)setSystemCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)systemCompletionHandler;
@property double minRetryInterval;
@property double maxRetryInterval;
@property(getter=isRetryEnabled) _Bool retryEnabled;
- (_Bool)isRetryEnabledUnsynchronized;
- (id)retryTimer;
- (double)nextRetryIntervalUnsynchronized;
@property(readonly) double nextRetryInterval;
@property(readonly) unsigned long long retryCount;
- (void)destroyRetryTimer;
- (void)retryTimerFired:(id)arg1;
- (void)beginRetryTimer;
- (double)retryAfterInterval;
- (_Bool)hasRetryAfterInterval;
- (void)shouldRetryNowForStatus:(long long)arg1 error:(id)arg2 forceAssumeRetry:(_Bool)arg3 response:(CDUnknownBlockType)arg4;
- (_Bool)isRetryError:(id)arg1;
- (void)logNowWithError:(id)arg1;
- (_Bool)shouldReleaseCallbacksUponCompletion;
- (void)finishWithError:(id)arg1 shouldRetry:(_Bool)arg2;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)postNotificationOnMainThreadWithName:(id)arg1 userInfo:(id)arg2 requireAsync:(_Bool)arg3;
- (void)invokeFetchCallbacksOnCallbackQueueWithData:(id)arg1 error:(id)arg2;
- (void)invokeOnCallbackQueue:(id)arg1 afterUserStopped:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)invokeOnCallbackUnsynchronizedQueueAfterUserStopped:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)invokeOnCallbackQueueAfterUserStopped:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)invokeOnCallbackQueueUnlessStopped:(CDUnknownBlockType)arg1;
- (void)respondToChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)waitForCompletionWithTimeout:(double)arg1;
- (void)retryFetch;
- (void)sendStopNotificationIfNeeded;
- (void)setStopNotificationNeeded:(_Bool)arg1;
- (void)stopFetchReleasingCallbacks:(_Bool)arg1;
- (void)stopFetching;
- (void)forgetSessionIdentifierForFetcherWithoutSyncCheck;
- (void)forgetSessionIdentifierForFetcher;
- (void)releaseCallbacks;
- (id)responseHeadersUnsynchronized;
@property(readonly) NSDictionary *responseHeaders;
- (long long)statusCodeUnsynchronized;
@property(readonly) long long statusCode;
- (id)responseUnsynchronized;
@property(readonly) NSURLResponse *response;
- (_Bool)isFetchingUnsynchronized;
@property(readonly, getter=isFetching) _Bool fetching;
- (_Bool)canFetchWithBackgroundSession;
- (void)authorizer:(id)arg1 request:(id)arg2 finishedWithError:(id)arg3;
- (void)authorizeRequest;
- (void)endBackgroundTask;
- (void)failToBeginFetchWithError:(id)arg1;
- (id)createSessionIdentifierWithMetadata:(id)arg1;
- (id)sessionIdentifierMetadataUnsynchronized;
- (id)sessionIdentifierMetadata;
- (void)restoreDefaultStateForSessionIdentifierMetadata;
- (id)sessionIdentifierDefaultMetadata;
@property(retain) NSDictionary *sessionUserInfo; // @synthesize sessionUserInfo=_sessionUserInfo;
- (void)setSessionIdentifierInternal:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
@property(readonly) NSString *sessionIdentifier;
- (void)removePersistedBackgroundSessionFromDefaults;
- (void)addPersistedBackgroundSessionToDefaults;
@property(readonly) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
- (void)setSessionTask:(id)arg1;
- (void)simulateByteTransferWithData:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)simulateDataCallbacksForTestBlockWithBodyData:(id)arg1 response:(id)arg2 responseData:(id)arg3 error:(id)arg4;
- (void)simulateByteTransferReportWithDataLength:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)simulateFetchForTestBlock;
- (void)beginFetchMayDelay:(_Bool)arg1 mayAuthorize:(_Bool)arg2;
- (void)beginFetchWithDelegate:(id)arg1 didFinishSelector:(SEL)arg2;
- (CDUnknownBlockType)completionHandlerWithTarget:(id)arg1 didFinishSelector:(SEL)arg2;
- (void)beginFetchForRetry;
- (void)beginFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 configuration:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)init;
- (void)beginContentFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setIsBackgroundDownloadFetcher:(_Bool)arg1;
- (void)setRemoteSegment:(id)arg1;
- (void)setCookieStorageMethod:(long long)arg1;
@property(readonly) GTMSessionUploadFetcher *parentUploadFetcher;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

