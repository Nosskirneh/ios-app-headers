//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPTPlaybackStateTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    unsigned long long _next;
    CDUnknownBlockType _fire;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)invokeAtTheLatest:(double)arg1;
- (void)resume;
- (void)pause;
- (id)initWithBlock:(CDUnknownBlockType)arg1 interval:(double)arg2 queue:(id)arg3;

@end

