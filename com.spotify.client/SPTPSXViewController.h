//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTContextMenuViewControllerDelegate-Protocol.h"
#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPSXTrackRowDelegate-Protocol.h"
#import "SPTPSXViewModelBanningDelegate-Protocol.h"
#import "SPTPSXViewModelDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTTableAdapterAppearanceDelegate-Protocol.h"
#import "SPTTableAdapterDataSource-Protocol.h"
#import "SPTTableViewContinuousSwipeDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class GLUEButton, NSArray, NSLayoutConstraint, NSNotificationCenter, NSString, NSURL, SPTEntityTableHeaderView, SPTInfoView, SPTNetworkConnectivityController, SPTPSXLogger, SPTProgressView, SPTSearchBar, SPTTableAdapter, SPTTableView, UIButton, UIView;
@protocol GLUETheme, SPContextMenuActionsFactory, SPTCollectionPlatformTestManager, SPTContextMenuOptions, SPTContextMenuOptionsFactory, SPTContextMenuPresenter, SPTContextMenuPresenterFactory, SPTEncoreComponentFactory, SPTExplicitContentAccessManager, SPTFollowShelfFactory, SPTFormatListPlatformManager, SPTImageLoader, SPTPSXMetadataView, SPTPSXTestManager, SPTPSXViewModel, SPTPageContainer, SPTProductState, SPTShelves;

@interface SPTPSXViewController : UIViewController <SPContentInsetViewController, UIScrollViewDelegate, UISearchBarDelegate, SPTImageLoaderDelegate, SPTNavigationControllerNavigationBarState, SPTPSXViewModelDelegate, SPTPSXViewModelBanningDelegate, SPTTableViewContinuousSwipeDelegate, SPTContextMenuViewControllerDelegate, SPTTableAdapterDataSource, SPTTableAdapterAppearanceDelegate, SPTPSXTrackRowDelegate, SPTExplicitContentEnabledStateObserver, SPTPageController>
{
    _Bool _filterActive;
    id <SPTProductState> _productState;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTImageLoader> _imageLoader;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTPSXViewModel> _viewModel;
    id <SPTFormatListPlatformManager> _platformManager;
    UIView<SPTPSXMetadataView> *_metadataView;
    UIButton *_sortContextMenuButton;
    id <SPContextMenuActionsFactory> _contextMenuActionsFactory;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <GLUETheme> _theme;
    NSNotificationCenter *_notificationCentre;
    id <SPTShelves> _shelves;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTFollowShelfFactory> _followShelfFactory;
    SPTPSXLogger *_logger;
    id <SPTContextMenuOptions> _contextMenuOptions;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    SPTProgressView *_progressView;
    SPTTableView *_tableView;
    SPTEntityTableHeaderView *_entityHeader;
    UIView *_filterAndSortContainer;
    SPTSearchBar *_filterField;
    UIButton *_filterCancelButton;
    GLUEButton *_followButton;
    NSArray *_filterAndSortLayoutConstraints;
    NSLayoutConstraint *_filterAndSortContainerWidthContraint;
    id <SPTEncoreComponentFactory> _encoreComponentFactory;
    SPTTableAdapter *_tableAdapter;
    id <SPTPSXTestManager> _psxTestManager;
    SPTInfoView *_infoView;
}

@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
@property(retain, nonatomic) SPTTableAdapter *tableAdapter; // @synthesize tableAdapter=_tableAdapter;
@property(retain, nonatomic) id <SPTEncoreComponentFactory> encoreComponentFactory; // @synthesize encoreComponentFactory=_encoreComponentFactory;
@property(retain, nonatomic) NSLayoutConstraint *filterAndSortContainerWidthContraint; // @synthesize filterAndSortContainerWidthContraint=_filterAndSortContainerWidthContraint;
@property(copy, nonatomic) NSArray *filterAndSortLayoutConstraints; // @synthesize filterAndSortLayoutConstraints=_filterAndSortLayoutConstraints;
@property(retain, nonatomic) GLUEButton *followButton; // @synthesize followButton=_followButton;
@property(nonatomic, getter=isFilterActive) _Bool filterActive; // @synthesize filterActive=_filterActive;
@property(retain, nonatomic) UIButton *filterCancelButton; // @synthesize filterCancelButton=_filterCancelButton;
@property(retain, nonatomic) SPTSearchBar *filterField; // @synthesize filterField=_filterField;
@property(retain, nonatomic) UIView *filterAndSortContainer; // @synthesize filterAndSortContainer=_filterAndSortContainer;
@property(retain, nonatomic) SPTEntityTableHeaderView *entityHeader; // @synthesize entityHeader=_entityHeader;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(readonly, nonatomic) SPTPSXLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTFollowShelfFactory> followShelfFactory; // @synthesize followShelfFactory=_followShelfFactory;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) NSNotificationCenter *notificationCentre; // @synthesize notificationCentre=_notificationCentre;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, nonatomic) id <SPContextMenuActionsFactory> contextMenuActionsFactory; // @synthesize contextMenuActionsFactory=_contextMenuActionsFactory;
@property(readonly, nonatomic) UIButton *sortContextMenuButton; // @synthesize sortContextMenuButton=_sortContextMenuButton;
@property(readonly, nonatomic) UIView<SPTPSXMetadataView> *metadataView; // @synthesize metadataView=_metadataView;
@property(readonly, nonatomic) id <SPTFormatListPlatformManager> platformManager; // @synthesize platformManager=_platformManager;
@property(readonly, nonatomic) id <SPTPSXViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)trackRowAdapterWantsBouncedShuffleButton:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)continuousSwipeEnabledForTableView:(id)arg1;
- (void)sp_updateContentInsets;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)sortContextButtonTapped:(id)arg1;
- (void)mainContextMenuButtonPressed:(id)arg1;
- (void)followButtonPressed:(id)arg1;
- (void)shuffleButtonPressed:(id)arg1;
- (void)tableAdapter:(id)arg1 willDisplayRowAdapterAtIndexPath:(id)arg2;
- (id)sectionAdaptersForTableAdapter:(id)arg1;
- (void)contextMenuViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)contextMenuViewControllerDidDismiss:(id)arg1 dismissalStyle:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (unsigned long long)preferredNavigationBarState;
- (id)URI;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)viewModel:(id)arg1 didFailToUnbanTrack:(id)arg2 error:(id)arg3;
- (void)viewModel:(id)arg1 didUnbanTrack:(id)arg2;
- (void)viewModel:(id)arg1 didBeginUnbanningTrack:(id)arg2;
- (void)viewModelDidUpdateOfflineStatus:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateFollowStatus:(_Bool)arg2;
- (void)viewModel:(id)arg1 didUpdateFollowerCount:(long long)arg2;
- (void)viewModelDidUpdateArtistRecommendations:(id)arg1 withFactory:(id)arg2;
- (void)viewModelDidUpdateMetadata:(id)arg1;
- (void)viewModel:(id)arg1 failedToLoadDataWithError:(id)arg2;
- (void)viewModelDidUpdateData:(id)arg1;
- (void)viewModelDidLoadData:(id)arg1;
- (void)showNoResultsInfoViewWithFilterString:(id)arg1;
- (void)showLoadingErrorInfoView;
- (void)showOfflineInfoView;
- (void)showInfoView:(id)arg1;
- (void)hideInfoView;
- (void)dismissFilterInterfaceForced:(_Bool)arg1;
- (void)dismissFilterInterface;
- (void)forcedDismissFilterInterface;
- (void)showFilterViewSearchBar:(id)arg1 theme:(id)arg2 frame:(struct CGRect)arg3;
- (void)updateViewConstraints;
- (void)addFilterAndSortConstraints;
- (void)resetEntityHeaderTopView;
- (id)createFilterAndSortBarWithFrame:(struct CGRect)arg1;
- (id)createFilterField;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 contextMenuPresenterFactory:(id)arg2 imageLoader:(id)arg3 logger:(id)arg4 networkConnectivityController:(id)arg5 collectionTestManager:(id)arg6 viewModel:(id)arg7 platformManager:(id)arg8 playlistMetadataView:(id)arg9 sortMenuButton:(id)arg10 contextMenuActionsFactory:(id)arg11 contextMenuOptionsFactory:(id)arg12 theme:(id)arg13 notificationCentre:(id)arg14 shelves:(id)arg15 psxTestManager:(id)arg16 explicitContentAccessManager:(id)arg17 encoreComponentFactory:(id)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

