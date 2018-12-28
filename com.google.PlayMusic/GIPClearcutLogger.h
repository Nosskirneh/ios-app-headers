//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIPPseudonymousIDStore, GTMSessionFetcher, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL;
@protocol GIPClearcutLoggerDelegate, OS_dispatch_queue;

@interface GIPClearcutLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_backgroundTaskHandlerQueue;
    long long _bootTimeMillis;
    _Bool _disableLogging;
    _Bool _isAnonymous;
    _Bool _sendScheduled;
    NSString *_applicationBuild;
    unsigned long long _maxRequestNumBytes;
    NSString *_installIdentifier;
    NSURL *_serverURL;
    CDUnknownBlockType _accountToAuthorizerBlock;
    id <GIPClearcutLoggerDelegate> _delegate;
    NSString *_logDirectory;
    NSMutableDictionary *_logWriters;
    long long _sendDelayMillis;
    GTMSessionFetcher *_fetcher;
    NSMutableArray *_pendingRequests;
    unsigned long long _backgroundTaskId;
    GIPPseudonymousIDStore *_pseudonymousIDStore;
    NSMutableSet *_logDecorators;
    NSHashTable *_additionalDelegates;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *additionalDelegates; // @synthesize additionalDelegates=_additionalDelegates;
@property(retain, nonatomic) NSMutableSet *logDecorators; // @synthesize logDecorators=_logDecorators;
@property(retain, nonatomic) GIPPseudonymousIDStore *pseudonymousIDStore; // @synthesize pseudonymousIDStore=_pseudonymousIDStore;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(readonly, copy, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) GTMSessionFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(nonatomic) _Bool sendScheduled; // @synthesize sendScheduled=_sendScheduled;
@property(nonatomic) long long sendDelayMillis; // @synthesize sendDelayMillis=_sendDelayMillis;
@property(retain, nonatomic) NSMutableDictionary *logWriters; // @synthesize logWriters=_logWriters;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(copy, nonatomic) NSString *logDirectory; // @synthesize logDirectory=_logDirectory;
@property(nonatomic) _Bool disableLogging; // @synthesize disableLogging=_disableLogging;
@property(nonatomic) __weak id <GIPClearcutLoggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType accountToAuthorizerBlock; // @synthesize accountToAuthorizerBlock=_accountToAuthorizerBlock;
@property(copy) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy) NSString *installIdentifier; // @synthesize installIdentifier=_installIdentifier;
@property unsigned long long maxRequestNumBytes; // @synthesize maxRequestNumBytes=_maxRequestNumBytes;
@property(copy) NSString *applicationBuild; // @synthesize applicationBuild=_applicationBuild;
- (void).cxx_destruct;
- (void)logParseError:(id)arg1 withStatusCode:(long long)arg2;
- (void)sendNextPendingRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scheduleNextSend;
- (id)fetcherWithLogRequest:(id)arg1 authorizer:(id)arg2;
- (id)nextPendingRequest;
- (void)sendLogsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeItemAtPath:(id)arg1;
- (id)logRequestContextFromFile:(id)arg1;
- (void)updatePendingRequests;
- (void)cleanupEmptyDirectories;
- (void)flushWriters;
- (id)createClientInfo;
- (id)logRequestFromRequest:(id)arg1;
- (id)filenameWithCurrentTimeInDirectory:(id)arg1;
- (id)writerForContext:(id)arg1;
- (void)logEvent:(id)arg1 logSource:(int)arg2 account:(id)arg3;
- (long long)bootTimeMillis;
- (void)removeLogEventDecorator:(id)arg1;
- (void)addLogEventDecorator:(id)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addAdditionalDelegate:(id)arg1;
- (void)timeZoneDidChange:(id)arg1;
- (void)endBackgroundTask;
- (void)beginBackgroundTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleSignificantTimeChange:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithoutRegisteringObservers;
- (id)init;
- (id)initAndRegisterObservers:(_Bool)arg1;

@end

