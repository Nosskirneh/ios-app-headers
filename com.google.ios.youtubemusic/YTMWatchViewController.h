//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMultiSizeViewController.h"

#import "MDXScreenManagerObserver-Protocol.h"
#import "MDXScreenSessionObserver-Protocol.h"
#import "YTActiveVideoProvider-Protocol.h"
#import "YTActiveVideoReportingRendererProvider-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTHotConfigObserver-Protocol.h"
#import "YTMAutoOfflineControllerObserver-Protocol.h"
#import "YTMMusicAppMetadataObserverProtocol-Protocol.h"
#import "YTMNowPlayingViewControllerDelegate-Protocol.h"
#import "YTMOfflineabilityResponderProvider-Protocol.h"
#import "YTMPlayerPageResponderProvider-Protocol.h"
#import "YTMPlayerThumbnailResponderProvider-Protocol.h"
#import "YTMPlayerViewControllerParent-Protocol.h"
#import "YTMPlaylistControlsResponderProvider-Protocol.h"
#import "YTMQueueControllerObserverProtocol-Protocol.h"
#import "YTMSettingsObserver-Protocol.h"
#import "YTMThemeControllerObserver-Protocol.h"
#import "YTMVideoOverlayViewControllerDelegate-Protocol.h"
#import "YTMWatchNextStateResponderProvider-Protocol.h"
#import "YTMWatchViewDelegate-Protocol.h"
#import "YTMWifiOnlyStreamingControllerDelegate-Protocol.h"
#import "YTOfflinePlaylistControllerObserver-Protocol.h"
#import "YTOfflineVideoControllerObserver-Protocol.h"
#import "YTPlaybackControllerEventsDelegate-Protocol.h"
#import "YTPlaybackControllerUIDelegate-Protocol.h"
#import "YTPlaylistServiceObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTTopController-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"
#import "YTYouThereControllerDelegate-Protocol.h"

@class GIMMe, HAMIdleTimer, NSHashTable, NSString, UIView, UIViewController, YTICommand, YTIPlayerOverlayRenderer, YTIVideoReportingSupportedRenderers, YTInnerTubeControllerFactory, YTMAutoOfflineController, YTMBackgroundTask, YTMBackgroundUpsellNotificationController, YTMBottomSheet, YTMFullscreenVideoViewController, YTMNowPlayingViewController, YTMPlaybackPublishController, YTMPlayerOverlayFactory, YTMProxyButtonController, YTMQueueCollectionViewController, YTMQueueController, YTMQueueHeaderViewController, YTMQueueServiceController, YTMRestorableQueueState, YTMSongInfoViewController, YTMThemeController, YTMWatchNextResponseViewController, YTMWatchNextViewController, YTMWatchView, YTMWifiOnlyStreamingController, YTOfflinePlaylistController, YTOfflineVideo, YTOfflineVideoController, YTPlaylistService, YTReachabilityController, YTUserDefaults, YTYouThereController;
@protocol MDXServices, YTMServices, YTMWatchViewControllerObserver, YTMWatchViewProtocol, YTOfflineServices, YTPlaybackController, YTPlayerServices, YTResponder;

@interface YTMWatchViewController : YTMultiSizeViewController <MDXScreenManagerObserver, MDXScreenSessionObserver, YTActiveVideoProvider, YTActiveVideoReportingRendererProvider, YTHotConfigObserver, YTMAutoOfflineControllerObserver, YTMMusicAppMetadataObserverProtocol, YTMNowPlayingViewControllerDelegate, YTMOfflineabilityResponderProvider, YTMPlayerThumbnailResponderProvider, YTMPlayerViewControllerParent, YTMPlaylistControlsResponderProvider, YTMPlayerPageResponderProvider, YTMQueueControllerObserverProtocol, YTMVideoOverlayViewControllerDelegate, YTMThemeControllerObserver, YTMWatchNextStateResponderProvider, YTMWatchViewDelegate, YTMWifiOnlyStreamingControllerDelegate, YTOfflinePlaylistControllerObserver, YTOfflineVideoControllerObserver, YTPlaybackControllerUIDelegate, YTPlaylistServiceObserver, YTSystemNotificationsObserver, YTGraftingViewController, YTUserChangedObserver, YTYouThereControllerDelegate, YTMSettingsObserver, YTPlaybackControllerEventsDelegate, YTTopController>
{
    id <YTOfflineServices> _offlineServices;
    id <YTPlayerServices> _playerServices;
    id <MDXServices> _MDXServices;
    YTInnerTubeControllerFactory *_innerTubeControllerFactory;
    YTMWatchNextResponseViewController *_watchNextResponseViewController;
    id <YTMWatchViewControllerObserver> _observers;
    YTIVideoReportingSupportedRenderers *_videoReportingRenderers;
    unsigned long long _watchPlaylistEndpointRequestID;
    YTOfflineVideo *_offlineVideo;
    YTMFullscreenVideoViewController *_fullscreenViewController;
    YTMNowPlayingViewController *_nowPlayingViewController;
    YTPlaylistService *_playlistService;
    _Bool _playing;
    _Bool _shuffleEnabled;
    _Bool _isLandscape;
    HAMIdleTimer *_idleTimer;
    _Bool _idleTimerDisabled;
    YTMRestorableQueueState *_restorableQueueState;
    YTMPlayerOverlayFactory *_overlayFactory;
    YTOfflineVideoController *_offlineVideoController;
    YTOfflinePlaylistController *_offlinePlaylistController;
    YTMAutoOfflineController *_autoOfflineController;
    YTReachabilityController *_reachabilityController;
    long long _playerState;
    YTUserDefaults *_userDefaults;
    CDUnknownBlockType _playbackResumedReadyToPlayBlock;
    YTMWatchView *_watchView;
    YTMSongInfoViewController *_songInfoViewController;
    YTMThemeController *_themeController;
    int _musicVideoType;
    YTMQueueServiceController *_queueServiceController;
    YTMQueueCollectionViewController *_queueCollectionViewController;
    YTMQueueHeaderViewController *_playlistHeaderViewController;
    YTMBackgroundTask *_backgroundTask;
    NSHashTable *_offlineabilityObservers;
    YTMProxyButtonController *_proxyButtonController;
    YTMPlaybackPublishController *_playbackPublishController;
    YTMBackgroundUpsellNotificationController *_backgroundUpsellNotificationController;
    YTMBottomSheet *_bottomSheet;
    _Bool _presentingFullscreen;
    _Bool _initialPlayback;
    id <YTResponder> _parentResponder;
    NSString *_videoTitle;
    NSString *_videoArtist;
    YTIPlayerOverlayRenderer *_playerOverlayRenderer;
    YTMWatchNextViewController *_watchNextViewController;
    unsigned long long _loopMode;
    UIViewController<YTPlaybackController> *_playerViewController;
    GIMMe *_gimme;
    id <YTMServices> _services;
    YTMQueueController *_autoplayController;
    YTICommand *_navigationEndpoint;
    YTMWifiOnlyStreamingController *_wifiOnlyStreamingController;
    YTYouThereController *_youThereController;
}

+ (id)restorableQueueFilePath;
@property(retain, nonatomic) YTYouThereController *youThereController; // @synthesize youThereController=_youThereController;
@property(nonatomic) _Bool initialPlayback; // @synthesize initialPlayback=_initialPlayback;
@property(retain, nonatomic) YTMWifiOnlyStreamingController *wifiOnlyStreamingController; // @synthesize wifiOnlyStreamingController=_wifiOnlyStreamingController;
@property(copy, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
@property(nonatomic) __weak YTMQueueController *autoplayController; // @synthesize autoplayController=_autoplayController;
@property(nonatomic) __weak id <YTMServices> services; // @synthesize services=_services;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) UIViewController<YTPlaybackController> *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) unsigned long long loopMode; // @synthesize loopMode=_loopMode;
@property(readonly, nonatomic, getter=isPresentingFullscreen) _Bool presentingFullscreen; // @synthesize presentingFullscreen=_presentingFullscreen;
@property(readonly, nonatomic) YTMWatchNextViewController *watchNextViewController; // @synthesize watchNextViewController=_watchNextViewController;
@property(readonly, nonatomic) YTIPlayerOverlayRenderer *playerOverlayRenderer; // @synthesize playerOverlayRenderer=_playerOverlayRenderer;
@property(readonly, nonatomic) NSString *videoArtist; // @synthesize videoArtist=_videoArtist;
@property(readonly, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)initializeViewControllersFromRestorableState;
- (void)clearPersistedQueueState;
- (void)persisteQueueStateWithWatchNextResponse:(id)arg1;
- (void)setAutoplayControllerIfPossible:(id)arg1;
- (_Bool)isAudioOnlyAuthorized:(id)arg1;
- (void)handleOfflineVideoDeletionWithVideoID:(id)arg1;
- (_Bool)hasOverlaysPresent;
- (void)displayFirstMealbarInPlayerResponse:(id)arg1 withTriggerCondition:(int)arg2;
- (void)fetchWatchEndpointForWatchTransition:(id)arg1;
- (void)resetPlayer;
- (void)resetAndHide;
- (void)reset;
- (id)contentVideoPlayerOverlay;
- (id)activeVideoPlayerOverlay;
- (void)didTapNextVideo;
- (void)didTapPrevVideo;
- (void)didTapPlayButton;
- (void)reloadPlayer;
- (void)reload;
- (void)setPlayerViewSize:(struct CGSize)arg1;
- (void)createWatchNextViewController;
- (void)handleRemoteControlEvent:(long long)arg1;
- (void)handleChangeShuffleModeCommand:(id)arg1;
- (void)handleChangeRepeatModeCommand:(id)arg1;
- (void)handleNextTrackCommand:(id)arg1;
- (void)handlePreviousTrackCommand:(id)arg1;
- (void)handlePauseCommand:(id)arg1;
- (void)handlePlayCommand:(id)arg1;
- (void)handleTogglePlayPauseCommand:(id)arg1;
- (void)handleChangePlaybackPositionCommand:(id)arg1;
- (void)createLockScreenControls;
- (void)createNowPlayingController;
- (_Bool)maybeCreatePlayerViewController;
- (void)loadWatchNextWithTransition:(id)arg1;
- (void)setTransition:(id)arg1;
- (void)applyOnlineWatchTransition:(id)arg1;
- (void)applyOfflineWatchTransition:(id)arg1;
- (void)applyCompleteWatchTransition:(id)arg1;
- (void)applyWatchTransition:(id)arg1;
- (_Bool)blockWifiOnlyPlaybackIfNecessaryForEndpoint:(id)arg1;
- (_Bool)blockOnlinePlaybackIfNecessaryForEndpoint:(id)arg1;
- (_Bool)shouldBlockPlaybackForEndpoint:(id)arg1;
- (_Bool)isMDXActive;
- (void)updateBackgroundColor;
- (_Bool)isPlayingOfflineVideo;
- (void)setSampledColorFromEvent:(id)arg1;
- (void)loadWithModel:(id)arg1 startPlayback:(_Bool)arg2;
- (void)notifyOfflineabilityObserversDidChange;
- (void)updateLayoutAnimatedWithExpansionCoefficient:(double)arg1;
- (void)updateWatchViewIsPlayingAudio;
- (void)setVideoTitle:(id)arg1 videoArtist:(id)arg2 videoArtistWithMetadata:(id)arg3 secondaryText:(id)arg4;
- (void)maybeCreateYouThereControllerWithPlayerResponse:(id)arg1;
- (void)presentConsolidatedMenuFromButton:(id)arg1;
- (id)activePlaylistSetVideoID;
- (void)notifyPlayerEventsObservers;
- (id)activeOnlineOrOfflinePlaylistID;
- (void)updateAVSwitchAvailable;
- (void)didTapNoVideoModeActionSheetGotItButton;
- (void)didTapNoVideoModeActionSheetSettingsButton;
- (void)showNoVideoModeActionSheet;
- (void)exitFullScreenIfRequiredWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentCSN;
- (void)youThereControllerDidTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)queueController:(id)arg1 didUpdateUserContentMode:(unsigned long long)arg2;
- (void)queueController:(id)arg1 didRemoveVideoAtIndex:(unsigned long long)arg2;
- (void)queueController:(id)arg1 nowPlayingItemAtIndex:(unsigned long long)arg2;
- (void)addOfflineabilityChangeObserver:(id)arg1;
- (CDUnknownBlockType)clientDataBlockForInteractionType:(unsigned long long)arg1;
- (id)navEndpoint;
- (id)playerContainerView;
- (id)detachPlayerViewController;
- (void)attachPlayerViewController:(id)arg1;
- (void)nowPlayingViewController:(id)arg1 didTapOverflowMenuButton:(id)arg2;
- (void)nowPlayingViewControllerDidCollapseExpandedViews:(id)arg1;
- (void)nowPlayingViewControllerDidChangeExpansionCoefficient:(id)arg1;
- (void)nowPlayingViewController:(id)arg1 didChangeExpansionCoefficient:(double)arg2 animated:(_Bool)arg3;
- (void)nowPlayingViewControllerWillChangeExpansionCoefficient:(id)arg1;
- (void)nowPlayingViewControllerDidTapPrev:(id)arg1;
- (void)nowPlayingViewControllerDidTapNext:(id)arg1;
- (void)nowPlayingViewControllerDidTapPlay:(id)arg1;
- (void)wifiOnlyStreamingControllerStopStreaming:(id)arg1;
- (_Bool)isShowingLiveChat;
- (void)showLiveChat:(_Bool)arg1;
- (void)hideWatch;
- (void)showAddToMenuFromView:(id)arg1;
- (void)adDidComplete:(long long)arg1;
- (void)showSmallScreen;
- (void)showFullScreen;
- (void)userDidChange;
- (void)didDeletePlaylist:(id)arg1;
- (void)didDeleteAllOfflineVideos;
- (void)didDeleteVideoID:(id)arg1 fromPlaylistID:(id)arg2;
- (void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)autoOfflineController:(id)arg1 didDeleteVideoWithId:(id)arg2;
- (void)watchViewDidRetry:(id)arg1;
- (void)watchViewDidCollapse:(id)arg1;
- (void)watchViewDidExpand:(id)arg1;
- (void)watchViewDidTapCloseButton:(id)arg1;
- (void)watchViewDidDismissPlayer:(id)arg1;
- (void)watchViewWillDismissPlayer:(id)arg1;
- (void)watchViewDidTapPlayButton:(id)arg1;
- (void)watchView:(id)arg1 expansionCoefficientDidChange:(double)arg2;
- (void)watchViewDidEndTransitioning:(id)arg1;
- (void)watchViewWillBeginTransitioning:(id)arg1;
- (void)watchViewWillCollapse:(id)arg1;
- (void)screenSession:(id)arg1 videoDidChangeToVideoID:(id)arg2 listID:(id)arg3 videoIndex:(unsigned long long)arg4;
- (void)screenSession:(id)arg1 playerStateDidChange:(long long)arg2;
- (void)MDXScreenManager:(id)arg1 sessionWillChange:(id)arg2;
- (void)MDXScreenManager:(id)arg1 sessionDidChange:(id)arg2;
- (_Bool)isActiveVideoPlayable;
- (unsigned long long)activeVideoIndex;
- (id)activePlaylistID;
- (double)activeVideoMediaTime;
- (id)activeVideoID;
- (id)activeVideoReportingRenderer;
- (void)watchNextDidChangeTuning;
- (void)didLoadWatchNextResponse:(id)arg1 autoplayController:(id)arg2;
- (id)thumbnailForVideoID:(id)arg1;
- (void)playbackControllerDidFinishPlayingAd;
- (void)playbackControllerDidPressCopyDebugInfo;
- (void)playbackControllerDidReceivePlayerResponse:(id)arg1;
- (void)playbackControllerDidFailWithError:(id)arg1;
- (void)playbackControllerWillFailWithError:(id)arg1;
- (void)playbackControllerStateDidChange;
- (void)notifyNowPlayingStateObservers;
- (void)playbackControllerPlayerStateDidChange;
- (void)playbackControllerDidPlay;
- (void)playbackControllerDidFinishPlayback;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(id)arg1;
- (id)nextAutoplayPlayerTransition;
- (void)themeController:(id)arg1 playerPagePaletteDidChange:(id)arg2;
- (void)musicAppMetadataDidChange:(id)arg1;
- (void)videoOverlayViewControllerDidTapAVSwitch:(id)arg1;
- (void)videoOverlayViewController:(id)arg1 didTapOverflowMenuButton:(id)arg2;
- (void)hotConfigDidChange:(id)arg1;
- (void)settings:(id)arg1 didSetAudioOnly:(_Bool)arg2;
- (_Bool)hasLoopButton;
- (_Bool)hasShuffleButton;
@property(nonatomic, getter=isShuffleEnabled) _Bool shuffleEnabled;
- (id)persistedQueueController;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)didTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)willTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)isVolumeBarVisible;
- (void)setParentResponder:(id)arg1;
- (void)restorePlaybackQueue;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2 expand:(_Bool)arg3 startPlayback:(_Bool)arg4;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) UIView<YTMWatchViewProtocol> *watchView;
- (void)loadView;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

