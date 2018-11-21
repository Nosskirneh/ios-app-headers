//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@protocol EXP_SPTHubInteractionLogger, SPTPlayer;

@interface SPTFreeTierEntityPlaybackToggleCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    id <SPTPlayer> _player;
    id <EXP_SPTHubInteractionLogger> _logger;
}

@property(readonly, nonatomic) id <EXP_SPTHubInteractionLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)createPlayOptionsFromCommand:(id)arg1;
- (id)createPlayerContextFromCommand:(id)arg1;
- (void)initiatePlaybackForCommand:(id)arg1 event:(id)arg2;
- (void)pausePlaybackForCommand:(id)arg1 event:(id)arg2;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithPlayer:(id)arg1 logger:(id)arg2;

@end

