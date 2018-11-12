//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface XMPPTimer : NSObject
{
    _Bool isStarted;
    unsigned long long start;
    unsigned long long timeout;
    unsigned long long interval;
    NSObject<OS_dispatch_source> *timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)updateTimeout:(double)arg1 fromOriginalStartTime:(_Bool)arg2;
- (void)startWithTimeout:(double)arg1 interval:(double)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;

@end
