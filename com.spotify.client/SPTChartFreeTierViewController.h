//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTChartFreeTierViewModelDelegate-Protocol.h"
#import "SPTFreeTierRecommendationsPlaylistFooterViewControllerDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEButton, NSString, NSURL, SPTChartFreeTierNavigationBarModel, SPTChartFreeTierViewModel, SPTChartTheme, SPTEntityTableHeaderView, SPTTableView, UIView;
@protocol SPTFreeTierRecommendationsPlaylistFooterViewController, SPTPageContainer;

@interface SPTChartFreeTierViewController : UIViewController <SPContentInsetViewController, SPTFreeTierRecommendationsPlaylistFooterViewControllerDelegate, SPTNavigationControllerNavigationBarState, UITableViewDataSource, UITableViewDelegate, SPTChartFreeTierViewModelDelegate, SPTPageController>
{
    _Bool _active;
    _Bool _viewModelUpdateQueued;
    NSURL *_URL;
    SPTChartFreeTierViewModel *_viewModel;
    SPTChartFreeTierNavigationBarModel *_navigationBarModel;
    SPTChartTheme *_theme;
    UIViewController<SPTFreeTierRecommendationsPlaylistFooterViewController> *_recommendationsFooter;
    SPTTableView *_tableView;
    SPTEntityTableHeaderView *_headerView;
    GLUEButton *_playButton;
    UIView *_offlineStateView;
}

@property(nonatomic, getter=isViewModelUpdateQueued) _Bool viewModelUpdateQueued; // @synthesize viewModelUpdateQueued=_viewModelUpdateQueued;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIView *offlineStateView; // @synthesize offlineStateView=_offlineStateView;
@property(retain, nonatomic) GLUEButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) SPTEntityTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIViewController<SPTFreeTierRecommendationsPlaylistFooterViewController> *recommendationsFooter; // @synthesize recommendationsFooter=_recommendationsFooter;
@property(readonly, nonatomic) SPTChartTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTChartFreeTierNavigationBarModel *navigationBarModel; // @synthesize navigationBarModel=_navigationBarModel;
@property(readonly, nonatomic) SPTChartFreeTierViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)updateFooterViewIfLoaded;
- (void)footerViewControllerUpdated:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)setupContentForOfflineMode:(_Bool)arg1;
- (void)loadViewModelOrShowOfflineView;
- (void)chartFreeTierViewModelDidChangeOfflineState:(id)arg1;
- (void)chartFreeTierViewModel:(id)arg1 error:(id)arg2;
- (void)chartFreeTierViewModelDidChangePlaybackState:(id)arg1;
- (void)chartFreeTierViewModel:(id)arg1 didLoadImage:(id)arg2;
- (void)chartFreeTierViewModelDidChange:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)sp_updateContentInsets;
- (void)updateTableInsets;
- (void)updatePlayButton;
- (void)updateHeaderViewImage;
- (void)updateHeaderTitleAccessoryView;
- (void)updateHeaderView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithURL:(id)arg1 viewModel:(id)arg2 navigationBarModel:(id)arg3 recommendedPlaylistFooter:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

