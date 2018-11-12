//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSString, NSURL, SPTObserverManager, SPTPlayOrigin;
@protocol SPTPlayer;

@interface SPTAdContextManager : NSObject <SPTPlayerObserver>
{
    NSURL *_navigationContextURL;
    SPTPlayOrigin *_playOrigin;
    id <SPTPlayer> _player;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(retain, nonatomic) NSURL *navigationContextURL; // @synthesize navigationContextURL=_navigationContextURL;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)endNavigationContext:(id)arg1;
- (void)beginNavigationContext:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

