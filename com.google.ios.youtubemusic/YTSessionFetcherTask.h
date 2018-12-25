//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTFetcherTask-Protocol.h"

@class GTMSessionFetcher, NSString, YTFetcherTaskConfiguration;
@protocol OS_dispatch_queue;

@interface YTSessionFetcherTask : NSObject <YTFetcherTask>
{
    GTMSessionFetcher *_fetcher;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    YTFetcherTaskConfiguration *_configuration;
}

- (void).cxx_destruct;
- (void)attachResponseReceivedDelegate;
- (void)applyRetryConfiguration;
- (void)resume;
- (id)initWithFetcher:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 queue:(id)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
