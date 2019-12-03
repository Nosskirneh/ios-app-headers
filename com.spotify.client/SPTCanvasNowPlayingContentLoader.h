//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasContentLayerViewControllerViewModelLoadDelegate-Protocol.h"
#import "SPTCanvasNowPlayingContentReloaderObserver-Protocol.h"
#import "SPTCanvasNowPlayingViewContentLoader-Protocol.h"
#import "SPTCanvasNowPlayingViewStateObserver-Protocol.h"

@class NSCache, NSMapTable, NSString, SPTCanvasContentLayerViewControllerViewModelFactory, SPTCanvasForceArtworkManager, SPTCanvasNowPlayingContentLoaderTracker, SPTCanvasNowPlayingContentReloader, SPTCanvasNowPlayingViewState, SPTCanvasTestManager;
@protocol SPTCanvasNowPlayingViewContentLoaderDelegate, SPTCanvasTrackChecker;

@interface SPTCanvasNowPlayingContentLoader : NSObject <SPTCanvasNowPlayingViewStateObserver, SPTCanvasContentLayerViewControllerViewModelLoadDelegate, SPTCanvasNowPlayingContentReloaderObserver, SPTCanvasNowPlayingViewContentLoader>
{
    id <SPTCanvasNowPlayingViewContentLoaderDelegate> delegate;
    id <SPTCanvasTrackChecker> _canvasTrackChecker;
    SPTCanvasNowPlayingContentReloader *_contentReloader;
    SPTCanvasNowPlayingContentLoaderTracker *_contentLoaderTracker;
    SPTCanvasNowPlayingViewState *_nowPlayingState;
    SPTCanvasContentLayerViewControllerViewModelFactory *_viewModelFactory;
    SPTCanvasTestManager *_testManager;
    SPTCanvasForceArtworkManager *_forceArtworkManager;
    NSMapTable *_viewControllers;
    NSCache *_preloadedModels;
    NSCache *_reloadingModels;
}

@property(retain, nonatomic) NSCache *reloadingModels; // @synthesize reloadingModels=_reloadingModels;
@property(retain, nonatomic) NSCache *preloadedModels; // @synthesize preloadedModels=_preloadedModels;
@property(retain, nonatomic) NSMapTable *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(readonly, nonatomic) SPTCanvasForceArtworkManager *forceArtworkManager; // @synthesize forceArtworkManager=_forceArtworkManager;
@property(readonly, nonatomic) SPTCanvasTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTCanvasContentLayerViewControllerViewModelFactory *viewModelFactory; // @synthesize viewModelFactory=_viewModelFactory;
@property(readonly, nonatomic) SPTCanvasNowPlayingViewState *nowPlayingState; // @synthesize nowPlayingState=_nowPlayingState;
@property(readonly, nonatomic) SPTCanvasNowPlayingContentLoaderTracker *contentLoaderTracker; // @synthesize contentLoaderTracker=_contentLoaderTracker;
@property(readonly, nonatomic) SPTCanvasNowPlayingContentReloader *contentReloader; // @synthesize contentReloader=_contentReloader;
@property(readonly, nonatomic) id <SPTCanvasTrackChecker> canvasTrackChecker; // @synthesize canvasTrackChecker=_canvasTrackChecker;
@property(nonatomic) __weak id <SPTCanvasNowPlayingViewContentLoaderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)contentNeedsReloadForTrack:(id)arg1;
- (void)didFailToRenderViewModel:(id)arg1;
- (void)didFailToLoadViewModel:(id)arg1 withError:(id)arg2;
- (void)didLoadViewModel:(id)arg1;
- (void)willLoadViewModel:(id)arg1;
- (void)nowPlayingViewWillDisappear;
- (void)nowPlayingViewWillAppear;
- (void)preloadCanvasViewControllerViewModelForTrack:(id)arg1;
- (id)createCanvasViewControllerViewModelForTrack:(id)arg1 usingCanvasModel:(id)arg2;
- (id)createCanvasViewControllerViewModelForTrack:(id)arg1;
- (id)canvasViewControllerViewModelForTrack:(id)arg1;
- (void)removeCanvasViewController:(id)arg1 fromCanvasCell:(id)arg2;
- (void)addCanvasViewController:(id)arg1 toCanvasCell:(id)arg2 usingContainerViewController:(id)arg3;
- (void)didEndDisplayCanvasForTrack:(id)arg1 usingCanvasCell:(id)arg2 containerViewController:(id)arg3;
- (void)willDisplayCanvasForTrack:(id)arg1 usingCanvasCell:(id)arg2 containerViewController:(id)arg3;
- (void)configureCanvasForTrack:(id)arg1 usingCanvasCell:(id)arg2;
- (_Bool)canLoadCanvasForTrack:(id)arg1;
- (void)dealloc;
- (id)initWithCanvasTrackChecker:(id)arg1 viewModelFactory:(id)arg2 contentReloader:(id)arg3 contentLoaderTracker:(id)arg4 nowPlayingState:(id)arg5 testManager:(id)arg6 forceArtworkManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

