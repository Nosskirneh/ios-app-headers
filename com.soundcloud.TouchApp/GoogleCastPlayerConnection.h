//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKRemoteMediaClientListener-Protocol.h"
#import "GCKRequestDelegate-Protocol.h"

@class GCKRemoteMediaClient, GoogleCastPlayerStateMapper, GoogleCastSDKProvider, NSString, NSTimer, PlaybackTimerFactory;
@protocol GoogleCastPlayerConnectionDelegate;

@interface GoogleCastPlayerConnection : NSObject <GCKRequestDelegate, GCKRemoteMediaClientListener>
{
    id <GoogleCastPlayerConnectionDelegate> _delegate;
    GoogleCastSDKProvider *_sdkProvider;
    GoogleCastPlayerStateMapper *_playerStateMapper;
    PlaybackTimerFactory *_playbackTimerFactory;
    double _lastLoggedStreamPosition;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double lastLoggedStreamPosition; // @synthesize lastLoggedStreamPosition=_lastLoggedStreamPosition;
@property(readonly, nonatomic) PlaybackTimerFactory *playbackTimerFactory; // @synthesize playbackTimerFactory=_playbackTimerFactory;
@property(readonly, nonatomic) GoogleCastPlayerStateMapper *playerStateMapper; // @synthesize playerStateMapper=_playerStateMapper;
@property(readonly, nonatomic) GoogleCastSDKProvider *sdkProvider; // @synthesize sdkProvider=_sdkProvider;
@property(nonatomic) __weak id <GoogleCastPlayerConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) GCKRemoteMediaClient *currentRemoteMediaClient;
- (void)updateProgress;
- (void)updateTimerWithPlayState:(unsigned long long)arg1;
- (void)remoteMediaClient:(id)arg1 didUpdateMediaStatus:(id)arg2;
- (void)setVolume:(float)arg1;
- (double)progressDuration;
- (unsigned long long)currentPlayState;
- (void)seekToTime:(double)arg1;
- (void)pause;
- (void)play;
- (void)setup;
- (id)initWithSDKProvider:(id)arg1 playerStateMapper:(id)arg2 playbackTimerFactory:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
