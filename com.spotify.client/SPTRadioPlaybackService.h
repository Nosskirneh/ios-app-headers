//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"
#import "SPTRadioStationsObserver-Protocol.h"

@class NSHashTable, NSString, NSURL, SPTRadioStation, SPTRadioStationsService;
@protocol SPTDailyMixTestManager, SPTPlayer, SPTRadioTestManager;

@interface SPTRadioPlaybackService : NSObject <SPTPlayerObserver, SPTRadioStationsObserver>
{
    SPTRadioStation *_currentStation;
    NSURL *_currentContextURI;
    unsigned long long _playbackState;
    id <SPTRadioTestManager> _radioTestManager;
    id <SPTDailyMixTestManager> _dailyMixTestManager;
    id <SPTPlayer> _player;
    SPTRadioStationsService *_stationService;
    NSHashTable *_delegates;
    NSString *_currentTrackFeedback;
}

@property(retain, nonatomic) NSString *currentTrackFeedback; // @synthesize currentTrackFeedback=_currentTrackFeedback;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) __weak SPTRadioStationsService *stationService; // @synthesize stationService=_stationService;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTDailyMixTestManager> dailyMixTestManager; // @synthesize dailyMixTestManager=_dailyMixTestManager;
@property(retain, nonatomic) id <SPTRadioTestManager> radioTestManager; // @synthesize radioTestManager=_radioTestManager;
@property(nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) NSURL *currentContextURI; // @synthesize currentContextURI=_currentContextURI;
@property(retain, nonatomic) SPTRadioStation *currentStation; // @synthesize currentStation=_currentStation;
- (void).cxx_destruct;
- (id)convertToGDPRSafeURIIfNeeded:(id)arg1;
- (void)removeRadioPlaybackDelegate:(id)arg1;
- (void)addRadioPlaybackDelegate:(id)arg1;
- (id)playbackDescriptionForURL:(id)arg1;
- (_Bool)isStationPlaying:(id)arg1;
- (void)updateFeedback:(long long)arg1 trackURL:(id)arg2 persistentRecord:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateStation:(id)arg1 withTracks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleFeedbackSuccessForTrackURL:(id)arg1 feedback:(long long)arg2 forStation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)feedbackForTrackURL:(id)arg1;
- (void)radioStationService:(id)arg1 loadedTracksForStation:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)broadcastChangeToTracksForStation:(id)arg1;
- (void)broadcastCurrentTrackChanged;
- (void)broadcastPlaybackError:(id)arg1;
- (void)broadcastPlaybackStateChanged:(unsigned long long)arg1;
- (void)forceRebroadcastCurrentPlaybackState;
- (id)contextForStation:(id)arg1;
- (void)pauseRadioPlayback;
- (_Bool)wouldPlaySameTrackWithoutShuffleRules:(id)arg1;
- (void)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 player:(id)arg3 createStation:(_Bool)arg4 previousTracks:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startRadioStationWithURL:(id)arg1 startedFromElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)playStation:(id)arg1 context:(id)arg2 options:(id)arg3 player:(id)arg4 retries:(long long)arg5;
- (void)startDecoratedRadioStation:(id)arg1 player:(id)arg2 startedFromElement:(id)arg3 atIndex:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)startDecoratedRadioStation:(id)arg1 startedFromElement:(id)arg2 atIndex:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)sanitizeStartIndex:(long long)arg1 forStation:(id)arg2;
- (_Bool)shouldSetSkipToForIndex:(long long)arg1 inStation:(id)arg2;
- (id)restrictionsForRadioPlayer;
- (void)updateDailyMixTestManager:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 stationsService:(id)arg2 radioTestManager:(id)arg3 dailyMixTestManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

