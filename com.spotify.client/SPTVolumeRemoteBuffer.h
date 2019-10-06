//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunLoop, NSTimer;

@interface SPTVolumeRemoteBuffer : NSObject
{
    _Bool _isUpdatingRemoteVolume;
    NSRunLoop *_runloop;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSRunLoop *runloop; // @synthesize runloop=_runloop;
@property(nonatomic) _Bool isUpdatingRemoteVolume; // @synthesize isUpdatingRemoteVolume=_isUpdatingRemoteVolume;
- (void).cxx_destruct;
- (id)createTimer;
- (void)clearTimer;
- (void)timerFired;
- (void)remoteVolumeCommandSent;
- (id)initWithRunloop:(id)arg1;

@end

