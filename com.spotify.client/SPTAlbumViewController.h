//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPObjectRepresentation.h"
#import "SPTAlbumMetadataViewDelegate.h"
#import "SPTAlbumViewModelCollectionDelegate.h"
#import "SPTAlbumViewModelPlaybackDelegate.h"
#import "SPTBarButtonItemManagerObserver.h"
#import "SPTContentBottomLayoutGuideObserver.h"
#import "SPTEntityTableHeaderViewDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTOfflineObserver.h"
#import "SPTOfflineSwitchDelegate.h"
#import "SPTOnDemandUpsellProtocol.h"
#import "SPTPageController.h"
#import "SPTShareScreenshotObserverManagerDataSource.h"
#import "SPTShareableContext.h"
#import "SPTSingleRequestViewModelDelegate.h"

@class GLUEButton, GLUEEntityRowStyle, NSMutableArray, NSString, NSURL, SPTAlbumLogger, SPTAlbumMetadataView, SPTAlbumViewModel, SPTAlbumWindowedContentMessageCell, SPTCollectionView, SPTEntityTableHeaderView, SPTInfoView, SPTNetworkConnectivityController, SPTProgressView, SPTShareScreenshotObserverManager, SPTTableViewCell, SPTTableViewOfflineSwitchCell, UIBarButtonItem;

@interface SPTAlbumViewController : SPTableViewController <SPTNavigationControllerNavigationBarState, SPTSingleRequestViewModelDelegate, SPTAlbumViewModelPlaybackDelegate, SPTAlbumViewModelCollectionDelegate, SPTImageLoaderDelegate, SPTAlbumMetadataViewDelegate, SPTEntityTableHeaderViewDelegate, SPTOfflineObserver, SPTOfflineSwitchDelegate, SPTOnDemandUpsellProtocol, SPTBarButtonItemManagerObserver, SPTShareableContext, SPTShareScreenshotObserverManagerDataSource, SPObjectRepresentation, SPTPageController, SPTContentBottomLayoutGuideObserver>
{
    _Bool _hasSetupContentOffset;
    _Bool _displayAvailableOffline;
    _Bool _allowsScreenshots;
    SPTTableViewCell *_copyrightCell;
    id <SPContextMenuFeature> _contextMenu;
    id <CollectionFeature> _collection;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTShelves> _shelves;
    SPTAlbumViewModel *_viewModel;
    id <SPTProductState> _productState;
    id <SPTViewLogger> _viewLogger;
    id <SPTImageLoader> _imageLoader;
    id <GLUEImageLoader> _glueImageLoader;
    SPTAlbumMetadataView *_metadataView;
    GLUEButton *_saveButton;
    SPTEntityTableHeaderView *_entityHeaderView;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    SPTCollectionView *_relatedAlbumsCollectionView;
    SPTAlbumWindowedContentMessageCell *_windowedContentMessagePrototypeCell;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTContextMenuOptions> _contextMenuOptions;
    id <SPTOfflineManager> _offlineManager;
    SPTTableViewOfflineSwitchCell *_offlineSwitchCell;
    SPTAlbumLogger *_albumLogger;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTUpsellManager> _upsellManager;
    id <SPTOnDemandUpsell> _onDemandUpsell;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTSpotlightIndex> _spotlightIndexRegistry;
    CDUnknownBlockType _contextResponseHandler;
    NSURL *_autoplayTrack;
    id <GLUETheme> _theme;
    GLUEEntityRowStyle *_trackRowStyle;
    GLUEEntityRowStyle *_albumRowStyle;
    NSURL *_autotrialTrackURL;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTContributingArtistsService> _contributingArtistsService;
    id <SPTShareFeature> _shareFeature;
    SPTShareScreenshotObserverManager *_screenshotShareObserverManager;
    NSMutableArray *_artistsImages;
    id <SPTModalPresentationController> _modalPresentationController;
    UIBarButtonItem *_likeBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *likeBarButtonItem; // @synthesize likeBarButtonItem=_likeBarButtonItem;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) NSMutableArray *artistsImages; // @synthesize artistsImages=_artistsImages;
@property(nonatomic) _Bool allowsScreenshots; // @synthesize allowsScreenshots=_allowsScreenshots;
@property(retain, nonatomic) SPTShareScreenshotObserverManager *screenshotShareObserverManager; // @synthesize screenshotShareObserverManager=_screenshotShareObserverManager;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTContributingArtistsService> contributingArtistsService; // @synthesize contributingArtistsService=_contributingArtistsService;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) NSURL *autotrialTrackURL; // @synthesize autotrialTrackURL=_autotrialTrackURL;
@property(retain, nonatomic) GLUEEntityRowStyle *albumRowStyle; // @synthesize albumRowStyle=_albumRowStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *trackRowStyle; // @synthesize trackRowStyle=_trackRowStyle;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSURL *autoplayTrack; // @synthesize autoplayTrack=_autoplayTrack;
@property(copy, nonatomic) CDUnknownBlockType contextResponseHandler; // @synthesize contextResponseHandler=_contextResponseHandler;
@property(nonatomic) __weak id <SPTSpotlightIndex> spotlightIndexRegistry; // @synthesize spotlightIndexRegistry=_spotlightIndexRegistry;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(nonatomic) __weak id <SPTOnDemandUpsell> onDemandUpsell; // @synthesize onDemandUpsell=_onDemandUpsell;
@property(readonly, nonatomic) __weak id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) __weak id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) SPTAlbumLogger *albumLogger; // @synthesize albumLogger=_albumLogger;
@property(nonatomic) _Bool displayAvailableOffline; // @synthesize displayAvailableOffline=_displayAvailableOffline;
@property(retain, nonatomic) SPTTableViewOfflineSwitchCell *offlineSwitchCell; // @synthesize offlineSwitchCell=_offlineSwitchCell;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) SPTAlbumWindowedContentMessageCell *windowedContentMessagePrototypeCell; // @synthesize windowedContentMessagePrototypeCell=_windowedContentMessagePrototypeCell;
@property(retain, nonatomic) SPTCollectionView *relatedAlbumsCollectionView; // @synthesize relatedAlbumsCollectionView=_relatedAlbumsCollectionView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTEntityTableHeaderView *entityHeaderView; // @synthesize entityHeaderView=_entityHeaderView;
@property(nonatomic) _Bool hasSetupContentOffset; // @synthesize hasSetupContentOffset=_hasSetupContentOffset;
@property(retain, nonatomic) GLUEButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) SPTAlbumMetadataView *metadataView; // @synthesize metadataView=_metadataView;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) SPTAlbumViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) __weak id <CollectionFeature> collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) SPTTableViewCell *copyrightCell; // @synthesize copyrightCell=_copyrightCell;
- (void).cxx_destruct;
- (void)layoutGuideChanged;
- (void)playURIInContext:(id)arg1;
- (void)evaluatePendingContextResponseHandlerWithViewModel:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)updateUserActivityState:(id)arg1 withThumbnailImage:(id)arg2;
- (void)updateUserActivityState:(id)arg1;
- (_Bool)shouldShowScreenshotBannerWithObserverManager:(id)arg1;
- (id)shareDataForScreenshotObserverManager:(id)arg1 image:(id)arg2;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (unsigned long long)offlineSwitchCellOfflineAvailability:(id)arg1;
- (void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (void)offlineStateChangedForEntity:(id)arg1 withURL:(id)arg2;
- (void)entityTableHeaderView:(id)arg1 didScrollToPageNumber:(long long)arg2;
- (void)entityTableHeaderViewImageViewDidReceiveTap:(id)arg1;
- (void)collectionAlbumDidChange;
- (void)updateOnCollectionChange;
- (void)currentlyPlayingRowChanged;
- (void)viewModel:(id)arg1 setLoading:(_Bool)arg2;
- (void)viewModel:(id)arg1 offlineModeChanged:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailLoad:(id)arg2;
- (void)viewModel:(id)arg1 didLoadData:(id)arg2 loadTime:(double)arg3;
- (void)updateAvailableOffline:(_Bool)arg1;
- (void)toggleAvailableOfflineBarAnimated:(_Bool)arg1;
- (void)updateOfflineCellValue;
- (void)updateVisiblePreviews;
- (void)updateInfoViewWithError:(id)arg1;
- (void)setupRightNavigationItems;
- (void)configureRightBarButtonItems:(id)arg1;
- (void)updateHeaderSaveButton;
- (void)updateNavigationHeartButton:(_Bool)arg1;
- (void)setHeaderSaveButtonSaved:(_Bool)arg1;
- (void)updateHeaderView;
- (void)updateHeaderViewPrimaryButton;
- (void)albumMetadataView:(id)arg1 tappedArtistsCounter:(id)arg2;
- (void)albumMetadataView:(id)arg1 tappedArtistAtIndex:(long long)arg2;
- (id)provideContextMenuOptions;
- (void)viewContextMenuButtonTapped:(id)arg1;
- (void)trackContextMenuButtonTapped:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isCopyrightSection:(long long)arg1;
- (_Bool)isRelatedAlbumsSection:(long long)arg1;
- (_Bool)isTracksSection:(long long)arg1;
- (_Bool)isAvailableOfflineSection:(long long)arg1;
- (_Bool)isWindowedContentMessageSection:(long long)arg1;
- (void)toggleCollectionButtonTapped:(id)arg1;
- (void)resumePlayback;
- (void)playButtonTapped;
- (void)playTrackOnDemandFromAutoTrial;
- (id)currentContextURI;
- (void)defaultShuffleBounceFromOnDemand;
- (void)triggerAutoTrialOverlayFromOnDemand;
- (void)shufflePlayAndUpsellFromOnDemand;
- (void)shufflePlayFromOnDemand;
- (void)configureWindowedContentMessageCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configureRelatedAlbumCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configureTrackCell:(id)arg1 atIndexPath:(id)arg2;
- (void)enableShelvesOnCell:(id)arg1 indexPath:(id)arg2;
- (void)enableAdditionalServicesOnCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupTrailingAccessoryForRelatedCell:(id)arg1;
- (void)setupTrailingAccessoryForTrackCell:(id)arg1 indexPath:(id)arg2;
- (void)setupLeadingAccessoryForRelatedCell:(id)arg1 atIndex:(long long)arg2;
- (void)configureMultipleAccessoriesViewForTrackCell:(id)arg1 status:(long long)arg2 accessoryLabelType:(long long)arg3;
- (id)contentViewForCell:(id)arg1;
- (void)setSubtitleForTrackCell:(id)arg1 atIndexPath:(id)arg2;
- (long long)offlineSyncStatusForURL:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)URI;
- (void)setupInfoView;
- (void)setupHeaderView;
- (void)setupTableView;
- (long long)style;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContextMenu:(id)arg1 collection:(id)arg2 collectionPlatform:(id)arg3 collectionTestManager:(id)arg4 albumViewModel:(id)arg5 productState:(id)arg6 viewLogger:(id)arg7 imageLoader:(id)arg8 glueImageLoader:(id)arg9 offlineManager:(id)arg10 albumLogger:(id)arg11 connectivityController:(id)arg12 collectionLogger:(id)arg13 upsellManager:(id)arg14 onDemandUpsell:(id)arg15 barButtonItemManager:(id)arg16 spotlightIndexRegistry:(id)arg17 linkDispatcher:(id)arg18 contributingArtistsService:(id)arg19 shareFeature:(id)arg20 modalPresentationController:(id)arg21 shelves:(id)arg22 theme:(id)arg23;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

