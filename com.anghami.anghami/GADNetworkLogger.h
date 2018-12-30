//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GADNetworkLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_logQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)logNetworkError:(id)arg1 timestamp:(id)arg2 components:(id)arg3;
- (void)logResponseBody:(id)arg1 withContent:(_Bool)arg2 timestamp:(id)arg3 components:(id)arg4;
- (void)logResponseHeader:(id)arg1 timestamp:(id)arg2 components:(id)arg3;
- (void)logRequest:(id)arg1 timestamp:(id)arg2 components:(id)arg3 requestOnly:(_Bool)arg4;
- (void)logEvent:(id)arg1 timestamp:(id)arg2 components:(id)arg3 userInfo:(id)arg4;
- (void)logMessage:(id)arg1;
@property(readonly, getter=isEnabled) _Bool enabled;
- (id)init;

@end

