//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class OBGradientView, UIButton, UILabel, UIView;

@interface _TtC10SoundCloud29InlayFullScreenViewController : UIViewController
{
    // Error parsing type: , name: videoAd
    // Error parsing type: , name: playerLayer
    // Error parsing type: , name: ctaAction
    // Error parsing type: , name: whyAdsAction
    // Error parsing type: , name: moatTracker
    // Error parsing type: , name: inlayTrackerContainingView
    // Error parsing type: , name: shrinkScreenButton
    // Error parsing type: , name: ctaButton
    // Error parsing type: , name: playButton
    // Error parsing type: , name: pauseOverlay
    // Error parsing type: , name: whyAdsButton
    // Error parsing type: , name: videoTitleLabel
    // Error parsing type: , name: topOverlay
    // Error parsing type: , name: fadeableControls.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didFinishPlaying;
- (void)didTapVideo;
- (void)didPressWhyAds;
- (void)didPressCta:(id)arg1;
- (void)didPressPlayButton:(id)arg1;
- (void)didPressShrinkScreenButton:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) OBGradientView *topOverlay; // @synthesize topOverlay;
@property(nonatomic, retain) UILabel *videoTitleLabel; // @synthesize videoTitleLabel;
@property(nonatomic, retain) UIButton *whyAdsButton; // @synthesize whyAdsButton;
@property(nonatomic, retain) UIView *pauseOverlay; // @synthesize pauseOverlay;
@property(nonatomic, retain) UIButton *playButton; // @synthesize playButton;
@property(nonatomic, retain) UIButton *ctaButton; // @synthesize ctaButton;
@property(nonatomic, retain) UIButton *shrinkScreenButton; // @synthesize shrinkScreenButton;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
@property(nonatomic, readonly) long long preferredStatusBarUpdateAnimation;

@end

