//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTKaraokeManager-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, SPSession, SPTDataLoader, SPTObserverManager, SPTPlayerState, SPTPlayerTrack;
@protocol SPTDataLoaderCancellationToken, SPTKaraokeTestManager, SPTPlayer;

@interface SPTKaraokeManagerImplementation : NSObject <SPTPlayerObserver, SPTDataLoaderDelegate, SPTKaraokeManager>
{
    _Bool _supported;
    _Bool _karaoke;
    id <SPTPlayer> _player;
    SPTDataLoader *_dataLoader;
    id <SPTKaraokeTestManager> _testManager;
    SPSession *_session;
    NSMutableDictionary *_tracksToURLs;
    NSURL *_errorURL;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
    SPTObserverManager *_observerManager;
    SPTPlayerState *_state;
}

@property(retain, nonatomic) SPTPlayerState *state; // @synthesize state=_state;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(readonly, nonatomic) NSURL *errorURL; // @synthesize errorURL=_errorURL;
@property(readonly, nonatomic) NSMutableDictionary *tracksToURLs; // @synthesize tracksToURLs=_tracksToURLs;
@property(readonly, nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) id <SPTKaraokeTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic, getter=isKaraoke) _Bool karaoke; // @synthesize karaoke=_karaoke;
@property(nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dealloc;
- (void)player:(id)arg1 didEncounterError:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithPlayer:(id)arg1 dataLoader:(id)arg2 testManager:(id)arg3 session:(id)arg4;
@property(readonly, nonatomic) SPTPlayerTrack *originalTrack;
@property(readonly, nonatomic) SPTPlayerTrack *karaokeTrack;
- (void)stopPlayingKaraokeTrack;
- (void)playKaraokeTrack;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

