//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTVideoObserverNotifierProxy.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface SPTVideoObserverNotifierProxyOnQueue : SPTVideoObserverNotifierProxy
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithObservers:(id)arg1 protocol:(id)arg2 onQueue:(id)arg3;

@end

