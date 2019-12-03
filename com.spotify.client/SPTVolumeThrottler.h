//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunLoop, NSTimer;
@protocol SPTVolumeThrottlerDelegate;

@interface SPTVolumeThrottler : NSObject
{
    _Bool _shouldPerformActionAfterTimer;
    id <SPTVolumeThrottlerDelegate> _delegate;
    double _throttleInterval;
    NSRunLoop *_runloop;
    NSTimer *_timer;
}

@property(nonatomic) _Bool shouldPerformActionAfterTimer; // @synthesize shouldPerformActionAfterTimer=_shouldPerformActionAfterTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSRunLoop *runloop; // @synthesize runloop=_runloop;
@property(readonly, nonatomic) double throttleInterval; // @synthesize throttleInterval=_throttleInterval;
@property(nonatomic) __weak id <SPTVolumeThrottlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createTimer;
- (void)scheduleTimer;
- (void)timerFired;
- (void)performAction;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 runloop:(id)arg2;

@end

