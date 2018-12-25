//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTAirPlayViewDelegate-Protocol.h"
#import "YTImageViewLoadingDelegate-Protocol.h"

@class NSString, QTMActivityIndicator, QTMButton, UIColor, UIImage, UIImageView, UILabel, UITapGestureRecognizer, YTAirPlayView, YTDoubleTapToSeekView, YTImageView, YTInlinePlayerScrubUserEducationView, YTMAVSwitch, YTMAudioOnlySwitch, YTMLiveBadgeView, YTMLoopButton, YTMPlayerControlsView, YTMStoryboardScrubber, YTMVideoOverlayErrorView, YTOverflowMenuView;
@protocol YTCaptionViewProtocol, YTMVideoOverlayViewDelegate;

@interface YTMVideoOverlayView : UIView <UIGestureRecognizerDelegate, YTAirPlayViewDelegate, YTImageViewLoadingDelegate>
{
    UIView *_backdropView;
    UIView *_fullscreenContainerView;
    UIView *_portraitContainerView;
    id <YTMVideoOverlayViewDelegate> _delegate;
    UILabel *_remoteScreenLabel;
    UILabel *_audioModeLabel;
    YTMVideoOverlayErrorView *_errorView;
    QTMButton *_replayButton;
    QTMButton *_collapseButton;
    QTMButton *_fullscreenButton;
    YTAirPlayView *_airPlayView;
    YTMLiveBadgeView *_liveBadge;
    QTMActivityIndicator *_activityIndicator;
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _audioOnly;
    UIImage *_previewImage;
    NSString *_remoteScreenName;
    NSString *_externalPlaybackLabelText;
    YTMAVSwitch *_avPillSwitch;
    _Bool _playing;
    _Bool _loading;
    _Bool _canReplay;
    _Bool _fullscreen;
    _Bool _controlsVisible;
    _Bool _quickSeekEducationVisible;
    _Bool _live;
    _Bool _externalPlaybackActive;
    _Bool _MDXPlaybackActive;
    _Bool _overlayMenuVisibleFullscreenOnly;
    _Bool _AVSwitchAvailable;
    _Bool _AVSwitchPillEnabled;
    _Bool _captionsVisible;
    int _musicVideoType;
    UIImageView *_featuredChannelWatermarkImageView;
    YTMPlayerControlsView *_playerControlsView;
    double _playerControlsExpansionCoefficient;
    YTDoubleTapToSeekView *_doubleTapToSeekView;
    YTInlinePlayerScrubUserEducationView *_scrubUserEducationView;
    YTMStoryboardScrubber *_scrubber;
    QTMButton *_MDXButton;
    QTMButton *_overflowButton;
    YTMLoopButton *_loopButton;
    QTMButton *_shuffleButton;
    YTMAudioOnlySwitch *_audioOnlyButton;
    UILabel *_mediaTimeLabel;
    UILabel *_totalTimeLabel;
    UILabel *_videoTitleLabel;
    UILabel *_videoArtistLabel;
    YTOverflowMenuView *_overflowMenuView;
    UIView<YTCaptionViewProtocol> *_captionOverlayView;
    YTImageView *_thumbnailView;
    double _expansionCoefficient;
    UIColor *_errorViewBackgroundColor;
    UIView *_nerdStatsOverlayView;
    QTMButton *_audioVideoSwitch;
    unsigned long long _userContentMode;
    UIView *_dimmedView;
    UIView *_containerView;
    UIView *_fullscreenBottomContainerView;
}

@property(retain, nonatomic) UIView *fullscreenBottomContainerView; // @synthesize fullscreenBottomContainerView=_fullscreenBottomContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *dimmedView; // @synthesize dimmedView=_dimmedView;
@property(nonatomic, getter=isCaptionsVisible) _Bool captionsVisible; // @synthesize captionsVisible=_captionsVisible;
@property(nonatomic) unsigned long long userContentMode; // @synthesize userContentMode=_userContentMode;
@property(readonly, nonatomic) YTMAVSwitch *avPillSwitch; // @synthesize avPillSwitch=_avPillSwitch;
@property(nonatomic, getter=isAVSwitchPillEnabled) _Bool AVSwitchPillEnabled; // @synthesize AVSwitchPillEnabled=_AVSwitchPillEnabled;
@property(readonly, nonatomic) QTMButton *audioVideoSwitch; // @synthesize audioVideoSwitch=_audioVideoSwitch;
@property(nonatomic) _Bool AVSwitchAvailable; // @synthesize AVSwitchAvailable=_AVSwitchAvailable;
@property(nonatomic, getter=isOverlayMenuVisibleFullscreenOnly) _Bool overlayMenuVisibleFullscreenOnly; // @synthesize overlayMenuVisibleFullscreenOnly=_overlayMenuVisibleFullscreenOnly;
@property(retain, nonatomic) UIView *nerdStatsOverlayView; // @synthesize nerdStatsOverlayView=_nerdStatsOverlayView;
@property(retain, nonatomic) UIColor *errorViewBackgroundColor; // @synthesize errorViewBackgroundColor=_errorViewBackgroundColor;
@property(nonatomic) int musicVideoType; // @synthesize musicVideoType=_musicVideoType;
@property(nonatomic) _Bool MDXPlaybackActive; // @synthesize MDXPlaybackActive=_MDXPlaybackActive;
@property(nonatomic) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(nonatomic) double expansionCoefficient; // @synthesize expansionCoefficient=_expansionCoefficient;
@property(readonly, nonatomic) YTImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView<YTCaptionViewProtocol> *captionOverlayView; // @synthesize captionOverlayView=_captionOverlayView;
@property(retain, nonatomic) YTOverflowMenuView *overflowMenuView; // @synthesize overflowMenuView=_overflowMenuView;
@property(readonly, nonatomic) UILabel *videoArtistLabel; // @synthesize videoArtistLabel=_videoArtistLabel;
@property(readonly, nonatomic) UILabel *videoTitleLabel; // @synthesize videoTitleLabel=_videoTitleLabel;
@property(readonly, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(readonly, nonatomic) UILabel *mediaTimeLabel; // @synthesize mediaTimeLabel=_mediaTimeLabel;
@property(readonly, nonatomic) YTMAudioOnlySwitch *audioOnlyButton; // @synthesize audioOnlyButton=_audioOnlyButton;
@property(readonly, nonatomic) QTMButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(readonly, nonatomic) YTMLoopButton *loopButton; // @synthesize loopButton=_loopButton;
@property(readonly, nonatomic) QTMButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(readonly, nonatomic) QTMButton *MDXButton; // @synthesize MDXButton=_MDXButton;
@property(retain, nonatomic) YTMStoryboardScrubber *scrubber; // @synthesize scrubber=_scrubber;
@property(nonatomic, getter=isLive) _Bool live; // @synthesize live=_live;
@property(nonatomic) _Bool audioOnly; // @synthesize audioOnly=_audioOnly;
@property(readonly, nonatomic) YTInlinePlayerScrubUserEducationView *scrubUserEducationView; // @synthesize scrubUserEducationView=_scrubUserEducationView;
@property(readonly, nonatomic) YTDoubleTapToSeekView *doubleTapToSeekView; // @synthesize doubleTapToSeekView=_doubleTapToSeekView;
@property(nonatomic, getter=isQuickSeekEducationVisible) _Bool quickSeekEducationVisible; // @synthesize quickSeekEducationVisible=_quickSeekEducationVisible;
@property(nonatomic) double playerControlsExpansionCoefficient; // @synthesize playerControlsExpansionCoefficient=_playerControlsExpansionCoefficient;
@property(readonly, nonatomic) YTMPlayerControlsView *playerControlsView; // @synthesize playerControlsView=_playerControlsView;
@property(nonatomic, getter=areControlsVisible) _Bool controlsVisible; // @synthesize controlsVisible=_controlsVisible;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) _Bool canReplay; // @synthesize canReplay=_canReplay;
@property(nonatomic, getter=isPlaying) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIImageView *featuredChannelWatermarkImageView; // @synthesize featuredChannelWatermarkImageView=_featuredChannelWatermarkImageView;
- (void).cxx_destruct;
- (void)updateRemoteScreenLabel;
- (_Bool)shouldHideThumbnail;
- (void)onScrubberUp;
- (void)onScrubberDown;
- (void)onScrubberValueChange;
- (void)didTapDislikeButton;
- (void)didTapLikeButton;
- (void)didTapFullscreenButton;
- (void)didTapOfflineButton;
- (void)didTapAVSwitch;
- (void)didTapShuffleButton;
- (void)didTapLoopButton;
- (void)didTapRetryButton;
- (void)didTapReplayButton;
- (void)didTapBackground;
- (void)didTapOverflowButton;
- (void)didTapPrevButton;
- (void)didTapNextButton;
- (void)didTapCollapseButton;
- (void)didTapPlaybackButton;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)hideErrorView;
- (_Bool)isExpanded;
- (_Bool)isCollapsed;
- (void)updatePlaybackControls;
- (void)updateScrubberAndTimeLabels;
- (void)updateAVSwitchVisibility;
- (void)updateCaptionsVisibility;
- (void)imageViewDidLoad:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)visibilityDidChange;
- (void)updateFeaturedChannelWatermarkVisibility;
- (void)updateAudioModeAndRemoteScreenLabelVisibility;
- (void)showErrorWithMessage:(id)arg1 haveOfflineContent:(_Bool)arg2 explicitOfflineEnabled:(_Bool)arg3 canViewOffline:(_Bool)arg4;
- (void)setTotalTime:(double)arg1;
- (void)setMediaTime:(double)arg1;
- (void)setRemoteScreenName:(id)arg1;
- (void)setAudioOnly:(_Bool)arg1 forced:(_Bool)arg2;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (_Bool)isOverlayVisible;
- (void)setControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (double)watermarkScaledPadding;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 doubleTapToSeekEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

