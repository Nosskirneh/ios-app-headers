//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaVolumeControllerObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTWatchPlatformPublisher-Protocol.h"

@class NSString;
@protocol SPTGaiaVolumeControllerInterface, SPTPlayer, SPTWatchConnectivityPubSubMessageQueue;

@interface SPTWatchPlatformPlayerStatePublisher : NSObject <SPTPlayerObserver, SPTGaiaVolumeControllerObserver, SPTWatchPlatformPublisher>
{
    id <SPTWatchConnectivityPubSubMessageQueue> _pubSubMessageQueue;
    id <SPTPlayer> _player;
    id <SPTGaiaVolumeControllerInterface> _volumeController;
}

@property(readonly, nonatomic) id <SPTGaiaVolumeControllerInterface> volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) __weak id <SPTWatchConnectivityPubSubMessageQueue> pubSubMessageQueue; // @synthesize pubSubMessageQueue=_pubSubMessageQueue;
- (void).cxx_destruct;
- (void)volumeController:(id)arg1 didChangeVolume:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)handlePublisherEvent:(long long)arg1;
- (void)publishPlayerStateDictionary:(id)arg1 volume:(id)arg2;
- (void)publishPlayerState:(id)arg1 volume:(id)arg2;
- (void)publishPlayerState;
- (id)initWithPubSubMessageQueue:(id)arg1 player:(id)arg2 volumeController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

