//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSString;
@protocol NSURLSessionDelegate;

@interface URLSessionTaskDelegateProxy : NSProxy <NSURLSessionTaskDelegate>
{
    id <NSURLSessionDelegate> _delegate;
    _Bool _respondsToDidFinishCollectingMetrics;
}

- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

