//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRCommonTableViewController.h"

#import "DZRContentPageActionBarDelegate-Protocol.h"
#import "DZRContextMenuDelegate-Protocol.h"
#import "DZRDataSourceDelegate-Protocol.h"
#import "DZRLibraryItemsTableViewProtocol-Protocol.h"
#import "DZRMusicLibraryStateObserver-Protocol.h"
#import "DZRSortSelectionViewControllerDelegate-Protocol.h"
#import "NoDataViewDelegate-Protocol.h"
#import "_TtP6Deezer21ReferenceSizeProvider_-Protocol.h"

@class BDKCollectionIndexView, DZRContentPageNavigationLogger, NSString, UIButton, UIRefreshControl, _TtC6Deezer30DZRContentHeaderViewController;
@protocol DZRContentPageHeaderable><DeezerBrowsable, DZRLibraryItemsDataSource;

@interface DZRContentPageTableViewController : DZRCommonTableViewController <DZRMusicLibraryStateObserver, DZRLibraryItemsTableViewProtocol, DZRSortSelectionViewControllerDelegate, DZRContextMenuDelegate, _TtP6Deezer21ReferenceSizeProvider_, NoDataViewDelegate, DZRDataSourceDelegate, DZRContentPageActionBarDelegate>
{
    _Bool _shouldScrollToTop;
    _Bool _loadingViewAdded;
    _Bool _viewVisible;
    UIRefreshControl *_refreshControl;
    id <DZRContentPageHeaderable><DeezerBrowsable> _model;
    BDKCollectionIndexView *_indexView;
    _TtC6Deezer30DZRContentHeaderViewController *_headerViewController;
    long long _selectedSortOption;
    DZRContentPageNavigationLogger *_contentLogger;
    UIButton *_navBarActionButton;
    UIButton *_navBarContextMenuButton;
    id <DZRLibraryItemsDataSource> _itemsDataSource;
    struct CGPoint _scrollViewContentOffset;
    struct CGSize _previousSize;
}

+ (void)initialize;
@property(retain, nonatomic) id <DZRLibraryItemsDataSource> itemsDataSource; // @synthesize itemsDataSource=_itemsDataSource;
@property(retain, nonatomic) UIButton *navBarContextMenuButton; // @synthesize navBarContextMenuButton=_navBarContextMenuButton;
@property(retain, nonatomic) UIButton *navBarActionButton; // @synthesize navBarActionButton=_navBarActionButton;
@property(retain, nonatomic) DZRContentPageNavigationLogger *contentLogger; // @synthesize contentLogger=_contentLogger;
@property(nonatomic) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic) _Bool loadingViewAdded; // @synthesize loadingViewAdded=_loadingViewAdded;
@property(nonatomic) _Bool shouldScrollToTop; // @synthesize shouldScrollToTop=_shouldScrollToTop;
@property(nonatomic) struct CGSize previousSize; // @synthesize previousSize=_previousSize;
@property(nonatomic) long long selectedSortOption; // @synthesize selectedSortOption=_selectedSortOption;
@property(nonatomic) struct CGPoint scrollViewContentOffset; // @synthesize scrollViewContentOffset=_scrollViewContentOffset;
@property(retain, nonatomic) _TtC6Deezer30DZRContentHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) BDKCollectionIndexView *indexView; // @synthesize indexView=_indexView;
@property(retain, nonatomic) id <DZRContentPageHeaderable><DeezerBrowsable> model; // @synthesize model=_model;
- (void)setRefreshControl:(id)arg1;
- (void).cxx_destruct;
- (id)logger;
- (double)customTopLayoutGuideLength;
- (double)tableViewHeight;
- (void)adjustFooter;
- (double)footerHeight;
- (void)presentError:(id)arg1;
- (void)saveSortOption;
- (id)currentFilteredObjectDeezerID;
- (void)sortSelectionViewController:(id)arg1 didSelectOptionAtIndex:(unsigned long long)arg2;
- (long long)savedSortOption;
- (void)loadSortOption;
- (_Bool)shouldObserveNetworkChanges;
- (void)onSecondaryButtonTouched:(id)arg1;
- (void)onButtonTouched:(id)arg1;
- (void)musicLibraryStateCacheWasCleared:(id)arg1;
- (void)musicLibraryStateCache:(id)arg1 didUpdateState:(id)arg2 ofCollectionWithID:(id)arg3;
- (void)musicLibraryStateCache:(id)arg1 didUpdateState:(id)arg2 ofPlayableWithID:(id)arg3;
- (id)synchronizableCellAtIndexPath:(id)arg1;
- (void)startObservingSynchronizationNotifications;
- (void)userAuthenticated;
- (void)playerDidPause:(id)arg1;
- (void)playerDidStartPlaying:(id)arg1;
- (void)playerDidChangeCollection:(id)arg1;
- (void)startObservingPlayerNotifications;
- (void)dzrPlayButtonAction:(id)arg1 atIndexPath:(id)arg2;
- (void)dzrActionFromDataSource:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)styleForControllerForItem:(id)arg1;
- (long long)contextMenuTypeForControllerForItem:(id)arg1;
- (id)refreshControl;
- (void)dataSource:(id)arg1 loadingStateChanged:(_Bool)arg2;
- (void)dataSource:(id)arg1 dataDidChangeWithChanges:(id)arg2;
- (void)computeHeaderFrameWithScrollView:(id)arg1;
- (void)computeNavigationBarTitleAlphaWithScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (unsigned long long)styleForController;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)contentPageActionBar:(id)arg1 synchronizeButtonValueChangedTo:(_Bool)arg2;
- (void)contentPageActionBarFilterButtonTouchedWithActionBar:(id)arg1;
- (void)contentPageActionBarSortButtonTouchedWithActionBar:(id)arg1;
- (void)updatePlayButtonState;
- (struct CGRect)noDataViewFrame;
- (void)refreshData;
- (_Bool)hasData;
- (_Bool)isLoading;
- (void)showLoadingView:(_Bool)arg1;
- (void)showNoDataView:(_Bool)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)scrollToTop;
- (void)scrollToTopWhenVisible;
- (double)scrollViewTopOffsetY;
- (double)referenceSize;
- (id)playButtonTitle;
- (_Bool)isCollectionFilterable;
- (id)unsynchronizeAlertTitle;
- (void)unsynchronizeCollection;
- (void)synchronizeCollection;
- (_Bool)isCollectionSynchronized;
- (_Bool)isCollectionSynchronizable;
- (id)collectionForSynchronization;
- (_Bool)shouldObserveSynchronizationNotifications;
- (void)playContent:(id)arg1;
- (_Bool)currentCollectionIsQueued;
- (void)updateActionBar;
- (_Bool)shouldDisplayActionBar;
- (void)updateTitle;
- (void)displayContextMenu:(id)arg1;
- (void)toggleFavoriteStatusOrEditItem:(id)arg1;
- (void)configureActionButtonForEditAction;
- (void)configureActionButtonWithFavoriteStatus:(_Bool)arg1;
- (void)configureActionButton;
- (_Bool)shouldDisplayNavBarContextMenuButton;
- (_Bool)shouldDisplayNavBarActionButton;
- (_Bool)tableViewShouldAppearUnderNavigationBar;
- (void)addBannerAd:(long long)arg1 target:(id)arg2;
- (void)indexViewValueChanged:(id)arg1;
- (void)initNavigationBarButtons;
- (void)updateUI;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)originForDownloadedBanner;
- (void)setShouldLayoutHeader;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)registerCells;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

