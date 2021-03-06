//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FCDRPC;
@protocol NSCopying><NSObject, OS_dispatch_queue;

@interface FCDRPCRequest : NSObject <NSCopying>
{
    id _service;
    FCDRPC *_rpc;
    id <NSCopying><NSObject> _requestMessage;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _callbackBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) id <NSCopying><NSObject> requestMessage; // @synthesize requestMessage=_requestMessage;
@property(readonly, nonatomic) FCDRPC *rpc; // @synthesize rpc=_rpc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRPC:(id)arg1 requestMessage:(id)arg2 callbackQueue:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;

@end

