//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPObjectRepresentation-Protocol.h"
#import "SPTCollectionBannerViewDelegate-Protocol.h"
#import "SPTCollectionOverviewNavigationListDelegate-Protocol.h"
#import "SPTOfflineSyncModelDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTScrollToTopViewController-Protocol.h"
#import "SPViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSURL, SPTCollectionBannerView, SPTCollectionOverviewNavigationModel, SPTCollectionProgressBarBanner, UITableView;
@protocol GLUETheme, SPTCollectionLogger, SPTCollectionTableViewControllerProtocol, SPTLinkDispatcher, SPTOfflineSyncModel, SPTPageContainer;

@interface SPTCollectionOverviewViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPObjectRepresentation, SPTOfflineSyncModelDelegate, SPContentInsetViewController, SPTCollectionBannerViewDelegate, SPTCollectionOverviewNavigationListDelegate, SPTScrollToTopViewController, SPViewController, SPTPageController>
{
    UIViewController<SPTCollectionTableViewControllerProtocol> *_rootFolderViewController;
    UITableView *_tableView;
    UITableView *_headerTableView;
    SPTCollectionBannerView *_bannerView;
    id <SPTOfflineSyncModel> _offlineSyncModel;
    SPTCollectionProgressBarBanner *_progressBarView;
    id <SPTCollectionLogger> _logger;
    SPTCollectionOverviewNavigationModel *_model;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTCollectionOverviewNavigationModel *model; // @synthesize model=_model;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTCollectionProgressBarBanner *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) id <SPTOfflineSyncModel> offlineSyncModel; // @synthesize offlineSyncModel=_offlineSyncModel;
@property(retain, nonatomic) SPTCollectionBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UITableView *headerTableView; // @synthesize headerTableView=_headerTableView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIViewController<SPTCollectionTableViewControllerProtocol> *rootFolderViewController; // @synthesize rootFolderViewController=_rootFolderViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)spt_scrollToTop;
- (void)navigationListDidChange:(id)arg1;
- (void)offlineSyncModelDidUpdate:(id)arg1;
- (void)offlineSyncModel:(id)arg1 error:(id)arg2;
- (void)offlineSyncModelDidEndSyncing:(id)arg1;
- (void)offlineSyncModelDidBeginSyncing:(id)arg1;
- (void)collectionBannerViewHidden:(id)arg1;
- (void)collectionBannerViewHiding:(id)arg1;
- (void)collectionBannerViewShowing:(id)arg1;
- (void)dismissBanner;
- (double)topOffsetForBanner;
- (double)heightForBanner;
- (void)presentBannerWithView:(id)arg1;
@property(readonly, nonatomic) NSURL *URI;
- (void)sp_updateContentInsets;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setupHeaderTable;
- (struct CGRect)headerTableViewFrame;
- (double)cellHeight;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionTableViewController:(id)arg1 offlineSyncModel:(id)arg2 collectionLogger:(id)arg3 model:(id)arg4 collectionTestManager:(id)arg5 linkDispatcher:(id)arg6;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

