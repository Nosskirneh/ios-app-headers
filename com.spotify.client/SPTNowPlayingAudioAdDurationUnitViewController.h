//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingAdDurationUnitViewModelDelegate-Protocol.h"
#import "SPTNowPlayingAdUnitViewController-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingDurationViewV2DataSource-Protocol.h"

@class NSString, SPTNowPlayingAdDurationUnitViewModel, SPTNowPlayingDurationViewV2, SPTTheme, UIView;
@protocol SPTNowPlayingContainingViewController;

@interface SPTNowPlayingAudioAdDurationUnitViewController : UIViewController <SPTNowPlayingDurationViewV2DataSource, SPTNowPlayingAdDurationUnitViewModelDelegate, SPTNowPlayingContainedViewController, SPTNowPlayingAdUnitViewController>
{
    SPTTheme *_theme;
    UIView *_animationView;
    SPTNowPlayingAdDurationUnitViewModel *_viewModel;
    SPTNowPlayingDurationViewV2 *_durationView;
}

@property(retain, nonatomic) SPTNowPlayingDurationViewV2 *durationView; // @synthesize durationView=_durationView;
@property(readonly, nonatomic) SPTNowPlayingAdDurationUnitViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)trackPositionDidChange;
- (void)reloadViewControllerWithAdEntity:(id)arg1;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(id)arg1;
- (id)nowPlayingDurationView:(id)arg1 timeTakenTextForSliderValue:(float)arg2;
- (id)nowPlayingDurationView:(id)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)setupConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 animationView:(id)arg2 durationViewModel:(id)arg3;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

