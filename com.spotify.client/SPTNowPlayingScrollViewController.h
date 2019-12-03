//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContainerIdleMonitorReceiving-Protocol.h"
#import "SPTNowPlayingContentViewControllerObserver-Protocol.h"
#import "SPTNowPlayingScrollViewModelDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class GLUEGradientView, NSLayoutConstraint, NSNotificationCenter, NSString, SPTNowPlayingCarouselBackgroundBlurController, SPTNowPlayingCarouselBackgroundBlurView, SPTNowPlayingContainerIdleMonitor, SPTNowPlayingContentCornersView, SPTNowPlayingScrollViewModel, SPTTheme, UICollectionView, UICollectionViewFlowLayout;
@protocol SPTNowPlayingContentContainingViewController;

@interface SPTNowPlayingScrollViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SPTNowPlayingScrollViewModelDelegate, SPTNowPlayingContentViewControllerObserver, SPTNowPlayingContainerIdleMonitorReceiving>
{
    _Bool _isShowingScrollComponents;
    _Bool _scrollViewIsAnimating;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UIViewController<SPTNowPlayingContentContainingViewController> *_nowPlayingViewController;
    UIViewController *_backgroundViewController;
    NSLayoutConstraint *_npvHeightConstraint;
    SPTNowPlayingScrollViewModel *_scrollViewModel;
    SPTTheme *_theme;
    NSNotificationCenter *_notificationCenter;
    SPTNowPlayingContainerIdleMonitor *_idleMonitor;
    SPTNowPlayingCarouselBackgroundBlurView *_backgroundView;
    SPTNowPlayingCarouselBackgroundBlurController *_blurController;
    GLUEGradientView *_scrollBackgroundGradientLayer;
    SPTNowPlayingContentCornersView *_contentCornersView;
}

@property(retain, nonatomic) SPTNowPlayingContentCornersView *contentCornersView; // @synthesize contentCornersView=_contentCornersView;
@property(retain, nonatomic) GLUEGradientView *scrollBackgroundGradientLayer; // @synthesize scrollBackgroundGradientLayer=_scrollBackgroundGradientLayer;
@property(retain, nonatomic) SPTNowPlayingCarouselBackgroundBlurController *blurController; // @synthesize blurController=_blurController;
@property(retain, nonatomic) SPTNowPlayingCarouselBackgroundBlurView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool scrollViewIsAnimating; // @synthesize scrollViewIsAnimating=_scrollViewIsAnimating;
@property(nonatomic) _Bool isShowingScrollComponents; // @synthesize isShowingScrollComponents=_isShowingScrollComponents;
@property(nonatomic) __weak SPTNowPlayingContainerIdleMonitor *idleMonitor; // @synthesize idleMonitor=_idleMonitor;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTNowPlayingScrollViewModel *scrollViewModel; // @synthesize scrollViewModel=_scrollViewModel;
@property(retain, nonatomic) NSLayoutConstraint *npvHeightConstraint; // @synthesize npvHeightConstraint=_npvHeightConstraint;
@property(readonly, nonatomic) UIViewController *backgroundViewController; // @synthesize backgroundViewController=_backgroundViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContentContainingViewController> *nowPlayingViewController; // @synthesize nowPlayingViewController=_nowPlayingViewController;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (struct CGSize)sizeForItemAtIndex:(unsigned long long)arg1;
- (void)updateCornerRadius;
- (void)updateLayout;
- (double)viewWidth;
- (double)nowPlayingViewHeight;
- (double)viewHeight;
- (void)resetIdleState;
- (void)applicationDidBecomeActive;
- (void)removeApplicationStateObservers;
- (void)addApplicationStateObservers;
- (void)contentViewControllerDidUpdateOverlayAlpha:(double)arg1;
- (void)contentViewControllerDidReloadData:(id)arg1;
- (void)nowPlayingScrollViewModelDidChangeBannerStatus:(id)arg1;
- (void)nowPlayingScrollViewModelDidChangeScrollEnabledStatus:(id)arg1;
- (void)nowPlayingScrollViewModel:(id)arg1 didMoveToRelativeTrack:(id)arg2 withDifferentProviders:(_Bool)arg3;
- (void)nowPlayingScrollViewModelDidLoadProviderContent:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)updateSafeAreaInsets;
- (void)notifyFullyShownComponents;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)refreshScrollBackgroundGradientVisibility;
- (void)reloadCollectionViewData;
- (void)animateScrollPeekIfNeeded:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)setupNowPlayingViewControllerInView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupCollectionViewContentInset;
- (void)updateNPVSize;
- (void)setupBackgroundConstraints;
- (void)setupBackgroundViews;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithNowPlayingViewController:(id)arg1 scrollViewModel:(id)arg2 theme:(id)arg3 notificationCenter:(id)arg4 backgroundViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

