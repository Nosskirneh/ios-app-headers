//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTBarOverlayViewController-Protocol.h"
#import "SPTNowPlayingModelDelegate-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTSnapshotBackgroundViewController-Protocol.h"

@class NSString, NSURL, SPTNavigationManager, SPTNowPlayingContainerIdleMonitor, SPTNowPlayingLogger, SPTNowPlayingModel, SPTNowPlayingScrollViewController, SPTPlayerState, SPTStatusBarToken, SPTTheme, UIView;
@protocol SPTNowPlayingContentContainingViewController, SPTNowPlayingTestManager, SPTPageContainer, SPTPlayer, SPTQueueEnabling, SPTQueueLogger;

@interface SPTNowPlayingToggleViewController : UIViewController <SPTNowPlayingModelObserver, SPTNowPlayingModelDelegate, SPTSnapshotBackgroundViewController, SPTPlayerObserver, SPTBarOverlayViewController, SPTPageController>
{
    _Bool _wasPlayingAd;
    _Bool _overlayHidden;
    SPTNowPlayingContainerIdleMonitor *_idleMonitor;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    SPTStatusBarToken *_statusBarToken;
    SPTTheme *_theme;
    SPTNavigationManager *_navigationManager;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingScrollViewController *_scrollViewController;
    UIView *_snapshotView;
    UIView *_overlayView;
    UIViewController<SPTNowPlayingContentContainingViewController> *_playerViewController;
    UIViewController<SPTQueueEnabling> *_queueViewController;
    id <SPTPlayer> _player;
    SPTPlayerState *_currentPlayerState;
    unsigned long long _toggleModeBeforeAd;
    SPTNowPlayingModel *_model;
}

@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(nonatomic) unsigned long long toggleModeBeforeAd; // @synthesize toggleModeBeforeAd=_toggleModeBeforeAd;
@property(nonatomic) _Bool wasPlayingAd; // @synthesize wasPlayingAd=_wasPlayingAd;
@property(retain, nonatomic) SPTPlayerState *currentPlayerState; // @synthesize currentPlayerState=_currentPlayerState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) UIViewController<SPTQueueEnabling> *queueViewController; // @synthesize queueViewController=_queueViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContentContainingViewController> *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) SPTNowPlayingScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(readonly, nonatomic) __weak id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTStatusBarToken *statusBarToken; // @synthesize statusBarToken=_statusBarToken;
@property(readonly, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTNowPlayingContainerIdleMonitor *idleMonitor; // @synthesize idleMonitor=_idleMonitor;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayout;
- (double)backgroundOverlayAlphaForCurrentVerticalPosition:(double)arg1;
- (id)colorForBackgroundOverlay;
- (void)addBackgroundSnapshotView:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)scrollViewForBarTransition;
- (_Bool)barViewControllerInteractiveTransitionEnabled:(id)arg1;
- (void)overlayWillDismissInteractively;
- (void)overlayWillPresentInteractively;
- (void)overlayWasShown;
- (void)overlayWasHidden;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)nowPlayingModel:(id)arg1 toggleModeDidChange:(unsigned long long)arg2 animated:(_Bool)arg3;
- (_Bool)nowPlayingModel:(id)arg1 canSwitchToToggleMode:(unsigned long long)arg2;
- (id)managedIdleMonitorReceivers;
- (_Bool)isShowsFormat;
- (_Bool)isPlayingAd;
- (void)restoreToggleModeAfterAd;
- (_Bool)isVisible;
- (void)updateToggleModeForAd;
- (void)restorePlayerToggleModeFromPlayerState:(id)arg1;
- (void)transitionToMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (void)refreshHomeIndicatorIfNeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 playerViewController:(id)arg2 queueViewController:(id)arg3 scrollViewController:(id)arg4 theme:(id)arg5 player:(id)arg6 navigationManager:(id)arg7 backgroundUnitProvider:(id)arg8 testManager:(id)arg9 logger:(id)arg10 queueLogger:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

