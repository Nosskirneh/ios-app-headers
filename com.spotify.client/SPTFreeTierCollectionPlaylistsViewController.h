//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTFreeTierCollectionDeactivateFiltersFooterDelegate.h"
#import "SPTFreeTierCollectionEntityPage.h"
#import "SPTFreeTierCollectionFilterBarViewControllerDelegate.h"
#import "SPTFreeTierCollectionPlaylistsViewModelDelegate.h"
#import "SPTPageController.h"
#import "SPTScrollToTopViewController.h"
#import "SPTYourLibraryPage.h"
#import "SPViewController.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GLUEEntityRowStyle, NSLayoutConstraint, NSString, NSURL, SPTFreeTierCollectionEmptyView, SPTFreeTierCollectionFilterBarViewController, SPTFreeTierCollectionGLUETheme, SPTFreeTierCollectionPlaylistsCellConfigurator, SPTProgressView, SPTTableView;

@interface SPTFreeTierCollectionPlaylistsViewController : UIViewController <SPTFreeTierCollectionFilterBarViewControllerDelegate, SPTFreeTierCollectionDeactivateFiltersFooterDelegate, SPContentInsetViewController, SPTScrollToTopViewController, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, SPTPageController, SPTYourLibraryPage, SPTFreeTierCollectionEntityPage, SPTFreeTierCollectionPlaylistsViewModelDelegate, SPViewController>
{
    id <SPTFreeTierCollectionEntityPageDelegate> delegate;
    id <SPTFreeTierCollectionEntityPageScrollToTopDelegate> scrollDelegate;
    id <SPTYourLibraryPageDelegate> pageDelegate;
    id <SPTFreeTierCollectionPlaylistsViewModel> _viewModel;
    SPTFreeTierCollectionGLUETheme *_theme;
    id <SPTViewLogger> _viewLogger;
    SPTFreeTierCollectionPlaylistsCellConfigurator *_cellConfigurator;
    SPTTableView *_tableView;
    SPTProgressView *_progressView;
    GLUEEntityRowStyle *_entityRowStyle;
    NSLayoutConstraint *_bottomConstraint;
    SPTFreeTierCollectionFilterBarViewController *_filterBarViewController;
    SPTFreeTierCollectionEmptyView *_emptyView;
    id <SPTSortingFilteringUIFactory> _sortingFilteringUIFactory;
}

@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringUIFactory; // @synthesize sortingFilteringUIFactory=_sortingFilteringUIFactory;
@property(retain, nonatomic) SPTFreeTierCollectionEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) SPTFreeTierCollectionFilterBarViewController *filterBarViewController; // @synthesize filterBarViewController=_filterBarViewController;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) GLUEEntityRowStyle *entityRowStyle; // @synthesize entityRowStyle=_entityRowStyle;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTFreeTierCollectionPlaylistsCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTFreeTierCollectionGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTFreeTierCollectionPlaylistsViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTYourLibraryPageDelegate> pageDelegate; // @synthesize pageDelegate;
@property(nonatomic) __weak id <SPTFreeTierCollectionEntityPageScrollToTopDelegate> scrollDelegate; // @synthesize scrollDelegate;
@property(nonatomic) __weak id <SPTFreeTierCollectionEntityPageDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *logContext;
@property(readonly, nonatomic) NSURL *URI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)spt_scrollToTop;
- (void)freeTierFilterSearchBarTextDidEndEditing:(id)arg1;
- (void)freeTierFilterSearchBarTextWillEndEditing:(id)arg1;
- (void)freeTierFilterSearchBarTextDidBeginEditing:(id)arg1;
- (void)freeTierFilterSearchBarTextWillBeginEditing:(id)arg1;
- (void)freeTierFilterSearchBarContextButtonTapped:(id)arg1;
- (void)freeTierFilterSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)deactivateFiltersWithFiltersFooter:(id)arg1;
- (void)logViewDataDidLoadIfNeeded;
- (void)handleFilterBar;
- (void)handleDeactivateFilterFooter;
- (void)handleEmptyView;
- (void)viewModel:(id)arg1 error:(id)arg2;
- (void)viewModelDidUpdate:(id)arg1;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
- (void)applyThemeLayout;
- (void)hideProgressViewWithError:(id)arg1;
- (void)updateBottomConstraint;
- (void)setupConstraints;
- (void)initializeInterface;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2 theme:(id)arg3 viewLogger:(id)arg4 sortingFilteringUIFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

