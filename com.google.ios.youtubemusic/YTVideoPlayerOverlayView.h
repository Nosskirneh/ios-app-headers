//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTPlayerOverlayView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTVideoPlayerOverlayGestureRecognizerDelegate-Protocol.h"

@class GIMMe, MDCActivityIndicator, NSInvocation, NSString, UIButton, UIControl, UIImageView, UITapGestureRecognizer, UIView, YTLabel, YTNoSoundMemoView, YTOverflowMenuView, YTPlaybackButton, YTTimedAction;
@protocol YTCaptionViewProtocol, YTInfoCardTeaserViewProtocol, YTResponder;

@interface YTVideoPlayerOverlayView : YTPlayerOverlayView <UIGestureRecognizerDelegate, YTResponder, YTVideoPlayerOverlayGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_spinnerTapRecognizer;
    _Bool _captionsVisible;
    UIView *_collapsedWatermarkView;
    UIButton *_collapsedPlayButton;
    UIButton *_collapsedPauseButton;
    UIButton *_collapsedReplayButton;
    UIImageView *_placeholderImageView;
    double _errorImageViewAspectRatio;
    NSInvocation *_playInvocation;
    NSInvocation *_pauseInvocation;
    YTPlaybackButton *_playPauseButton;
    YTNoSoundMemoView *_noSoundMemoView;
    YTTimedAction *_spinnerDelayTimer;
    _Bool _infoCardButtonVisible;
    _Bool _isAnimatingInfoCardToNotVisible;
    NSString *_remoteScreenName;
    NSString *_externalPlaybackLabelText;
    _Bool _nerdStatsVisible;
    _Bool _playerControlsHidden;
    _Bool _useFlatScrim;
    _Bool _useYTRTL;
    _Bool _warningLabelHidden;
    id <YTResponder> _parentResponder;
    YTOverflowMenuView *_overflowMenuView;
    UIView<YTCaptionViewProtocol> *_captionOverlayView;
    UIView *_paidContentView;
    UIView *_nerdStatsOverlayView;
    UIButton *_playbackRouteButton;
    UIView<YTInfoCardTeaserViewProtocol> *_teaserContainerView;
    UIView *_drawerFullscreenView;
    UIButton *_infoCardButton;
    UIButton *_overflowButton;
    MDCActivityIndicator *_spinner;
    MDCActivityIndicator *_syncSpinner;
    UIButton *_replayButton;
    UITapGestureRecognizer *_backgroundTapRecognizer;
    UIView *_backgroundView;
    UIImageView *_backgroundTopShadowView;
    UIImageView *_backgroundBottomShadowView;
    YTLabel *_errorLabel;
    YTLabel *_errorTapToRetryLabel;
    UIImageView *_errorImageView;
    UIView *_errorBackgroundScrim;
    UIImageView *_errorBackgroundView;
    YTLabel *_remoteScreenLabel;
    YTLabel *_warningLabel;
    UIButton *_previousButton;
    UIButton *_nextButton;
}

@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIButton *previousButton; // @synthesize previousButton=_previousButton;
@property(nonatomic) _Bool warningLabelHidden; // @synthesize warningLabelHidden=_warningLabelHidden;
@property(retain, nonatomic) YTLabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) YTLabel *remoteScreenLabel; // @synthesize remoteScreenLabel=_remoteScreenLabel;
@property(retain, nonatomic) UIImageView *errorBackgroundView; // @synthesize errorBackgroundView=_errorBackgroundView;
@property(retain, nonatomic) UIView *errorBackgroundScrim; // @synthesize errorBackgroundScrim=_errorBackgroundScrim;
@property(retain, nonatomic) UIImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(retain, nonatomic) YTLabel *errorTapToRetryLabel; // @synthesize errorTapToRetryLabel=_errorTapToRetryLabel;
@property(retain, nonatomic) YTLabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIImageView *backgroundBottomShadowView; // @synthesize backgroundBottomShadowView=_backgroundBottomShadowView;
@property(retain, nonatomic) UIImageView *backgroundTopShadowView; // @synthesize backgroundTopShadowView=_backgroundTopShadowView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool useYTRTL; // @synthesize useYTRTL=_useYTRTL;
@property(readonly, nonatomic) UITapGestureRecognizer *backgroundTapRecognizer; // @synthesize backgroundTapRecognizer=_backgroundTapRecognizer;
@property(retain, nonatomic) UIButton *replayButton; // @synthesize replayButton=_replayButton;
@property(readonly, nonatomic) UIControl *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) MDCActivityIndicator *syncSpinner; // @synthesize syncSpinner=_syncSpinner;
@property(retain, nonatomic) MDCActivityIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(retain, nonatomic) UIButton *infoCardButton; // @synthesize infoCardButton=_infoCardButton;
@property(retain, nonatomic) UIView *drawerFullscreenView; // @synthesize drawerFullscreenView=_drawerFullscreenView;
@property(retain, nonatomic) UIView<YTInfoCardTeaserViewProtocol> *teaserContainerView; // @synthesize teaserContainerView=_teaserContainerView;
@property(nonatomic) _Bool useFlatScrim; // @synthesize useFlatScrim=_useFlatScrim;
@property(nonatomic) _Bool playerControlsHidden; // @synthesize playerControlsHidden=_playerControlsHidden;
@property(nonatomic) _Bool nerdStatsVisible; // @synthesize nerdStatsVisible=_nerdStatsVisible;
@property(readonly, nonatomic) UIButton *playbackRouteButton; // @synthesize playbackRouteButton=_playbackRouteButton;
@property(retain, nonatomic) YTNoSoundMemoView *noSoundMemoView; // @synthesize noSoundMemoView=_noSoundMemoView;
@property(retain, nonatomic) UIView *nerdStatsOverlayView; // @synthesize nerdStatsOverlayView=_nerdStatsOverlayView;
@property(retain, nonatomic) UIView *paidContentView; // @synthesize paidContentView=_paidContentView;
@property(retain, nonatomic) UIView<YTCaptionViewProtocol> *captionOverlayView; // @synthesize captionOverlayView=_captionOverlayView;
@property(retain, nonatomic) YTOverflowMenuView *overflowMenuView; // @synthesize overflowMenuView=_overflowMenuView;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)spinnerDelayTimer;
- (void)updateRemoteScreenLabel;
- (void)setOverlayShadowHeight;
- (void)updateCollapsedWatermarkViewVisibility;
- (void)setPlayPauseReplayState:(long long)arg1;
- (id)styledErrorLabel;
- (id)playerButtonWithImage:(id)arg1 selectedImage:(id)arg2 accessibilityLabel:(id)arg3 verticalContentPadding:(double)arg4 minHitTargetSize:(double)arg5;
- (id)playerButtonWithImage:(id)arg1 selectedImage:(id)arg2 accessibilityLabel:(id)arg3;
- (void)onPlayPauseButton;
- (void)layoutTopBarButtonsWithRTLHandling:(_Bool)arg1;
- (id)skipPreviousImage;
- (id)skipNextImage;
- (double)playPauseWidthHeight;
- (double)previousNextButtonPadding;
- (void)setPlayerViewLayout:(int)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isPrimaryViewTouch:(id)arg1;
- (void)setInfoCardTeaserVisible:(_Bool)arg1;
- (void)animateInfoCardButtonVisible:(_Bool)arg1;
- (void)setInfoCardButtonHidden:(_Bool)arg1;
- (void)removeDidPressNextTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressPreviousTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressReplayTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressPauseTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressPlayTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressSpinnerTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressOverflowTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidTapBackgroundTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressNextTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressPreviousTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressReplayTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressPauseTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressPlayTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressSpinnerTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressOverflowTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidTapBackgroundTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) _Bool showDimmedNextPreviousButtons;
@property(readonly, nonatomic) double captionBottomPadding;
- (id)createSpinner;
- (id)overlayPauseButtonImage;
- (id)overlayPlayButtonImage;
- (_Bool)suppressRightSideOverlay;
- (id)topRightButtons;
- (double)topButtonsXOffset;
- (void)updateCaptionBottomPadding;
- (void)resetPlaceholder;
- (void)setPlaceholder:(id)arg1 withAlpha:(double)arg2;
- (void)setPlaceholder:(id)arg1;
- (void)setCaptionsVisible:(_Bool)arg1;
- (void)setNextPreviousButtonsVisible:(_Bool)arg1;
- (void)setReplayButtonVisible:(_Bool)arg1;
- (void)setPlayPauseButtonVisible:(_Bool)arg1;
- (void)setPlaybackRouteButtonVisible:(_Bool)arg1;
- (void)setOverflowButtonVisible:(_Bool)arg1;
- (void)setBackgroundVisible:(_Bool)arg1;
- (void)setNextButtonEnabled:(_Bool)arg1;
- (void)setPreviousButtonEnabled:(_Bool)arg1;
- (void)hideError;
- (void)showErrorWithMessage:(id)arg1 allowTapToRetry:(_Bool)arg2 showTapToRetryMessage:(_Bool)arg3 showErrorBackground:(_Bool)arg4;
- (void)showReplayButton;
- (void)showPauseButton;
- (void)showPlayButton;
- (void)hideSyncSpinner;
- (void)showSyncSpinner;
- (_Bool)isSpinnerHidden;
- (void)hideSpinner;
- (void)showSpinnerAfterDelay:(double)arg1;
- (void)showSpinner;
- (void)hidePlaybackControls;
- (void)setSpinnerInteractionEnabled:(_Bool)arg1;
- (void)setExternalPlaybackLabel:(id)arg1;
- (void)setRemoteScreenName:(id)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
