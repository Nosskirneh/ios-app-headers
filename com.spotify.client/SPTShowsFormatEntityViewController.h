//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTBarButtonItemManagerObserver-Protocol.h"
#import "SPTContextMenuPresenterDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTShareScreenshotObserverManagerDataSource-Protocol.h"
#import "SPTShareableContext-Protocol.h"
#import "SPTShowsFormatEntityViewModelDelegate-Protocol.h"

@class NSMutableArray, NSString, NSURL, SPTEntityHeaderViewController, SPTProgressView, SPTShareScreenshotObserverManager, SPTShowsFormatEntityHeaderContentViewController, SPTShowsFormatEntityView, SPTShowsFormatEntityViewDataSource, SPTShowsFormatEntityViewDelegate, SPTShowsFormatEntityViewModel, SPTShowsFormatLogger;
@protocol SPContextMenuFeature, SPTAlertController, SPTBarButtonItemManager, SPTCollectionPlatformTestManager, SPTContextMenuPresenter, SPTImageLoaderFactory, SPTPageContainer, SPTPodcastContextMenuProvider, SPTShareFeature, SPTShowsFormatVideoContextMenuProvider;

@interface SPTShowsFormatEntityViewController : UIViewController <SPTBarButtonItemManagerObserver, SPTShowsFormatEntityViewModelDelegate, SPTContextMenuPresenterDelegate, SPTShareableContext, SPTShareScreenshotObserverManagerDataSource, SPTPageController>
{
    _Bool _contextAwareSharingEnabled;
    _Bool _allowsScreenshots;
    SPTShowsFormatEntityViewModel *_viewModel;
    SPTShowsFormatEntityViewDataSource *_viewDataSource;
    SPTShowsFormatEntityViewDelegate *_viewDelegate;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    SPTShowsFormatLogger *_logger;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    id <SPTShowsFormatVideoContextMenuProvider> _videoContextMenuProvider;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTShareFeature> _shareFeature;
    SPTShareScreenshotObserverManager *_screenshotShareObserverManager;
    SPTEntityHeaderViewController *_headerViewController;
    SPTShowsFormatEntityHeaderContentViewController *_headerContentViewController;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    SPTProgressView *_progressView;
    NSMutableArray *_pendingBlocksAfterDataIsLoaded;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) NSMutableArray *pendingBlocksAfterDataIsLoaded; // @synthesize pendingBlocksAfterDataIsLoaded=_pendingBlocksAfterDataIsLoaded;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) SPTShowsFormatEntityHeaderContentViewController *headerContentViewController; // @synthesize headerContentViewController=_headerContentViewController;
@property(retain, nonatomic) SPTEntityHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) _Bool allowsScreenshots; // @synthesize allowsScreenshots=_allowsScreenshots;
@property(retain, nonatomic) SPTShareScreenshotObserverManager *screenshotShareObserverManager; // @synthesize screenshotShareObserverManager=_screenshotShareObserverManager;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) _Bool contextAwareSharingEnabled; // @synthesize contextAwareSharingEnabled=_contextAwareSharingEnabled;
@property(readonly, nonatomic) id <SPTShowsFormatVideoContextMenuProvider> videoContextMenuProvider; // @synthesize videoContextMenuProvider=_videoContextMenuProvider;
@property(readonly, nonatomic) __weak id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(readonly, nonatomic) SPTShowsFormatLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTShowsFormatEntityViewDelegate *viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(readonly, nonatomic) SPTShowsFormatEntityViewDataSource *viewDataSource; // @synthesize viewDataSource=_viewDataSource;
@property(readonly, nonatomic) SPTShowsFormatEntityViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)whenDataIsLoadedDo:(CDUnknownBlockType)arg1;
- (void)notifyCellsAtIndexPaths:(id)arg1 ofAppearanceTransition:(_Bool)arg2;
- (void)notifyVisibleCellsOfAppearance:(_Bool)arg1;
- (void)updateViewStyleWithTheme:(id)arg1;
- (struct CGRect)headerViewFrameWithSize:(struct CGSize)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)removeApplicationStateObservers;
- (void)addApplicationStateObservers;
- (void)playURIInContext:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowScreenshotBannerWithObserverManager:(id)arg1;
- (id)shareDataForScreenshotObserverManager:(id)arg1 image:(id)arg2;
- (void)toggleFollow;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (id)provideContextMenuOptions;
- (void)mainContextMenuButtonTapped:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)viewModelOfflineStatusDidChange:(id)arg1;
- (void)viewModel:(id)arg1 followStateDidChange:(_Bool)arg2;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (void)viewModelPlaybackRestrictionsDidChange:(id)arg1;
- (void)viewModel:(id)arg1 sponsorshipDidChange:(id)arg2;
- (void)viewModelBouncePrimaryActionButton:(id)arg1;
- (void)viewModel:(id)arg1 didFailToPlayTrackWithURI:(id)arg2;
- (void)viewModel:(id)arg1 presentContextMenuForItem:(id)arg2 fromSourceView:(id)arg3;
- (void)viewModelThemeDidUpdate:(id)arg1;
- (void)viewModelPlayingTrackDidChange:(id)arg1;
- (void)viewModelDidLoadData:(id)arg1;
- (void)setupHeaderView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 viewDataSource:(id)arg2 viewDelegate:(id)arg3 imageLoaderFactory:(id)arg4 contextMenuFeature:(id)arg5 podcastContextMenuProvider:(id)arg6 videoContextMenuProvider:(id)arg7 barButtonItemManager:(id)arg8 logger:(id)arg9 contextAwareSharingEnabled:(_Bool)arg10 collectionTestManager:(id)arg11 shareFeature:(id)arg12 alertController:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTShowsFormatEntityView *view; // @dynamic view;

@end

