//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeUIPromoV2Player-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, NSURL, SPTPlayerState;
@protocol SPTPlayer;

@interface SPTHomeUIPromoV2PlayerImplementation : NSObject <SPTPlayerObserver, SPTHomeUIPromoV2Player>
{
    id <SPTPlayer> _player;
    SPTPlayerState *_lastUpdatedPlayerState;
    NSURL *_currentPlayingTrackURI;
    CDUnknownBlockType _playerStateDidUpdateBlock;
}

@property(copy, nonatomic) CDUnknownBlockType playerStateDidUpdateBlock; // @synthesize playerStateDidUpdateBlock=_playerStateDidUpdateBlock;
@property(copy, nonatomic) NSURL *currentPlayingTrackURI; // @synthesize currentPlayingTrackURI=_currentPlayingTrackURI;
@property(retain, nonatomic) SPTPlayerState *lastUpdatedPlayerState; // @synthesize lastUpdatedPlayerState=_lastUpdatedPlayerState;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (id)obtainPlayerDataWithKey:(id)arg1 fromCommand:(id)arg2;
- (id)obtainPlayOptionsFromCommand:(id)arg1;
- (id)obtainPlayerContextFromCommand:(id)arg1;
- (void)didEndPlaying;
- (_Bool)isPlaying;
- (void)resume;
- (void)pause;
- (void)playContext:(id)arg1 withOptions:(id)arg2 stateDidUpdate:(CDUnknownBlockType)arg3;
- (unsigned long long)togglePlayingInModel:(id)arg1 playerStateDidUpdate:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

