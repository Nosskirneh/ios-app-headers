//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLAsynchronousOperation.h"

@class NSArray, NSUUID;
@protocol SDLConnectionManagerType;

@interface SDLAsynchronousRPCRequestOperation : SDLAsynchronousOperation
{
    _Bool executing;
    _Bool finished;
    _Bool _requestFailed;
    NSArray *_requests;
    id <SDLConnectionManagerType> _connectionManager;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _responseHandler;
    NSUUID *_operationId;
    unsigned long long _requestsComplete;
    unsigned long long _requestsStarted;
}

@property(nonatomic) _Bool requestFailed; // @synthesize requestFailed=_requestFailed;
@property(nonatomic) unsigned long long requestsStarted; // @synthesize requestsStarted=_requestsStarted;
@property(nonatomic) unsigned long long requestsComplete; // @synthesize requestsComplete=_requestsComplete;
@property(retain, nonatomic) NSUUID *operationId; // @synthesize operationId=_operationId;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) __weak id <SDLConnectionManagerType> connectionManager; // @synthesize connectionManager=_connectionManager;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (long long)queuePriority;
- (id)name;
- (void)finishOperation;
@property(readonly, nonatomic) float percentComplete;
- (void)sdl_abortOperationWithRequest:(id)arg1;
- (void)sdl_sendRequest:(id)arg1;
- (void)sdl_sendRequests;
- (void)start;
- (id)initWithConnectionManager:(id)arg1 request:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)initWithConnectionManager:(id)arg1 requests:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

