//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTHeartsEvent.h"

@class SPTPlayerState;

@interface SPTHeartsEventPlayerStateChanged : SPTHeartsEvent
{
    id <SPTPlayer> _player;
    SPTPlayerState *_prevPlayerState;
    SPTPlayerState *_nextPlayerState;
}

@property(retain, nonatomic) SPTPlayerState *nextPlayerState; // @synthesize nextPlayerState=_nextPlayerState;
@property(retain, nonatomic) SPTPlayerState *prevPlayerState; // @synthesize prevPlayerState=_prevPlayerState;
@property(nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1 prevPlayerState:(id)arg2 nextPlayerState:(id)arg3;

@end

