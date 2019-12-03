//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunLoop, NSTimer;
@protocol SPTVolumeBufferDelegate;

@interface SPTVolumeBuffer : NSObject
{
    _Bool _isBuffering;
    id <SPTVolumeBufferDelegate> _delegate;
    double _bufferInterval;
    NSRunLoop *_runloop;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSRunLoop *runloop; // @synthesize runloop=_runloop;
@property(readonly, nonatomic) double bufferInterval; // @synthesize bufferInterval=_bufferInterval;
@property(nonatomic) __weak id <SPTVolumeBufferDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
- (void).cxx_destruct;
- (id)createTimer;
- (void)clearTimer;
- (void)timerFired;
- (void)triggerBuffering;
- (id)initWithInterval:(double)arg1 runloop:(id)arg2;

@end

