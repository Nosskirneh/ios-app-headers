//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GLUEThemeObserver-Protocol.h"
#import "SPContentInsetViewController-Protocol.h"
#import "SPTFreeTierCollectionEntityPage-Protocol.h"
#import "SPTFreeTierCollectionEntityViewModelDelegate-Protocol.h"
#import "SPTFreeTierCollectionSongCellConfiguratorDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTOfflineSwitchDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEEmptyStateView, NSLayoutConstraint, NSString, NSURL, SPTEntityHeaderViewController, SPTFreeTierCollectionGLUETheme, SPTFreeTierCollectionOfflineSwitchFactory, SPTFreeTierCollectionSongCellConfigurator, SPTProgressView, SPTTableView, SPTTableViewOfflineSwitchCell;
@protocol GLUEImageLoader, SPTAlertController, SPTFreeTierCollectionEntityPageDelegate, SPTFreeTierCollectionEntityPageScrollToTopDelegate, SPTFreeTierCollectionSongsViewModel, SPTPageContainer, SPTSortingFilteringUIFactory, SPTViewLogger;

@interface SPTFreeTierCollectionSongsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPTFreeTierCollectionSongCellConfiguratorDelegate, SPTNavigationControllerNavigationBarState, SPContentInsetViewController, SPTOfflineSwitchDelegate, GLUEThemeObserver, SPTFreeTierCollectionEntityPage, SPTFreeTierCollectionEntityViewModelDelegate, SPTPageController>
{
    _Bool _contextMenuToBePresented;
    id <SPTFreeTierCollectionEntityPageDelegate> delegate;
    id <SPTFreeTierCollectionEntityPageScrollToTopDelegate> scrollDelegate;
    SPTTableView *_tableView;
    SPTProgressView *_progressView;
    SPTFreeTierCollectionGLUETheme *_theme;
    id <SPTFreeTierCollectionSongsViewModel> _viewModel;
    id <GLUEImageLoader> _imageLoader;
    SPTFreeTierCollectionSongCellConfigurator *_cellConfigurator;
    SPTEntityHeaderViewController *_headerView;
    GLUEEmptyStateView *_emptyView;
    GLUEEmptyStateView *_noResultEmptyView;
    id <SPTViewLogger> _viewLogger;
    NSLayoutConstraint *_bottomConstraint;
    id <SPTAlertController> _alertController;
    SPTFreeTierCollectionOfflineSwitchFactory *_offlineSwitchFactory;
    SPTTableViewOfflineSwitchCell *_offlineSwitchCell;
    id <SPTSortingFilteringUIFactory> _sortingFilteringUIFactory;
}

@property(nonatomic, getter=isContextMenuToBePresented) _Bool contextMenuToBePresented; // @synthesize contextMenuToBePresented=_contextMenuToBePresented;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringUIFactory; // @synthesize sortingFilteringUIFactory=_sortingFilteringUIFactory;
@property(retain, nonatomic) SPTTableViewOfflineSwitchCell *offlineSwitchCell; // @synthesize offlineSwitchCell=_offlineSwitchCell;
@property(readonly, nonatomic) SPTFreeTierCollectionOfflineSwitchFactory *offlineSwitchFactory; // @synthesize offlineSwitchFactory=_offlineSwitchFactory;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) GLUEEmptyStateView *noResultEmptyView; // @synthesize noResultEmptyView=_noResultEmptyView;
@property(retain, nonatomic) GLUEEmptyStateView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) SPTEntityHeaderViewController *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTFreeTierCollectionSongCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTFreeTierCollectionSongsViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTFreeTierCollectionGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SPTFreeTierCollectionEntityPageScrollToTopDelegate> scrollDelegate; // @synthesize scrollDelegate;
@property(nonatomic) __weak id <SPTFreeTierCollectionEntityPageDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *logContext;
- (void)themeUpdated:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (unsigned long long)preferredNavigationBarState;
- (unsigned long long)offlineSwitchCellOfflineAvailability:(id)arg1;
- (void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (void)entityViewModel:(id)arg1 error:(id)arg2;
- (void)entityViewModelDidUpdate:(id)arg1;
- (void)handleEmptyView;
- (void)actionForSectionHeaderWithSongCellConfigurator:(id)arg1;
- (void)songCellConfigurator:(id)arg1 didEndAudioPreview:(id)arg2;
- (void)songCellConfigurator:(id)arg1 didStartAudioPreview:(id)arg2;
- (void)songCellConfigurator:(id)arg1 trackPreview:(id)arg2;
- (void)songCellConfigurator:(id)arg1 banButton:(id)arg2;
- (void)songCellConfigurator:(id)arg1 likeButton:(id)arg2;
- (void)songCellConfigurator:(id)arg1 contextMenuButton:(id)arg2;
- (id)indexPathOfSubview:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)sp_updateContentInsets;
- (id)indexPathForCell:(id)arg1;
- (void)hideProgressViewWithError:(id)arg1;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)setupConstraints;
- (void)initializeInterface;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 collectionConfiguration:(id)arg3 imageLoader:(id)arg4 audioPreviewModelFactory:(id)arg5 audioPreviewUIFactory:(id)arg6 emptyView:(id)arg7 viewLogger:(id)arg8 alertController:(id)arg9 offlineSwitchFactory:(id)arg10 sortingFilteringUIFactory:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

