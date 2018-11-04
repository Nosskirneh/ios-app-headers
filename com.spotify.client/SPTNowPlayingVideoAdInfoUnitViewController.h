//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingAdPlayerObserver.h"
#import "SPTNowPlayingAdUnitViewController.h"
#import "SPTNowPlayingContainedViewController.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, NSString, NSURL, SPTNowPlayingAdPlayerObservable, SPTTheme, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingVideoAdInfoUnitViewController : UIViewController <SPTNowPlayingAdPlayerObserver, SPTNowPlayingContainedViewController, SPTNowPlayingAdUnitViewController>
{
    _Bool _verticalVideo;
    UIViewController<SPTNowPlayingContainingViewController> *container;
    id <SPTNowPlayingVideoControlsVisibilityDelegate> _visibilityDelegate;
    GLUELabel *_titleLabel;
    GLUEButton *_actionButton;
    GLUEButton *_skipButton;
    SPTTheme *_theme;
    id <GLUETheme> _glueTheme;
    id <SPTAdsManager> _adsManager;
    NSURL *_clickthroughURL;
    unsigned long long _skipDelaySeconds;
    NSLayoutConstraint *_actionButtonTopConstraintWithLabel;
    NSLayoutConstraint *_actionButtonTopConstraintNoLabel;
    double _animationDuration;
    SPTNowPlayingAdPlayerObservable *_observer;
}

@property(nonatomic) _Bool verticalVideo; // @synthesize verticalVideo=_verticalVideo;
@property(readonly, nonatomic) SPTNowPlayingAdPlayerObservable *observer; // @synthesize observer=_observer;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSLayoutConstraint *actionButtonTopConstraintNoLabel; // @synthesize actionButtonTopConstraintNoLabel=_actionButtonTopConstraintNoLabel;
@property(retain, nonatomic) NSLayoutConstraint *actionButtonTopConstraintWithLabel; // @synthesize actionButtonTopConstraintWithLabel=_actionButtonTopConstraintWithLabel;
@property(nonatomic) unsigned long long skipDelaySeconds; // @synthesize skipDelaySeconds=_skipDelaySeconds;
@property(retain, nonatomic) NSURL *clickthroughURL; // @synthesize clickthroughURL=_clickthroughURL;
@property(readonly, nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) __weak SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) GLUEButton *skipButton; // @synthesize skipButton=_skipButton;
@property(readonly, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SPTNowPlayingVideoControlsVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container; // @synthesize container;
- (void).cxx_destruct;
- (void)nowPlayingAdStateDidChangeToTrack:(struct SPTNowPlayingTrack)arg1;
- (void)nowPlayingAdDisplayLinkFiredWithPlayerState:(id)arg1 track:(struct SPTNowPlayingTrack)arg2;
- (void)didTapVideoView:(id)arg1;
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadViewControllerWithAdEntity:(id)arg1;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (void)updateSkipCountdownString:(int)arg1;
- (void)setupSkipButtonWithAnimation:(_Bool)arg1;
- (void)skipButtonTapped;
- (void)didTapActionButton;
- (void)configureSkipButtonWithEntity:(id)arg1;
- (void)configureActionButtonWithEntity:(id)arg1;
- (void)configureTitleLabelWithEntity:(id)arg1;
- (void)configureSubviewsWithEntity:(id)arg1;
- (void)setupConstraints;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithAdManager:(id)arg1 playerObservable:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

