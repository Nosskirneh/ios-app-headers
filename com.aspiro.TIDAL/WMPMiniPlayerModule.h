//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSNumber, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIProgressView, UIView, UIVisualEffectView;
@protocol WMPPlaybackDelegate;

@interface WMPMiniPlayerModule : UIViewController
{
    UIImageView *_imageView;
    id <WMPPlaybackDelegate> _playbackDelegate;
    UIProgressView *_progressView;
    UIView *_playerButtonsView;
    UILabel *_artistLabel;
    UILabel *_titleLabel;
    UIButton *_prevButton;
    UIButton *_playButton;
    UIButton *_nextButton;
    UIButton *_shuffleButton;
    UIButton *_repeatButton;
    UIButton *_playQueueButton;
    UIImageView *_hifiImageView;
    NSLayoutConstraint *_imageModuleWidthConstraint;
    UIActivityIndicatorView *_activityIndicatorView;
    NSNumber *_currentTrackDuration;
    UIVisualEffectView *_blurryBackgroundView;
}

+ (id)getInstance;
@property(retain, nonatomic) UIVisualEffectView *blurryBackgroundView; // @synthesize blurryBackgroundView=_blurryBackgroundView;
@property(retain, nonatomic) NSNumber *currentTrackDuration; // @synthesize currentTrackDuration=_currentTrackDuration;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak NSLayoutConstraint *imageModuleWidthConstraint; // @synthesize imageModuleWidthConstraint=_imageModuleWidthConstraint;
@property(nonatomic) __weak UIImageView *hifiImageView; // @synthesize hifiImageView=_hifiImageView;
@property(nonatomic) __weak UIButton *playQueueButton; // @synthesize playQueueButton=_playQueueButton;
@property(nonatomic) __weak UIButton *repeatButton; // @synthesize repeatButton=_repeatButton;
@property(nonatomic) __weak UIButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak UIButton *prevButton; // @synthesize prevButton=_prevButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(nonatomic) __weak UIView *playerButtonsView; // @synthesize playerButtonsView=_playerButtonsView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <WMPPlaybackDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)handleSwipeFrom:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshForwardButton:(id)arg1;
- (void)refreshRepeatButton;
- (void)refreshShuffleButton:(id)arg1;
- (void)didTapQueueButton:(id)arg1;
- (void)repeatButtonDidPress:(id)arg1;
- (void)shuffleButtonDidPress:(id)arg1;
- (void)playButtonDidPress:(id)arg1;
- (void)nextButtonDidPress:(id)arg1;
- (void)backButtonDidPress:(id)arg1;
- (void)updateScrubber:(float)arg1;
- (void)updatePlayButton;
- (void)updateNextButton;
- (void)updateImageWidthConstraint;
- (void)showEmptyNowPlayingView;
- (void)updateNowPlayingMediaItem:(id)arg1;
- (void)refreshButtonsStates;
- (void)setHifiImageViewState:(long long)arg1;
- (void)handlePlaybackQualityChangedNotification:(id)arg1;
- (void)elapsedTimeNotification:(id)arg1;
- (void)currentMediaItemNotification:(id)arg1;
- (void)playbackChangedNotification:(id)arg1;
- (void)playQueueDidChangeNotification:(id)arg1;
- (void)updateUserInteractionsForPlayerButtons:(_Bool)arg1;
- (_Bool)isAnimatorInProgress;
- (void)hideProgressAnimator;
- (void)showProgressAnimator;
- (void)setupBlurryBackgroundView;
- (void)configureIcons;
- (void)viewDidLoad;
- (void)dealloc;

@end

