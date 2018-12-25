//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GWARPCConfiguration, GWAServiceConfiguration;

@interface GWAService : NSObject
{
    GWAServiceConfiguration *_serviceConfig;
    GWARPCConfiguration *_rpcConfig;
}

- (void).cxx_destruct;
- (void)callRPCEndpoint:(id)arg1 withRequest:(id)arg2 customHeaders:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)downloadDocumentWithURL:(id)arg1 requestMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)submitWithRequest:(id)arg1 customHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)refreshWithRequest:(id)arg1 customHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)initializeWithRequest:(id)arg1 customHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithConfiguration:(id)arg1;

@end

