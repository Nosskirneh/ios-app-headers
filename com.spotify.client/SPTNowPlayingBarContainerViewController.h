//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BMVideoSurfaceDelegate-Protocol.h"
#import "SPTBarInteractiveTransitionParticipant-Protocol.h"
#import "SPTNowPlayingDurationUnitViewModelDelegate-Protocol.h"
#import "SPTNowPlayingDurationViewV2DataSource-Protocol.h"
#import "SPTNowPlayingTestManagerObserver-Protocol.h"
#import "SPTNowPlayingUnitProviderObserver-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSString, NSURL, SPTNowPlayingBarContentUnitProvider, SPTNowPlayingBarLeftAccessoryUnitProvider, SPTNowPlayingCarouselBackgroundBlurController, SPTNowPlayingDurationViewV2, SPTPlayerTrack, SPTTheme, UIView;
@protocol BMVideoSurface, BMVideoSurfaceManager, SPTNowPlayingDurationUnitViewModel, SPTNowPlayingManager, SPTNowPlayingTestManager, SPTPageContainer, SPTPlayer;

@interface SPTNowPlayingBarContainerViewController : UIViewController <BMVideoSurfaceDelegate, SPTNowPlayingUnitProviderObserver, SPTPlayerObserver, SPTNowPlayingDurationViewV2DataSource, SPTNowPlayingDurationUnitViewModelDelegate, SPTNowPlayingTestManagerObserver, SPTBarInteractiveTransitionParticipant, SPTPageController>
{
    id <SPTNowPlayingManager> _nowPlayingManager;
    id <BMVideoSurfaceManager> _videoSurfaceManager;
    SPTNowPlayingBarContentUnitProvider *_contentUnitProvider;
    SPTNowPlayingBarLeftAccessoryUnitProvider *_leftAccessoryUnitProvider;
    UIView *_animationView;
    id <SPTNowPlayingDurationUnitViewModel> _viewModel;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingDurationViewV2 *_durationView;
    SPTTheme *_theme;
    id <SPTPlayer> _player;
    NSArray *_layoutConstraints;
    SPTNowPlayingCarouselBackgroundBlurController *_blurController;
    UIView *_backgroundView;
    UIView *_bottomSeparatorView;
    UIView<BMVideoSurface> *_videoSurface;
    SPTPlayerTrack *_currentTrack;
    UIView *_currentLeftAccessoryView;
    double _currentLeftAccessoryWidth;
}

@property(nonatomic) double currentLeftAccessoryWidth; // @synthesize currentLeftAccessoryWidth=_currentLeftAccessoryWidth;
@property(retain, nonatomic) UIView *currentLeftAccessoryView; // @synthesize currentLeftAccessoryView=_currentLeftAccessoryView;
@property(retain, nonatomic) SPTPlayerTrack *currentTrack; // @synthesize currentTrack=_currentTrack;
@property(retain, nonatomic) UIView<BMVideoSurface> *videoSurface; // @synthesize videoSurface=_videoSurface;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SPTNowPlayingCarouselBackgroundBlurController *blurController; // @synthesize blurController=_blurController;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingDurationViewV2 *durationView; // @synthesize durationView=_durationView;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTNowPlayingDurationUnitViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(readonly, nonatomic) SPTNowPlayingBarLeftAccessoryUnitProvider *leftAccessoryUnitProvider; // @synthesize leftAccessoryUnitProvider=_leftAccessoryUnitProvider;
@property(readonly, nonatomic) SPTNowPlayingBarContentUnitProvider *contentUnitProvider; // @synthesize contentUnitProvider=_contentUnitProvider;
@property(readonly, nonatomic) id <BMVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
- (void).cxx_destruct;
- (void)nowPlayingTestManagerDidEnableBarImprovements:(id)arg1;
- (struct CGSize)preferredContentSize;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)addViewController:(id)arg1;
- (void)provider:(id)arg1 willReplaceViewController:(id)arg2 with:(id)arg3;
- (void)videoSurfaceDidChangeVideoRect:(id)arg1;
- (void)videoSurfaceDidDetachVideo:(id)arg1;
- (void)videoSurfaceDidAttachVideo:(id)arg1;
- (_Bool)shouldShowBar;
- (id)backgroundViewForBarTransition:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)forceUpdateConstraints;
- (void)updateAccessoryView;
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(id)arg1;
- (id)nowPlayingDurationView:(id)arg1 timeTakenTextForSliderValue:(float)arg2;
- (id)nowPlayingDurationView:(id)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (void)trackMetadataDidFinishUpdating;
- (void)trackMetadataDidMove:(_Bool)arg1;
- (void)trackPositionDidChange;
- (_Bool)shouldShowVideoSurface;
- (void)updateViewConstraints;
- (void)setupBackgroundView;
- (void)setupBottomSeparatorView;
- (void)setupDurationView;
- (void)setupVideoSurface;
- (void)setupSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 nowPlayingManager:(id)arg2 videoSurfaceManager:(id)arg3 contentUnitProvider:(id)arg4 leftAccessoryUnitProvider:(id)arg5 animationView:(id)arg6 viewModel:(id)arg7 player:(id)arg8 testManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

