//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingTrackMetadataQueueObserver.h"
#import "SPTPlayerObserver.h"
#import "SPTPlayerStagedContextObserver.h"

@class NSHashTable, NSString, SPTNowPlayingAuxiliaryActionsModel, SPTNowPlayingEntityDecorationController, SPTNowPlayingPlaybackController, SPTNowPlayingQueueMetadataModel, SPTNowPlayingTrackMetadataQueue, SPTNowPlayingTrackPosition, SPTPlayerTrack, SPTStatefulPlayer;

@interface SPTNowPlayingModel : NSObject <SPTNowPlayingTrackMetadataQueueObserver, SPTPlayerObserver, SPTPlayerStagedContextObserver>
{
    id <SPTNowPlayingModelDelegate> _delegate;
    unsigned long long _currentToggleMode;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    SPTNowPlayingTrackPosition *_trackPosition;
    SPTNowPlayingPlaybackController *_playbackController;
    SPTNowPlayingAuxiliaryActionsModel *_auxiliaryActionsModel;
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
    SPTNowPlayingQueueMetadataModel *_queueMetadataModel;
    id <SPTPlayer> _player;
    NSHashTable *_observers;
    SPTStatefulPlayer *_statefulPlayer;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
}

@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) SPTStatefulPlayer *statefulPlayer; // @synthesize statefulPlayer=_statefulPlayer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTNowPlayingQueueMetadataModel *queueMetadataModel; // @synthesize queueMetadataModel=_queueMetadataModel;
@property(retain, nonatomic) SPTNowPlayingEntityDecorationController *entityDecorationController; // @synthesize entityDecorationController=_entityDecorationController;
@property(retain, nonatomic) SPTNowPlayingAuxiliaryActionsModel *auxiliaryActionsModel; // @synthesize auxiliaryActionsModel=_auxiliaryActionsModel;
@property(retain, nonatomic) SPTNowPlayingPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
@property(retain, nonatomic) SPTNowPlayingTrackPosition *trackPosition; // @synthesize trackPosition=_trackPosition;
@property(retain, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(readonly, nonatomic) unsigned long long currentToggleMode; // @synthesize currentToggleMode=_currentToggleMode;
@property(nonatomic) __weak id <SPTNowPlayingModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)player:(id)arg1 didStageContext:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)updateWithPlayerState:(id)arg1;
- (void)notifyObserversUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)preferredToggleMode;
- (void)setCurrentToggleMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)toggleModeAnimated:(_Bool)arg1;
- (void)setCurrentToggleMode:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isCurrentTrackInCollection;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) SPTPlayerTrack *displayedMetadata;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 collection:(id)arg2 collectionPlatform:(id)arg3 playlistDataLoader:(id)arg4 radioManager:(id)arg5 adsManager:(id)arg6 nowPlayingService:(id)arg7 productState:(id)arg8 queueService:(id)arg9 testManager:(id)arg10 dailyMixTestManager:(id)arg11 collectionTestManager:(id)arg12 statefulPlayer:(id)arg13 trackMetadataQueue:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
