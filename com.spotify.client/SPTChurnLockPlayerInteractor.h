//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSString;
@protocol SPTPlayer, SPTPlayerFeature;

@interface SPTChurnLockPlayerInteractor : NSObject <SPTPlayerObserver>
{
    id <SPTPlayerFeature> _playerFeature;
    id <SPTPlayer> _player;
}

@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)resumeCurrentPlayer;
- (void)pauseCurrentPlayer;
- (void)setupPlayer;
- (id)initWithPlayerFeature:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

