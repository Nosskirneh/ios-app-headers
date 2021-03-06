//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerItem, AVPlayerLayer, OBGradientView, UIActivityIndicatorView, UIButton;

@interface _TtC10SoundCloud16InlayVideoAdView : UIView
{
    // Error parsing type: , name: kOutputVolumeKeyPath
    // Error parsing type: , name: hasPlayedToEndTime
    // Error parsing type: , name: shouldResumeUserPlayQueueTrack
    // Error parsing type: , name: videoLayer
    // Error parsing type: , name: videoItem
    // Error parsing type: , name: playbackService
    // Error parsing type: , name: moatTracker
    // Error parsing type: , name: videoAdTagger
    // Error parsing type: , name: videoInlayAdTagger
    // Error parsing type: , name: richMediaStreamEventTagger
    // Error parsing type: , name: application
    // Error parsing type: , name: audioSession
    // Error parsing type: , name: isAdPaused
    // Error parsing type: , name: presentingViewController
    // Error parsing type: , name: ctaAction
    // Error parsing type: , name: whyAdsAction
    // Error parsing type: , name: impressionAction
    // Error parsing type: , name: impressionObserverToken
    // Error parsing type: , name: quartileObserverToken
    // Error parsing type: , name: playbackObserverToken
    // Error parsing type: , name: isObserving
    // Error parsing type: , name: videoAd
    // Error parsing type: , name: fullScreenAnimator.storage
    // Error parsing type: , name: pauseOverlay
    // Error parsing type: , name: videoWrapperView
    // Error parsing type: , name: fullscreenButton
    // Error parsing type: , name: muteButton
    // Error parsing type: , name: playButton
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: topOverlay
    // Error parsing type: , name: kMuteButtonSize
    // Error parsing type: , name: kFullScreenButtonSize
    // Error parsing type: , name: kPlayButtonSize
    // Error parsing type: , name: videoAdDuration
    // Error parsing type: , name: soundIconMuted
    // Error parsing type: , name: soundIconUnmuted
    // Error parsing type: , name: playButtonImage
    // Error parsing type: , name: fullscreenButtonImage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didPressFullScreenButton;
- (void)didTapVideoWithGesture:(id)arg1;
- (void)toggleMute;
- (void)didPressPlayButton;
- (void)didPlayToEndTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)muteVideo;
- (void)pause;
- (void)layoutSubviews;
- (void)removeObservers;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) OBGradientView *topOverlay; // @synthesize topOverlay;
@property(nonatomic, retain) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator;
@property(nonatomic, retain) UIButton *playButton; // @synthesize playButton;
@property(nonatomic, retain) UIButton *muteButton; // @synthesize muteButton;
@property(nonatomic, retain) UIButton *fullscreenButton; // @synthesize fullscreenButton;
@property(nonatomic, retain) UIView *videoWrapperView; // @synthesize videoWrapperView;
@property(nonatomic, retain) UIView *pauseOverlay; // @synthesize pauseOverlay;
@property(nonatomic, retain) AVPlayerItem *videoItem; // @synthesize videoItem;
@property(nonatomic, retain) AVPlayerLayer *videoLayer; // @synthesize videoLayer;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

@end

