//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, NSURL, OS_dispatch_queue;
@protocol SPTAudioSessionController, SPTPlaybackErrorDialogs, SPTPlayer, SPTPlayerObserver, SPTPlayerQueue;

@protocol SPTPlayerFeature <SPTService>
- (id <SPTPlaybackErrorDialogs>)providePlaybackErrorDialogs;
- (id <SPTAudioSessionController>)provideAudioSessionController;
- (id <SPTPlayerQueue>)providePlayerQueue;
- (void)removePlayerObserver:(id <SPTPlayerObserver>)arg1;
- (void)addPlayerObserver:(id <SPTPlayerObserver>)arg1;
- (void)fetchPlayerState:(void (^)(SPTPlayerState *))arg1 on:(OS_dispatch_queue *)arg2;
- (id <SPTPlayer>)providePlayerWithViewURI:(NSURL *)arg1 featureIdentifier:(NSString *)arg2 referrerIdentifier:(NSString *)arg3;
- (id <SPTPlayer>)providePlayerWithViewURI:(NSURL *)arg1 featureIdentifier:(NSString *)arg2 referrerIdentifier:(NSString *)arg3 queue:(OS_dispatch_queue *)arg4;
@end

