//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface GADNScheduler : NSObject
{
    NSMutableArray *_tasks;
    NSTimer *_timer;
    double _interval;
}

@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)executeBlocks;
- (void)scheduleOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithInterval:(double)arg1;
- (id)init;

@end

