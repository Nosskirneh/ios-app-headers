//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ANGVideoQualityButtonDelegate-Protocol.h"
#import "ANGVideoViewDelegate-Protocol.h"

@class ANGGradientBackgroundView, ANGSong, ANGVideoQualityButtonView, ANGVideoView, MCProgressBarView, NSString, NSTimer, OBSlider, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface ANGVideoPlayerFullscreenView : UIView <ANGVideoQualityButtonDelegate, ANGVideoViewDelegate>
{
    _Bool _controlsAreShown;
    _Bool _isScrubbing;
    _Bool _videoQualitySelectorShown;
    _Bool _didDetectRotationError;
    UIImageView *_activityIndicator;
    UIButton *_exitFullScreenButton;
    ANGVideoView *_videoPlayerView;
    UITapGestureRecognizer *_gestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    NSTimer *_hideControlsTimer;
    ANGSong *_currentVideo;
    long long _currentOrientation;
    UIButton *_playButton;
    UIButton *_nextButton;
    OBSlider *_playProgressView;
    MCProgressBarView *_downloadProgressView;
    UILabel *_elapsedTimeLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_titleLabel;
    UIButton *_likeButton;
    ANGGradientBackgroundView *_topGradientView;
    ANGGradientBackgroundView *_bottomGradientView;
    UIImageView *_likesImage;
    UIImageView *_playsImage;
    UILabel *_likesLabel;
    UILabel *_playsLabel;
    UIButton *_shareButton;
    ANGVideoQualityButtonView *_videoQualityButton;
}

+ (void)checkForRotationError;
+ (void)updateForDeviceOrientation:(long long)arg1;
+ (void)hideCurrentPlayerToView:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)hideCurrentPlayerToView:(id)arg1;
+ (void)showFullScreenPlayerInView:(id)arg1 fromRect:(struct CGRect)arg2 controlsInitiallyShown:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)fullScreenPlayerShowing;
@property(nonatomic) _Bool didDetectRotationError; // @synthesize didDetectRotationError=_didDetectRotationError;
@property(nonatomic) _Bool videoQualitySelectorShown; // @synthesize videoQualitySelectorShown=_videoQualitySelectorShown;
@property(retain, nonatomic) ANGVideoQualityButtonView *videoQualityButton; // @synthesize videoQualityButton=_videoQualityButton;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *playsLabel; // @synthesize playsLabel=_playsLabel;
@property(retain, nonatomic) UILabel *likesLabel; // @synthesize likesLabel=_likesLabel;
@property(retain, nonatomic) UIImageView *playsImage; // @synthesize playsImage=_playsImage;
@property(retain, nonatomic) UIImageView *likesImage; // @synthesize likesImage=_likesImage;
@property(retain, nonatomic) ANGGradientBackgroundView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) ANGGradientBackgroundView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(retain, nonatomic) MCProgressBarView *downloadProgressView; // @synthesize downloadProgressView=_downloadProgressView;
@property(retain, nonatomic) OBSlider *playProgressView; // @synthesize playProgressView=_playProgressView;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(retain, nonatomic) ANGSong *currentVideo; // @synthesize currentVideo=_currentVideo;
@property(retain, nonatomic) NSTimer *hideControlsTimer; // @synthesize hideControlsTimer=_hideControlsTimer;
@property(nonatomic) _Bool controlsAreShown; // @synthesize controlsAreShown=_controlsAreShown;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) ANGVideoView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) UIButton *exitFullScreenButton; // @synthesize exitFullScreenButton=_exitFullScreenButton;
@property(retain, nonatomic) UIImageView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize)realSizeDidRotate;
- (void)hideControlsAnimated:(_Bool)arg1 hideStatusBar:(_Bool)arg2 force:(_Bool)arg3;
- (void)hideControls;
- (void)showControlsAnimated:(_Bool)arg1 fastAnimation:(_Bool)arg2;
- (double)shownAlphaForView:(id)arg1;
- (void)showControlsAnimated:(_Bool)arg1;
- (void)showControls;
- (void)toggleViewingMode;
- (void)toggleControls;
- (id)controlViews;
- (void)videoViewDidLoseVideo:(id)arg1;
- (void)videoViewDidAcquireVideo:(id)arg1 isReady:(_Bool)arg2;
- (void)refreshVideoView;
- (void)startHideControlsTimer;
- (void)removeHideControlsTimer;
- (void)refreshVideoStatus;
- (void)updateLikesAndPlays;
- (void)positionSubviews;
- (void)playPause;
- (void)playProgressSliderTouchDown;
- (void)playProgressSliderMoved;
- (void)updateDownloadProgress:(double)arg1 animated:(_Bool)arg2;
- (void)songDownloadAmountChanged:(id)arg1;
- (void)refreshSongTimeDisplay;
- (void)songPositionChanged:(id)arg1;
- (void)refreshLikeButtonImage;
- (void)likeSongAction;
- (void)shareAction:(id)arg1;
- (void)nextButtonPressed;
- (void)updateProgressViewStatus;
- (void)initializeView;
- (void)_hideFullscreenPlayerAnimated:(_Bool)arg1 toView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideFullscreenPlayerAnimated:(_Bool)arg1 toView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideFullscreenPlayerAnimated:(_Bool)arg1 toView:(id)arg2;
- (void)hideFullscreenPlayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateForDeviceOrientation:(long long)arg1;
- (void)qualityOptionsClosed;
- (void)qualityOptionsOpened;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
