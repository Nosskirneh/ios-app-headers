//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCDInterceptorStage, FCDRPCContext, FCDRPCRequest, FCDRPCResponse, NSObject;
@protocol OS_dispatch_queue;

@protocol FCDInterceptor <NSObject>
+ (FCDInterceptorStage *)stage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *interceptorQueue;

@optional
- (void)rpcRequestDidFinish:(FCDRPCRequest *)arg1 requestContext:(FCDRPCContext *)arg2 response:(FCDRPCResponse *)arg3;
- (void)rpcRequestWillStart:(FCDRPCRequest *)arg1 context:(FCDRPCContext *)arg2 completionBlock:(void (^)(FCDInterceptorResult *))arg3;
@end

