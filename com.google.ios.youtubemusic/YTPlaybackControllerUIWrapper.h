//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAudioTrackSwitchDelegate-Protocol.h"
#import "YTContentVideoPlayerOverlayDelegate-Protocol.h"
#import "YTCorePlaybackControllerDelegate-Protocol.h"
#import "YTPlaybackController-Protocol.h"
#import "YTPlayerPromoControllerProvider-Protocol.h"
#import "YTPlayerViewDelegate-Protocol.h"
#import "YTSingleVideoActiveCaptionTrackObserver-Protocol.h"
#import "YTSingleVideoAspectRatioObserver-Protocol.h"
#import "YTSingleVideoAvailableCaptionTracksObserver-Protocol.h"
#import "YTSingleVideoBufferedMediaTimeObserver-Protocol.h"
#import "YTSingleVideoCaptionErrorObserver-Protocol.h"
#import "YTSingleVideoCaptionViewControllerObserver-Protocol.h"
#import "YTSingleVideoCurrentTimeObserver-Protocol.h"
#import "YTSingleVideoCurrentTimeSideEffectfulObserver-Protocol.h"
#import "YTSingleVideoForegroundAudioOnlyPlaybackReasonObserver-Protocol.h"
#import "YTSingleVideoFormatSelectionObserver-Protocol.h"
#import "YTSingleVideoNerdStatsPlaybackDataObserver-Protocol.h"
#import "YTSingleVideoPeggedToLiveObserver-Protocol.h"
#import "YTSingleVideoPlaybackRateObserver-Protocol.h"
#import "YTSingleVideoRawMediaStateObserver-Protocol.h"
#import "YTSingleVideoRawMediaStateSideEffectfulObserver-Protocol.h"
#import "YTSingleVideoSeekableMediaTimeRangeObserver-Protocol.h"
#import "YTSingleVideoSelectableAudioFormatsObserver-Protocol.h"
#import "YTSingleVideoSelectableVideoFormatsObserver-Protocol.h"
#import "YTSingleVideoTotalMediaTimeObserver-Protocol.h"
#import "YTSpeedyGControllerDelegate-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTVarispeedSwitchControllerDelegate-Protocol.h"
#import "YTVideoQualitySwitchDelegate-Protocol.h"

@class GIMMe, MLDefaultViewportSizeProvider, NSError, NSMutableDictionary, NSString, UIViewController, YTAudioTrackSwitchController, YTCPN, YTIWatchNextResponse, YTInteractionLoggingProxyButton, YTPlayerEmptyOverlayViewController, YTPlayerPromoController, YTPlayerResponse, YTPlayerTransition, YTPlayerView, YTSpeedyGController, YTVarispeedSwitchController, YTVideoQualitySwitchController;
@protocol HAMClock, YTContentVideoPlayerOverlayProtocol, YTCorePlaybackController, YTGLSceneProtocol, YTPlaybackControllerEventsDelegate, YTPlaybackControllerUIDelegate, YTPlayerOverlayFactory, YTPlayerOverlayProtocol, YTPlayerViewControllerConfig, YTResponder, YTSingleVideoObservable, YTStoryboardController, YTVideoPlayerOverlayProtocol;

@interface YTPlaybackControllerUIWrapper : NSObject <YTAudioTrackSwitchDelegate, YTContentVideoPlayerOverlayDelegate, YTCorePlaybackControllerDelegate, YTPlayerPromoControllerProvider, YTPlayerViewDelegate, YTSingleVideoActiveCaptionTrackObserver, YTSingleVideoAspectRatioObserver, YTSingleVideoAvailableCaptionTracksObserver, YTSingleVideoBufferedMediaTimeObserver, YTSingleVideoCaptionErrorObserver, YTSingleVideoCaptionViewControllerObserver, YTSingleVideoCurrentTimeObserver, YTSingleVideoCurrentTimeSideEffectfulObserver, YTSingleVideoForegroundAudioOnlyPlaybackReasonObserver, YTSingleVideoFormatSelectionObserver, YTSingleVideoNerdStatsPlaybackDataObserver, YTSingleVideoPeggedToLiveObserver, YTSingleVideoPlaybackRateObserver, YTSingleVideoRawMediaStateObserver, YTSingleVideoRawMediaStateSideEffectfulObserver, YTSingleVideoSeekableMediaTimeRangeObserver, YTSingleVideoSelectableAudioFormatsObserver, YTSingleVideoSelectableVideoFormatsObserver, YTSingleVideoTotalMediaTimeObserver, YTSpeedyGControllerDelegate, YTSystemNotificationsObserver, YTVarispeedSwitchControllerDelegate, YTVideoQualitySwitchDelegate, YTPlaybackController>
{
    id <YTCorePlaybackController> _playbackController;
    UIViewController *_parentViewController;
    id <YTPlayerViewControllerConfig> _config;
    id <YTPlayerOverlayFactory> _playerOverlayFactory;
    YTPlayerView *_playerView;
    YTPlayerPromoController *_promoController;
    id <HAMClock> _clock;
    double _scrubLastSeekAbsoluteTime;
    double _scrubMinSeekInterval;
    CDStruct_d60ef703 _seekTime;
    float _expansionCoefficient;
    YTPlayerTransition *_playerTransition;
    YTIWatchNextResponse *_watchNextResponse;
    UIViewController<YTPlayerOverlayProtocol> *_activePlayerOverlay;
    _Bool _pinchToRotateEnabled;
    YTInteractionLoggingProxyButton *_dragDropProxyButton;
    id <YTGLSceneProtocol> _GLScene;
    MLDefaultViewportSizeProvider *_viewportSizeProvider;
    _Bool _viewportSizeProviderNeedsUpdate;
    YTSpeedyGController *_speedyGController;
    NSMutableDictionary *_videoIdsToStoryboardControllers;
    _Bool _userScrubbing;
    _Bool _hasNextVideo;
    _Bool _hasPreviousVideo;
    _Bool _playlistControlsHidden;
    _Bool _transitioningPlayerViewLayout;
    id <YTResponder> _parentResponder;
    id <YTPlaybackControllerEventsDelegate> _eventsDelegate;
    id <YTPlaybackControllerUIDelegate> _UIDelegate;
    YTVideoQualitySwitchController *_videoQualityController;
    YTAudioTrackSwitchController *_audioTrackController;
    YTVarispeedSwitchController *_varispeedController;
    UIViewController<YTContentVideoPlayerOverlayProtocol> *_contentVideoPlayerOverlay;
    UIViewController<YTVideoPlayerOverlayProtocol> *_activeVideoPlayerOverlay;
    GIMMe *_gimme;
    YTPlayerEmptyOverlayViewController *_emptyOverlay;
    id <YTStoryboardController> _storyboardController;
}

@property(retain, nonatomic) id <YTStoryboardController> storyboardController; // @synthesize storyboardController=_storyboardController;
@property(retain, nonatomic) YTPlayerEmptyOverlayViewController *emptyOverlay; // @synthesize emptyOverlay=_emptyOverlay;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic, getter=isTransitioningPlayerViewLayout) _Bool transitioningPlayerViewLayout; // @synthesize transitioningPlayerViewLayout=_transitioningPlayerViewLayout;
@property(nonatomic) _Bool playlistControlsHidden; // @synthesize playlistControlsHidden=_playlistControlsHidden;
@property(nonatomic) _Bool hasPreviousVideo; // @synthesize hasPreviousVideo=_hasPreviousVideo;
@property(nonatomic) _Bool hasNextVideo; // @synthesize hasNextVideo=_hasNextVideo;
@property(readonly, nonatomic) _Bool userScrubbing; // @synthesize userScrubbing=_userScrubbing;
@property(nonatomic) __weak id <YTPlaybackControllerUIDelegate> UIDelegate; // @synthesize UIDelegate=_UIDelegate;
@property(nonatomic) __weak id <YTPlaybackControllerEventsDelegate> eventsDelegate; // @synthesize eventsDelegate=_eventsDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)storyboardControllerWithSingleVideo:(id)arg1;
- (void)updateViewportSizeProvider;
- (void)startObservingStateChangesOnActiveVideo;
- (void)resetAdOverlayAndActivate;
- (void)resetContentOverlay;
- (void)resetContentOverlayAndActivate;
- (void)resetActiveOverlayAndActivate;
- (void)updateActiveOverlayWithActiveVideoCurrentState;
- (void)updateUIStateWithActiveVideoCurrentState;
- (void)notifyEventsDelegateAboutNewActiveVideo:(id)arg1 withPlaybackData:(id)arg2;
- (void)setInfoCardDataForAdInterrupt:(id)arg1;
- (void)setInfoCardDataForContentVideo;
@property(readonly, nonatomic) id <YTPlayerOverlayProtocol> activePlayerOverlay;
- (_Bool)isVideoFinished;
- (_Bool)handleNavigationEndpointResponderEvent:(id)arg1;
- (void)didPressRewindWithTimeInterval:(double)arg1;
- (void)didPressFastForwardWithTimeInterval:(double)arg1;
- (_Bool)handlePlayerControlsDidPressButtonResponderEvent:(id)arg1;
- (void)setPlayerDataOnContentOverlay;
- (void)clearActivePlayerOverlay;
- (void)updatePlayerViewWithActivePlayerOverlay;
- (void)activateOverlay:(id)arg1 updatePlayerView:(_Bool)arg2;
- (void)updateActiveOverlayVRStateForNewVideoController;
- (void)didPressCardboardBackButton;
- (void)didPressCardboardButton;
- (void)speedyGControllerWillDisplaySpeedyGAlert:(id)arg1;
- (void)singleVideo:(id)arg1 aspectRatioDidChange:(double)arg2;
- (void)singleVideo:(id)arg1 bufferedMediaTimeDidChange:(double)arg2;
- (void)singleVideo:(id)arg1 seekableMediaTimeRangeDidChangeToMinimumTime:(double)arg2 maximumTime:(double)arg3;
- (void)singleVideo:(id)arg1 playbackRateDidChange:(float)arg2;
- (void)singleVideo:(id)arg1 peggedToLiveDidChange:(_Bool)arg2;
- (void)singleVideo:(id)arg1 foregroundAudioOnlyPlaybackReasonDidChange:(int)arg2;
- (void)singleVideo:(id)arg1 totalMediaTimeDidChange:(double)arg2;
- (void)singleVideo:(id)arg1 didSelectVideoFormat:(id)arg2 audioFormat:(id)arg3;
- (void)singleVideo:(id)arg1 selectableVideoFormatsDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 selectableAudioFormatsDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 nerdStatsPlaybackDataDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 captionsDidFailWithError:(id)arg2;
- (void)singleVideo:(id)arg1 captionViewControllerDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 availableCaptionTracksDidChange:(id)arg2;
- (void)singleVideo:(id)arg1 activeCaptionTrackDidChange:(id)arg2;
- (void)potentiallyMutatedSingleVideo:(id)arg1 currentTimeDidChange:(CDStruct_d60ef703)arg2;
- (void)singleVideo:(id)arg1 currentTimeDidChange:(CDStruct_d60ef703)arg2;
- (void)potentiallyMutatedSingleVideo:(id)arg1 rawMediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)singleVideo:(id)arg1 rawMediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)appWillEnterForeground:(id)arg1;
- (void)varispeedSwitchController:(id)arg1 didSelectRate:(float)arg2;
- (float)currentPlaybackRateForVarispeedSwitchController:(id)arg1;
- (void)audioTrackDidChange:(id)arg1;
- (id)selectedAudioTrack;
- (id)videoFormatConstraintForVideoQualitySwitchController:(id)arg1;
- (void)videoQualitySwitchController:(id)arg1 didSelectFormatConstraint:(id)arg2;
- (_Bool)isCurrentVideoVerticallyCropped;
- (void)didPressPlayerBarReplay;
- (void)didSeekToProductionTime:(double)arg1;
- (void)didSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)didEndScrubbing;
- (void)didScrubToProductionTime:(double)arg1;
- (void)didScrubToTime:(double)arg1;
- (void)didStartScrubbing;
- (void)didPressPlayerBarNext;
- (void)didTogglePlayPause;
- (void)didPressLiveSync;
- (void)didPressToggleFullscreen;
@property(readonly, nonatomic) YTVarispeedSwitchController *varispeedController; // @synthesize varispeedController=_varispeedController;
@property(readonly, nonatomic) YTVideoQualitySwitchController *videoQualityController; // @synthesize videoQualityController=_videoQualityController;
@property(readonly, nonatomic) YTAudioTrackSwitchController *audioTrackController; // @synthesize audioTrackController=_audioTrackController;
- (void)didSetNerdStatsEnabled:(_Bool)arg1;
- (void)userDidSelectCaptionTrack:(id)arg1;
- (void)didPressCopyDebugInfo;
- (void)didDismissModal;
- (void)playbackControllerDidLoadOfflineLiveStream:(id)arg1;
- (void)setPinchToRotateEnabled:(_Bool)arg1;
- (void)setRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)enableCaptionsIfAvailable;
- (void)playIfPermitted;
- (void)seekToEnd;
- (_Bool)isShowingLiveChat;
- (void)showLiveChat:(_Bool)arg1;
- (void)showAddToMenuFromView:(id)arg1;
- (void)playbackController:(id)arg1 externalPlaybackActiveStateDidChange:(_Bool)arg2;
- (void)playbackController:(id)arg1 VRStateDidChange:(_Bool)arg2;
- (void)playbackControllerDidLoadPrerollAd:(id)arg1;
- (void)playbackController:(id)arg1 didLoadContentPlaybackData:(id)arg2;
- (void)playbackControllerStateDidChange:(id)arg1;
- (void)playbackController:(id)arg1 didFailWithError:(id)arg2;
- (void)playbackController:(id)arg1 willFailWithError:(id)arg2;
- (void)playbackControllerDidFinishPlayingAd:(id)arg1;
- (void)playbackControllerDidFinishPlayback:(id)arg1;
- (void)playbackController:(id)arg1 didReceiveAdMarkers:(id)arg2;
- (void)playbackController:(id)arg1 willResetToState:(int)arg2;
- (void)playbackController:(id)arg1 willStartAdSurveyWithAdInterrupt:(id)arg2;
- (id)overlayForVideo:(id)arg1;
- (void)playbackController:(id)arg1 didActivateVideo:(id)arg2 withPlaybackData:(id)arg3;
- (_Bool)isContentPanAllowedForPlayerView:(id)arg1;
- (void)playerViewViewportSizeDidChange:(id)arg1;
- (void)playerViewDidPinchToSmallscreen:(id)arg1;
- (void)playerViewDidPinchToFullscreen:(id)arg1;
- (void)playerViewDidDragDrop:(id)arg1;
- (id)dragDropShareURLForPlayerView:(id)arg1;
- (long long)playerStateForPromoController:(id)arg1;
- (_Bool)isExternalPlaybackActiveForPromoController:(id)arg1;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
@property(readonly, nonatomic) _Bool isVRModeActive;
@property(nonatomic, getter=isActivePlayback) _Bool activePlayback;
@property(nonatomic, getter=isExternalPlaybackAllowed) _Bool externalPlaybackAllowed;
- (void)scrubToProductionTime:(double)arg1;
- (void)scrubToTime:(double)arg1;
- (void)setBlackoutActive:(_Bool)arg1;
- (void)setUserAudioOnlyModeActive:(_Bool)arg1;
- (void)willLoseFocus;
- (void)didGainFocus;
- (int)playerViewLayout;
- (void)setPlayerViewLayout:(int)arg1;
@property(readonly, nonatomic) id <YTSingleVideoObservable> contentVideo;
@property(readonly, nonatomic) id <YTSingleVideoObservable> activeVideo;
- (id)currentAd;
- (id)contentPlayerMacroState;
- (id)lastKnownAdPlayerMacroState;
@property(readonly, nonatomic) UIViewController<YTContentVideoPlayerOverlayProtocol> *contentVideoPlayerOverlay; // @synthesize contentVideoPlayerOverlay=_contentVideoPlayerOverlay;
@property(readonly, nonatomic) UIViewController<YTVideoPlayerOverlayProtocol> *activeVideoPlayerOverlay; // @synthesize activeVideoPlayerOverlay=_activeVideoPlayerOverlay;
- (void)setLiveCaptionsVerticalRatio:(double)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (_Bool)isInlinePlaybackActive;
- (void)switchToInlinePlayback:(_Bool)arg1;
- (void)setOverlayFactory:(id)arg1;
- (void)handleRemoteControlEvent:(long long)arg1;
@property(readonly, nonatomic) YTPlayerResponse *playerResponse;
- (void)setVolume:(float)arg1;
- (void)replay;
- (void)resumePlayback;
- (void)suspendPlayback;
- (_Bool)arePlayerControlsHidden;
- (void)didPressReplay;
- (void)didPressPause;
- (void)didPressPlay;
- (id)playbackDebugData;
- (void)didPressSkipAd;
- (void)didPressCompanionAd;
@property(readonly, nonatomic) _Bool isPlayingAdIntro;
@property(readonly, nonatomic) _Bool isPlayingAdSurvey;
@property(readonly, nonatomic) _Bool isPlayingAd;
@property(readonly, nonatomic) YTCPN *contentVideoCPN;
@property(readonly, nonatomic) double contentVideoMediaTime;
@property(readonly, nonatomic) double currentVideoMediaTime;
@property(readonly, nonatomic) double currentVideoTotalMediaTime;
- (void)restoreToState:(id)arg1 playbackConfig:(id)arg2;
- (id)restorableState;
- (void)resetToLoading;
- (void)reset;
@property(readonly, nonatomic) int state;
@property(readonly, nonatomic) _Bool isPlaybackFinished;
@property(readonly, nonatomic) NSString *contentVideoID;
@property(readonly, nonatomic) NSString *currentVideoID;
- (_Bool)handlesAutoplayingInternally;
- (void)loadWithPlayerTransition:(id)arg1 playbackConfig:(id)arg2;
- (void)prepareToLoadWithPlayerTransition:(id)arg1 expectedLayout:(id)arg2;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long playerState;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic, getter=isCurrentVideoVertical) _Bool currentVideoVertical;
- (void)applyWatchNextResponse;
- (void)setWatchNextResponse:(id)arg1;
- (id)initWithParentResponder:(id)arg1 overlayFactory:(id)arg2 playerView:(id)arg3 parentViewController:(id)arg4 playbackControllerFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

