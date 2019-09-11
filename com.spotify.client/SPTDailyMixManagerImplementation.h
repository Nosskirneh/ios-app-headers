//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDailyMixManager-Protocol.h"
#import "SPTDailyMixPlayerProxy-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTRadioPlaybackObserver-Protocol.h"

@class NSHashTable, NSString, SPTDailyMixLoggingService, SPTDataLoader, SPTPlayerState, SPTRadioPlaybackService;
@protocol SPTAbbaFeatureFlags, SPTCollectionPlatform, SPTCollectionPlatformTestManager, SPTOfflineModeState, SPTPlayer, SPTPlayerFeature;

@interface SPTDailyMixManagerImplementation : NSObject <SPTDataLoaderDelegate, SPTOfflineModeStateObserver, SPTPlayerObserver, SPTRadioPlaybackObserver, SPTDailyMixManager, SPTDailyMixPlayerProxy>
{
    _Bool _offline;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    SPTPlayerState *_playerState;
    id <SPTCollectionPlatform> _collectionPlatform;
    SPTDailyMixLoggingService *_loggingService;
    id <SPTAbbaFeatureFlags> _featureFlags;
    NSHashTable *_observers;
    NSHashTable *_playerProxyObservers;
    SPTDataLoader *_dataLoader;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTPlayer> _player;
    SPTRadioPlaybackService *_playbackService;
    id <SPTOfflineModeState> _offlineModeState;
}

+ (id)stationTrackJsonListData:(id)arg1;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(retain) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSHashTable *playerProxyObservers; // @synthesize playerProxyObservers=_playerProxyObservers;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) SPTDailyMixLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
- (void).cxx_destruct;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned long long)arg2;
- (void)executeMainThreadBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isFinite) _Bool finite;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
@property(readonly, nonatomic) _Bool shouldPreviousTrackCommandBeEnabled;
- (void)addPlayerProxyObserver:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)postOfflineErrorForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3 fromFeedback:(long long)arg4 toFeedback:(long long)arg5;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)requestForURL:(id)arg1;
- (id)undoRequestForURL:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyWillSubmitUndoNegativeArtistObserversTrack:(id)arg1 contextURL:(id)arg2;
- (void)notifyWillSubmitUndoNegativeSongObserversTrack:(id)arg1 contextURL:(id)arg2;
- (void)notifyWillSubmitUndoPositiveSongObserversTrack:(id)arg1 contextURL:(id)arg2;
- (void)notifyObserversOfNegativeArtistFeedback:(id)arg1 contextURL:(id)arg2;
- (void)notifyObserversOfNegativeTrackFeedback:(id)arg1 contextURL:(id)arg2;
- (void)notifyObserversTrack:(id)arg1 contextURL:(id)arg2 didAddTrackToCollection:(_Bool)arg3;
- (void)notifyObserversTrack:(id)arg1 contextURL:(id)arg2 originalFeedback:(long long)arg3 didChangeTo:(long long)arg4 error:(id)arg5;
- (void)undoPositiveSongFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)undoNegativeSongFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)undoNegativeArtistFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)negativeArtistFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)negativeSongFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleFeedbackResponse:(id)arg1;
- (void)positiveSongFeedbackForTrack:(id)arg1 contextURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)feedbackForTrackURL:(id)arg1;
- (void)updateFeedback:(long long)arg1 trackURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setUpNewDailyMixPlayerForURL:(id)arg1;
- (void)startDecoratedDailyMixWithURL:(id)arg1 startedFromElement:(id)arg2 atIndex:(unsigned long long)arg3 referrerIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)startDailyMixWithURL:(id)arg1 startedFromElement:(id)arg2 referrerIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithAbba:(id)arg1 dataLoader:(id)arg2 radioPlaybackService:(id)arg3 playerFeature:(id)arg4 collectionPlatform:(id)arg5 loggingService:(id)arg6 collectionTestManager:(id)arg7 offlineModeState:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

