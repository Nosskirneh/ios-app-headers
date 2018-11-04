//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTCarouselBackgroundBlurDelegate.h"
#import "SPTNowPlayingAnimationViewProvider.h"
#import "SPTNowPlayingContainedViewController.h"
#import "SPTNowPlayingCoverArtControllerDelegate.h"
#import "SPTNowPlayingModelObserver.h"

@class NSString, SPTCarouselBackgroundBlurController, SPTNowPlayingCarouselContentUnitView, SPTNowPlayingCoverArtController, SPTNowPlayingLogger, SPTNowPlayingModel, SPTTheme, UIView, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingCarouselAreaViewController : UIViewController <SPTCarouselBackgroundBlurDelegate, SPTNowPlayingModelObserver, SPTNowPlayingCoverArtControllerDelegate, SPTNowPlayingAnimationViewProvider, SPTNowPlayingContainedViewController>
{
    SPTCarouselBackgroundBlurController *_blurController;
    id <SPTNowPlayingCarouselInteractionEventObserver> _interactionEventObserver;
    SPTNowPlayingModel *_model;
    SPTTheme *_theme;
    SPTNowPlayingLogger *_logger;
    SPTNowPlayingCoverArtController *_coverArtController;
    id <SPTUpsellManager> _upsellManager;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    id <SPTNowPlayingVideoManager> _nowPlayingVideoManager;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTAdsManager> _adsManager;
    id <SPTNowPlayingCarouselContentProviderRegistry> _carouselRegistry;
}

@property(readonly, nonatomic) id <SPTNowPlayingCarouselContentProviderRegistry> carouselRegistry; // @synthesize carouselRegistry=_carouselRegistry;
@property(readonly, nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTNowPlayingVideoManager> nowPlayingVideoManager; // @synthesize nowPlayingVideoManager=_nowPlayingVideoManager;
@property(retain, nonatomic) id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(nonatomic) __weak id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(retain, nonatomic) SPTNowPlayingCoverArtController *coverArtController; // @synthesize coverArtController=_coverArtController;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTNowPlayingCarouselInteractionEventObserver> interactionEventObserver; // @synthesize interactionEventObserver=_interactionEventObserver;
@property(nonatomic) __weak SPTCarouselBackgroundBlurController *blurController; // @synthesize blurController=_blurController;
- (void).cxx_destruct;
- (void)coverArtControllerDidDetectCoverArtTap:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)configureForOrientation:(long long)arg1;
@property(readonly, nonatomic) UIView *spt_nowPlayingCoverArtView;
- (void)shouldUpdateBlurConstituentForRelativePosition:(long long)arg1 toImage:(id)arg2 withURL:(id)arg3;
- (void)shouldSkipToDirection:(long long)arg1;
- (void)shouldUpdateOverlayRelativeIntensity:(double)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)notifyBlurAboutChange;
- (void)notifyCarouselWillDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)notifyCarouselDidAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 imageLoaderFactory:(id)arg2 theme:(id)arg3 logger:(id)arg4 upsellManager:(id)arg5 blurController:(id)arg6 videoSurfaceManager:(id)arg7 nowPlayingVideoManager:(id)arg8 carouselRegistry:(id)arg9 testManager:(id)arg10 adsManager:(id)arg11;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarButtonsView;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarLeftButton;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarView;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingCarouselContentUnitView *view; // @dynamic view;

@end

