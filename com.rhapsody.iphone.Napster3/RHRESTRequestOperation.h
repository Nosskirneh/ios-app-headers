//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "ZDSResolutionSource-Protocol.h"

@class NSString, NSURLRequest, NSURLSession, NSURLSessionDataTask, RHRESTRequest, ZDSDeferred;

@interface RHRESTRequestOperation : NSOperation <NSURLSessionDelegate, ZDSResolutionSource, NSURLConnectionDelegate>
{
    _Bool _isExecutingOperation;
    _Bool _isOperationFinished;
    int _returnType;
    RHRESTRequest *_request;
    NSURLRequest *_urlRequest;
    ZDSDeferred *_deferred;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
}

+ (id)errorForUrlResponse:(id)arg1 andRestRequest:(id)arg2;
@property(nonatomic) _Bool isOperationFinished; // @synthesize isOperationFinished=_isOperationFinished;
@property(nonatomic) _Bool isExecutingOperation; // @synthesize isExecutingOperation=_isExecutingOperation;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) ZDSDeferred *deferred; // @synthesize deferred=_deferred;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(nonatomic) int returnType; // @synthesize returnType=_returnType;
@property(retain, nonatomic) RHRESTRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (id)deferredPayloadOnQueue:(id)arg1;
- (void)processUnpackedPayload:(id)arg1;
- (id)buildRequest;
- (id)buildCredentials;
- (id)queryString;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resolvable:(id)arg1 didCancelWithValue:(id)arg2;
- (void)finish;
- (void)deliverCancellation;
- (_Bool)shouldRejectForStatusCode:(long long)arg1;
- (void)didReceiveData:(id)arg1 response:(id)arg2;
- (void)performOperation;
- (void)main;
- (void)start;
- (id)initWithRequest:(id)arg1;
- (id)initWithNSURLRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

