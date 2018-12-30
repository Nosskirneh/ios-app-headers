//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EX2Action-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"

@class AnghamiSimpleConnectionQueue, DNSOverrideConnectionDelegate, EX2ActionQueue, NAAEAD, NSDate, NSDictionary, NSError, NSMutableData, NSString, NSURLConnection, NSURLRequest;
@protocol LoaderDelegate;

@interface Loader : NSObject <NSURLConnectionDataDelegate, EX2Action>
{
    _Bool _HTTP500Response;
    NSDate *_loadStartTime;
    NSDictionary *_responseHeaders;
    DNSOverrideConnectionDelegate *_dnsOverrideConnectionDelegate;
    _Bool _isExcludeFromOfflineModeCounter;
    _Bool _isBackgroundProcessing;
    _Bool _didShowServerMessage;
    _Bool _suppressAutomaticServerMessage;
    _Bool _shouldNotReload;
    int _actionState;
    int _state;
    EX2ActionQueue *_actionQueue;
    CDUnknownBlockType _callbackBlock;
    NSObject<LoaderDelegate> *_delegate;
    Loader *_selfRef;
    NSString *_urlString;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_receivedData;
    long long _expectedDataSize;
    NSError *_loadError;
    unsigned long long _numberOfRetries;
    AnghamiSimpleConnectionQueue *_connectionQueue;
    long long _anghamiErrorCode;
    NSString *_anghamiErrorMessage;
    long long _httpCode;
    NSDictionary *_httpHeaders;
    double _requestTimestamp;
    NSError *_finalFailureError;
    NAAEAD *_cryptor;
}

+ (id)signatureKeyWithSecret:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)requestSignatureKey;
+ (id)responseSignatureKey;
+ (id)anghamiErrorNotXMLSwift;
+ (id)anghamiErrorTagErrorSwift;
+ (unsigned long long)failureCount;
+ (void)resetFailureCount;
+ (_Bool)recordFailure;
+ (void)cancelAllLoaders;
+ (void)initialize;
+ (_Bool)hasActiveLoaderOfType:(Class)arg1;
+ (id)CSVStringOfObjectsID:(id)arg1;
@property(retain, nonatomic) NAAEAD *cryptor; // @synthesize cryptor=_cryptor;
@property(retain, nonatomic) NSError *finalFailureError; // @synthesize finalFailureError=_finalFailureError;
@property double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(readonly, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(readonly, nonatomic) long long httpCode; // @synthesize httpCode=_httpCode;
@property(readonly) NSString *anghamiErrorMessage; // @synthesize anghamiErrorMessage=_anghamiErrorMessage;
@property(readonly) long long anghamiErrorCode; // @synthesize anghamiErrorCode=_anghamiErrorCode;
@property _Bool shouldNotReload; // @synthesize shouldNotReload=_shouldNotReload;
@property _Bool suppressAutomaticServerMessage; // @synthesize suppressAutomaticServerMessage=_suppressAutomaticServerMessage;
@property _Bool didShowServerMessage; // @synthesize didShowServerMessage=_didShowServerMessage;
@property _Bool isBackgroundProcessing; // @synthesize isBackgroundProcessing=_isBackgroundProcessing;
@property(retain) AnghamiSimpleConnectionQueue *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property _Bool isExcludeFromOfflineModeCounter; // @synthesize isExcludeFromOfflineModeCounter=_isExcludeFromOfflineModeCounter;
@property int state; // @synthesize state=_state;
@property unsigned long long numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(readonly) NSError *loadError; // @synthesize loadError=_loadError;
@property long long expectedDataSize; // @synthesize expectedDataSize=_expectedDataSize;
@property(retain) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property(copy) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain) Loader *selfRef; // @synthesize selfRef=_selfRef;
@property __weak NSObject<LoaderDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property int actionState; // @synthesize actionState=_actionState;
@property EX2ActionQueue *actionQueue; // @synthesize actionQueue=_actionQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldReport500Errors;
- (_Bool)isEqual:(id)arg1;
- (id)signRequest:(id)arg1;
- (void)sendAnalyticsEvent:(id)arg1 params:(id)arg2 platforms:(id)arg3 additionalTags:(id)arg4 timer:(long long)arg5;
- (void)sendAnalyticsForDictionary:(id)arg1;
- (void)sendAnalyticsForElement:(struct _TBXMLElement *)arg1;
- (id)decryptedData:(id)arg1 error:(id *)arg2;
- (id)encryptedData:(id)arg1;
- (id)responseKey;
- (id)requestKey;
- (_Bool)shouldEncryptData;
- (_Bool)checkForJSONError:(id)arg1;
- (_Bool)checkForXMLError:(struct _TBXMLElement *)arg1;
- (_Bool)cancelAction;
- (void)runAction;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)processData:(id)arg1;
- (void)processDataBackground:(id)arg1;
- (void)handlePreProcessData:(id)arg1;
@property(readonly) NSString *errorTypeString;
@property(readonly, nonatomic) _Bool canRetryRequests;
- (void)connectionTimedOut;
- (_Bool)informDelegateLoadingFinished;
- (_Bool)informDelegateLoadingFailed:(id)arg1;
- (void)cancelLoad;
@property(readonly) _Bool isLoading;
- (void)startLoadInQueue:(id)arg1;
- (void)startLoad;
- (_Bool)disableDeeplinkExecution;
- (id)generateRequest;
@property(readonly, nonatomic) _Bool shouldLogPostData;
@property(readonly, nonatomic) double connectionTimeout;
- (_Bool)hideSocketIDHeader;
@property(readonly, nonatomic) _Bool shouldAddRetryParam;
@property(readonly) int type;
- (void)dealloc;
- (void)setup;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)attemptToReportOfflineWithError:(id)arg1 connectionError:(_Bool)arg2;
- (void)handleErrorWithCode:(id)arg1 dialogDict:(id)arg2 logoff:(_Bool)arg3 warning:(_Bool)arg4 backgroundReauth:(_Bool)arg5 message:(id)arg6;
@property(readonly, nonatomic) unsigned long long encType;
- (id)keyFromWithHashTimes:(long long)arg1 timestamp:(double)arg2;
- (long long)ordinalUDID;
- (id)authResponseKey;
- (id)authRequestKey;
- (id)defaultRequestKey;
- (id)defaultResponseKey;
- (void)handleDeeplink:(id)arg1 goToHome:(_Bool)arg2;
- (void)handleDeeplink:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
