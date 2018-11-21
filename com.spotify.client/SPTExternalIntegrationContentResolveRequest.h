//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSURL;
@protocol SPTExternalIntegrationContentProvider, SPTExternalIntegrationContentRequestOptions, SPTReachabilityMonitor;

@interface SPTExternalIntegrationContentResolveRequest : NSObject
{
    id <SPTExternalIntegrationContentProvider> _contentProvider;
    NSURL *_URI;
    id <SPTExternalIntegrationContentRequestOptions> _requestOptions;
    unsigned long long _retryCount;
    double _retryTimeout;
    id <SPTReachabilityMonitor> _reachabilityMonitor;
    NSHashTable *_contentCallbacks;
    NSHashTable *_childContentCallbacks;
    double _requestStartTime;
}

@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) NSHashTable *childContentCallbacks; // @synthesize childContentCallbacks=_childContentCallbacks;
@property(retain, nonatomic) NSHashTable *contentCallbacks; // @synthesize contentCallbacks=_contentCallbacks;
@property(readonly, nonatomic) id <SPTReachabilityMonitor> reachabilityMonitor; // @synthesize reachabilityMonitor=_reachabilityMonitor;
@property(readonly, nonatomic) double retryTimeout; // @synthesize retryTimeout=_retryTimeout;
@property(readonly, nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) id <SPTExternalIntegrationContentRequestOptions> requestOptions; // @synthesize requestOptions=_requestOptions;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) id <SPTExternalIntegrationContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
- (void).cxx_destruct;
- (void)executeChildContentCallbacksWithContent:(id)arg1 error:(id)arg2;
- (void)executeChildContentRequestWithRetryCount:(unsigned long long)arg1;
- (void)resolveChildContentOfParentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)executeContentCallbacksWithContent:(id)arg1 error:(id)arg2;
- (void)executeContentRequestWithRetryCount:(unsigned long long)arg1;
- (void)resolveContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)delayForRetryWithCount:(unsigned long long)arg1;
- (_Bool)shouldRetryForError:(id)arg1 withRetryCount:(unsigned long long)arg2;
- (id)initWithContentProvider:(id)arg1 URI:(id)arg2 options:(id)arg3 retryCount:(unsigned long long)arg4 retryTimeout:(double)arg5 reachabilityMonitor:(id)arg6;

@end

