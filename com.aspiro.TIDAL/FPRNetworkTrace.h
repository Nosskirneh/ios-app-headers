//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRPerformanceAttributable-Protocol.h"
#import "FPRNetworkResponseHandler-Protocol.h"

@class FPRTraceBackgroundActivityTracker, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURLRequest;
@protocol OS_dispatch_queue;

@interface FPRNetworkTrace : NSObject <FPRNetworkResponseHandler, FIRPerformanceAttributable>
{
    NSMutableDictionary *_states;
    _Bool _hasValidResponseCode;
    _Bool _traceStarted;
    _Bool _traceCompleted;
    int _responseCode;
    long long _requestSize;
    long long _responseSize;
    NSString *_responseContentType;
    NSURLRequest *_URLRequest;
    NSString *_trimmedURLString;
    NSError *_responseError;
    NSObject<OS_dispatch_queue> *_sessionIdSerialQueue;
    FPRTraceBackgroundActivityTracker *_backgroundActivityTracker;
    NSMutableDictionary *_customAttributes;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableSet *_activeSessions;
}

+ (void)removeNetworkTraceFromObject:(id)arg1;
+ (id)networkTraceFromObject:(id)arg1;
+ (void)addNetworkTrace:(id)arg1 toObject:(id)arg2;
+ (_Bool)isCompleteAndValidTrimmedURLString:(id)arg1 URLRequest:(id)arg2;
+ (id)stringByTrimmingURLString:(id)arg1;
@property(retain, nonatomic) NSMutableSet *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableDictionary *customAttributes; // @synthesize customAttributes=_customAttributes;
@property(retain, nonatomic) FPRTraceBackgroundActivityTracker *backgroundActivityTracker; // @synthesize backgroundActivityTracker=_backgroundActivityTracker;
@property(nonatomic) _Bool traceCompleted; // @synthesize traceCompleted=_traceCompleted;
@property(nonatomic) _Bool traceStarted; // @synthesize traceStarted=_traceStarted;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionIdSerialQueue; // @synthesize sessionIdSerialQueue=_sessionIdSerialQueue;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(readonly, nonatomic) NSString *trimmedURLString; // @synthesize trimmedURLString=_trimmedURLString;
@property(retain, nonatomic) NSURLRequest *URLRequest; // @synthesize URLRequest=_URLRequest;
@property(copy, nonatomic) NSString *responseContentType; // @synthesize responseContentType=_responseContentType;
@property(nonatomic) _Bool hasValidResponseCode; // @synthesize hasValidResponseCode=_hasValidResponseCode;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) long long requestSize; // @synthesize requestSize=_requestSize;
- (void).cxx_destruct;
- (void)removeAttribute:(id)arg1;
- (id)valueForAttribute:(id)arg1;
- (void)setValue:(id)arg1 forAttribute:(id)arg2;
@property(readonly, nonatomic) NSDictionary *attributes;
- (double)timeIntervalBetweenCheckpointState:(long long)arg1 andState:(long long)arg2;
- (void)didReceiveFileURL:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didUploadFileWithURL:(id)arg1;
- (void)didCompleteRequestWithResponse:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) double startTimeSinceEpoch;
@property(readonly, nonatomic) long long backgroundTraceState;
- (void)start;
- (void)checkpointState:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *checkpointStates;
@property(readonly) NSSet *sessions;
- (void)updateTraceWithCurrentSession;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithURLRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

