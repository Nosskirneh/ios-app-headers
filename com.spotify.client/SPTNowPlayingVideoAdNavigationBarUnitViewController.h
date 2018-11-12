//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingAdPlayerObserver-Protocol.h"
#import "SPTNowPlayingAdUnitViewController-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"

@class NSString, SPTNowPlayingAdPlayerObservable, SPTNowPlayingMarqueeLabel, SPTTheme;
@protocol SPTNowPlayingContainingViewController, SPTNowPlayingVideoControlsVisibilityDelegate;

@interface SPTNowPlayingVideoAdNavigationBarUnitViewController : UIViewController <SPTNowPlayingAdPlayerObserver, SPTNowPlayingContainedViewController, SPTNowPlayingAdUnitViewController>
{
    id <SPTNowPlayingVideoControlsVisibilityDelegate> _visibilityDelegate;
    SPTTheme *_theme;
    SPTNowPlayingMarqueeLabel *_navigationBarLabel;
    double _animationDuration;
    SPTNowPlayingAdPlayerObservable *_observable;
}

@property(readonly, nonatomic) SPTNowPlayingAdPlayerObservable *observable; // @synthesize observable=_observable;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) SPTNowPlayingMarqueeLabel *navigationBarLabel; // @synthesize navigationBarLabel=_navigationBarLabel;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTNowPlayingVideoControlsVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
- (void).cxx_destruct;
- (void)nowPlayingAdStateDidChangeToTrack:(struct SPTNowPlayingTrack)arg1;
- (void)didTapVideoView:(id)arg1;
- (void)setShowsVideoControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadViewControllerWithAdEntity:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)setupConstraints;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 playerObservable:(id)arg2;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

