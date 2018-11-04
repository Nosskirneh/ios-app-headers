//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRAudioSessionManagerProtocol-Protocol.h"
#import "DZRMixableTrackPlaybackDelegate-Protocol.h"
#import "DZRTrackPlaybackDelegate-Protocol.h"

@class DZRAudioManager, DZRAudioSessionManager, DZRAudioTrackController, DZRDownloadableObject, DZRExternalTrackController, DZRNowPlayingCenter, DZRParametricEqualizer, DZRPlaybackAction, DZRPlaybackQueuer, DZRReachabilityFacade, NSArray, NSDictionary, NSString;
@protocol DZRExternalAudioPlayback, DZRPlayableAdContentProvider;

@interface DZRAudioPlayer : NSObject <DZRAudioSessionManagerProtocol, DZRTrackPlaybackDelegate, DZRMixableTrackPlaybackDelegate>
{
    _Bool _shouldTrimSilence;
    _Bool _remotePlaybackModeActivating;
    _Bool _remotePlaybackModeActivated;
    _Bool _userAuthenticated;
    _Bool _shouldStartPlayingWhenReady;
    unsigned long long _mode;
    DZRPlaybackQueuer *_queuer;
    DZRParametricEqualizer *_equalizer;
    long long _startingPlaybackRule;
    long long _pendingStartingPlaybackRule;
    double _crossFadeDuration;
    double _crossFadeTime;
    id <DZRPlayableAdContentProvider> _adContentProvider;
    DZRDownloadableObject *_sponsoredTrack;
    long long _currentPlayingContext;
    NSDictionary *_didChangeTrackNotificationInfos;
    DZRReachabilityFacade *_reachability;
    DZRNowPlayingCenter *_nowPlayingCenter;
    long long _state;
    DZRAudioSessionManager *_audioSessionManager;
    DZRAudioManager *_audioManager;
    NSArray *_trackControllers;
    DZRAudioTrackController *_previewTrackController;
    DZRAudioTrackController *_interstitialTrackController;
    DZRExternalTrackController *_streamingTrackController;
    DZRPlaybackAction *_currentPlaybackAction;
    id <DZRExternalAudioPlayback> _externalPlayer;
    unsigned long long _previousControllerIndex;
    unsigned long long _currentControllerIndex;
    unsigned long long _nextControllerIndex;
    CDUnknownBlockType _queueingBlock;
}

+ (double)minimumElapsedTimeToSkipToPrevious;
+ (id)sharedPlayer;
+ (id)externalCollectionWithTracks:(id)arg1;
+ (id)temporaryCollectionWithOrderedTracks:(id)arg1 shuffledTracks:(id)arg2 referenceCollection:(id)arg3;
+ (id)temporaryCollectionWithOrderedTracks:(id)arg1 shuffledTracks:(id)arg2 synchronizer:(id)arg3;
+ (id)temporaryCollectionWithTracks:(id)arg1 synchronizer:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType queueingBlock; // @synthesize queueingBlock=_queueingBlock;
@property(nonatomic) unsigned long long nextControllerIndex; // @synthesize nextControllerIndex=_nextControllerIndex;
@property(nonatomic) unsigned long long currentControllerIndex; // @synthesize currentControllerIndex=_currentControllerIndex;
@property(nonatomic) unsigned long long previousControllerIndex; // @synthesize previousControllerIndex=_previousControllerIndex;
@property(retain, nonatomic) id <DZRExternalAudioPlayback> externalPlayer; // @synthesize externalPlayer=_externalPlayer;
@property(retain, nonatomic) DZRPlaybackAction *currentPlaybackAction; // @synthesize currentPlaybackAction=_currentPlaybackAction;
@property(retain, nonatomic) DZRExternalTrackController *streamingTrackController; // @synthesize streamingTrackController=_streamingTrackController;
@property(retain, nonatomic) DZRAudioTrackController *interstitialTrackController; // @synthesize interstitialTrackController=_interstitialTrackController;
@property(retain, nonatomic) DZRAudioTrackController *previewTrackController; // @synthesize previewTrackController=_previewTrackController;
@property(retain, nonatomic) NSArray *trackControllers; // @synthesize trackControllers=_trackControllers;
@property(retain, nonatomic) DZRAudioManager *audioManager; // @synthesize audioManager=_audioManager;
@property(retain, nonatomic) DZRAudioSessionManager *audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool shouldStartPlayingWhenReady; // @synthesize shouldStartPlayingWhenReady=_shouldStartPlayingWhenReady;
@property(retain, nonatomic) DZRNowPlayingCenter *nowPlayingCenter; // @synthesize nowPlayingCenter=_nowPlayingCenter;
@property(retain, nonatomic) DZRReachabilityFacade *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) _Bool userAuthenticated; // @synthesize userAuthenticated=_userAuthenticated;
@property(retain, nonatomic) NSDictionary *didChangeTrackNotificationInfos; // @synthesize didChangeTrackNotificationInfos=_didChangeTrackNotificationInfos;
@property(nonatomic) long long currentPlayingContext; // @synthesize currentPlayingContext=_currentPlayingContext;
@property(nonatomic, getter=isRemotePlaybackModeActivated) _Bool remotePlaybackModeActivated; // @synthesize remotePlaybackModeActivated=_remotePlaybackModeActivated;
@property(nonatomic, getter=isRemotePlaybackModeActivating) _Bool remotePlaybackModeActivating; // @synthesize remotePlaybackModeActivating=_remotePlaybackModeActivating;
@property(retain, nonatomic) DZRDownloadableObject *sponsoredTrack; // @synthesize sponsoredTrack=_sponsoredTrack;
@property(retain, nonatomic) id <DZRPlayableAdContentProvider> adContentProvider; // @synthesize adContentProvider=_adContentProvider;
@property(nonatomic) double crossFadeTime; // @synthesize crossFadeTime=_crossFadeTime;
@property(nonatomic) double crossFadeDuration; // @synthesize crossFadeDuration=_crossFadeDuration;
@property(nonatomic) _Bool shouldTrimSilence; // @synthesize shouldTrimSilence=_shouldTrimSilence;
@property(nonatomic) long long pendingStartingPlaybackRule; // @synthesize pendingStartingPlaybackRule=_pendingStartingPlaybackRule;
@property(nonatomic) long long startingPlaybackRule; // @synthesize startingPlaybackRule=_startingPlaybackRule;
@property(retain, nonatomic) DZRParametricEqualizer *equalizer; // @synthesize equalizer=_equalizer;
@property(retain, nonatomic) DZRPlaybackQueuer *queuer; // @synthesize queuer=_queuer;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (_Bool)canDownload;
- (_Bool)canStream;
- (void)userDidLogout;
- (void)userDidLogIn;
- (void)sessionDidInitialize;
@property(readonly, nonatomic) _Bool isPlayingRemotely;
- (void)updateStartingPlaybackRuleAfterUserPlayAction;
- (void)updateStartingPlaybackRuleAfterUserAction;
- (void)mixablePlaybackWillStartPlaybackRelease:(id)arg1 withDuration:(double)arg2;
- (void)mixablePlaybackDidFinishPlaybackAttack:(id)arg1;
- (void)trackPlaybackDidSeek:(id)arg1 atTime:(double)arg2;
- (void)trackPlaybackDidAdjustTotalDuration:(id)arg1 toDuration:(double)arg2;
- (void)trackPlaybackDidProgress:(id)arg1 toElapsedTime:(double)arg2;
- (void)trackPlaybackDidFail:(id)arg1 withError:(id)arg2;
- (void)trackPlaybackDidFinishPlaying:(id)arg1;
- (void)trackPlaybackDidStartPlaying:(id)arg1;
- (void)trackPlaybackWillStartPlaying:(id)arg1;
- (_Bool)canTrackPlaybackStartPlaying:(id)arg1;
- (void)trackPlaybackDidPause:(id)arg1 requiredByPlayback:(_Bool)arg2;
- (void)trackPlaybackCanPlayToTheEnd:(id)arg1;
- (void)trackPlaybackIsReadyToResumeAfterBuffering:(id)arg1;
- (void)trackPlaybackIsReadyToStartPlaying:(id)arg1;
- (void)trackPlaybackWillOpen:(id)arg1;
- (void)notifyPlayerDidChangeTrack;
- (void)notifyPlayerDidStopWithLastTrack:(id)arg1 endingPosition:(double)arg2;
- (void)tracksQueueDidChange:(id)arg1;
- (void)queuedCollectionDidChange:(id)arg1;
- (_Bool)selectTrackAtIndex:(unsigned long long)arg1;
- (_Bool)jumpToTrackAtIndex:(unsigned long long)arg1;
- (_Bool)playTrackAtIndex:(unsigned long long)arg1;
- (_Bool)playTrackInCurrentTrackList:(id)arg1;
- (_Bool)startCurrentTrackList;
- (void)forcePauseRequiredByPlayback;
- (_Bool)_skipToPreviousTrackForcing:(_Bool)arg1;
- (_Bool)skipToPreviousTrack;
- (_Bool)playNextTrackWithChange:(id)arg1;
- (_Bool)nextTrackAllowsAds;
- (_Bool)skipToNextTrack;
- (void)addSponsoredTrackToQueue:(id)arg1;
- (void)playInterstitialTrack;
- (_Bool)interstitialTrackControllerIsReadyToPlay;
- (void)clearPlayback;
- (void)stopTrackControllers;
- (void)preparePreviousTrackControllerWithSelection:(id)arg1;
- (void)prepareCurrentTrackControllerToStartAtTimePosition:(double)arg1 reason:(long long)arg2;
- (void)prepareNextTrackControllerWithSelection:(id)arg1;
- (void)prepareNextTrackControllerIfNeeded;
- (void)startPlaybackWithCurrentController;
- (void)applyPlaybackReleaseToMixable:(id)arg1 withDuration:(double)arg2;
- (void)updateCurrentFlags;
- (void)rotateBackwardTrackIndexes;
- (void)rotateTrackIndexes;
- (_Bool)shouldSkipWhenContentNotAvailableInOffline;
- (_Bool)shouldPlayInOfflineMode;
- (id)currentTrackChannel;
- (id)channelForController:(id)arg1;
- (id)nextMixableController;
- (id)currentMixableController;
- (id)previousMixableController;
- (id)mixableControllerFromController:(id)arg1;
- (id)activeTrackController;
- (id)nextTrackController;
- (id)currentTrackController;
- (id)previousTrackController;
- (id)activeTrackControllers;
- (_Bool)isReady;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (_Bool)isUsingAVAudioEngine;
- (void)prefersAVAudioEngineDidChange:(id)arg1;
- (void)tearDownLocalPlayback;
- (void)prepareLocalPlayback;
- (void)dealloc;
- (id)init;
- (void)clearStreamingCache:(CDUnknownBlockType)arg1;
- (void)streamingCacheStorageDetails:(CDUnknownBlockType)arg1;
- (void)updateStreamingCacheMaximumSize:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)setShouldPreventFromTogglingAudioSessionActivation:(_Bool)arg1;
- (_Bool)stopSharedAudioSession;
- (_Bool)resumeSharedAudioSession;
- (long long)currentAudioRoute;
- (void)removeTogglingConditionForAudioInterruptionsWithKey:(id)arg1;
- (void)addTogglingConditionForAudioInterruptionsWithKey:(id)arg1 condition:(CDUnknownBlockType)arg2;
- (void)removeTogglingConditionForAudioRouteChangesWithKey:(id)arg1;
- (void)addTogglingConditionForAudioRouteChangesWithKey:(id)arg1 condition:(CDUnknownBlockType)arg2;
- (void)deactivateDummyPlayback;
- (void)activateDummyPlayback;
- (_Bool)isDummyPlaybackAllowed;
- (id)remotePlaybackContextName;
- (_Bool)endExternalModeByIgnoringExternalPlayback;
- (_Bool)endExternalModeByResumingFromExternalPlayback;
- (_Bool)beginExternalModeByOverridingLocalPlaybackWithExternalPlayback:(id)arg1;
- (_Bool)beginExternalModeByTransferingLocalPlaybackToExternalPlayback:(id)arg1;
- (void)insertSponsoredTrack:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)overrideQueueListWithPlayables:(id)arg1 shuffledTracksIDs:(id)arg2 currentTrackIndex:(unsigned long long)arg3;
- (void)removeTrackAtIndex:(unsigned long long)arg1;
- (void)moveTrackFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)enqueueTracksNext:(id)arg1 fromCollection:(id)arg2;
- (_Bool)enqueueTracks:(id)arg1 fromCollection:(id)arg2;
- (_Bool)canEditQueueList;
- (void)stopInterstitialAndResumeCollectionPlaying;
- (void)prepareInterstitialControllerWithTrack:(id)arg1;
- (id)playPreviewWithTrack:(id)arg1;
- (id)temporaryCollectionWithTracks:(id)arg1;
- (_Bool)shuffleModeForCollection:(id)arg1 givenRequestedShuffleMode:(_Bool)arg2;
- (_Bool)playCollection:(id)arg1 startingAtIndex:(unsigned long long)arg2 atTime:(unsigned long long)arg3 byShufflingTracks:(_Bool)arg4;
- (_Bool)playCollection:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (_Bool)playCollection:(id)arg1;
- (_Bool)getSavedShuffleMode;
- (void)saveShuffleMode;
- (_Bool)shuffleTracksByIDs:(id)arg1;
- (_Bool)toggleShuffleMode;
- (_Bool)isInShuffleMode;
- (_Bool)setShuffle:(_Bool)arg1;
- (_Bool)isPlayingInterstitialTrack;
- (_Bool)isPlayingCollection:(id)arg1;
- (_Bool)isPlayingTrack:(id)arg1;
- (unsigned long long)currentTrackAbsoluteIndex;
- (unsigned long long)currentTrackIndex;
- (long long)currentTrackQuality;
- (id)currentTrack;
- (unsigned long long)estimatedDurationInFullSeconds;
- (id)orderedTracks;
- (_Bool)hasQueuedTracks;
- (id)queuedTracks;
- (long long)getSavedRepeatMode;
- (void)saveRepeatMode:(long long)arg1;
- (void)saveRepeatMode;
- (long long)toggleRepeatMode;
- (void)setRepeatMode:(long long)arg1;
- (long long)repeatMode;
- (_Bool)isInRepeatMode;
- (_Bool)hasAQueuedCollection;
- (id)queuedCollection;
- (_Bool)canBecomeActive;
- (_Bool)isStoppedAfterFailing;
- (void)setInBlindTestMode:(_Bool)arg1;
- (_Bool)isInBlindTestMode;
- (_Bool)notificationWasSentByInterstitialTrackController:(id)arg1;
- (_Bool)notificationWasSentByCurrentTrackController:(id)arg1;
- (id)queuedCollectionDisplayType;
- (id)queuedCollectionDisplayTitle;
- (id)queuedCollectionTitle;
- (id)currentTrackTitle;
- (id)currentTrackArtistName;
- (_Bool)repeatIsAllowed;
- (_Bool)shuffleIsAllowed;
- (_Bool)skipNextIsAllowed;
- (_Bool)hasNextTrack;
- (_Bool)skipPreviousIsAllowed;
- (_Bool)hasPreviousTrack;
- (_Bool)seekIsAllowed;
- (float)currentTrackBufferingProgress;
- (float)bufferingProgressForTrackController:(id)arg1;
- (_Bool)currentTrackIsStalledBuffering;
- (_Bool)currentTrackIsBuffering;
- (double)playbackElaspedTime;
- (double)playbackDuration;
- (float)playbackProgress;
- (float)playbackProgressForTrackController:(id)arg1;
- (_Bool)isPlaying;
- (void)stopSeekingForward;
- (void)startSeekingForward;
- (void)stopSeekingBackward;
- (void)startSeekingBackward;
- (void)seekByTimeOffset:(double)arg1;
- (void)seekToProgress:(float)arg1;
- (void)stopPlayingPreview;
- (void)togglePlayPause;
- (void)stop;
- (void)pause;
- (void)play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

