//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTCollectionEpisodesViewModelDelegate-Protocol.h"
#import "SPTCollectionTableViewControllerProtocol-Protocol.h"
#import "SPTFreeTierCollectionYourLibraryScrollDelegate-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPodcastCollectionDataSourceUpdateDelegate-Protocol.h"
#import "SPTScrollToTopViewController-Protocol.h"
#import "SPViewController-Protocol.h"

@class NSString, NSURL, SPTCollectionEpisodesActionViewModel, SPTCollectionEpisodesDataSource, SPTCollectionEpisodesViewModel, SPTPodcastLogger, SPTProgressView, UITableView, UIView;
@protocol SPTFreeTierCollectionYourLibraryScrollProtocol, SPTImageLoader, SPTPageContainer, SPTPodcastEpisodeCellConfigurator, SPTPodcastTestManager, SPTShowInfoViewProvider;

@interface SPTCollectionEpisodesViewController : UIViewController <SPTImageLoaderDelegate, SPTCollectionEpisodesViewModelDelegate, SPContentInsetViewController, SPViewController, SPTScrollToTopViewController, SPTPodcastCollectionDataSourceUpdateDelegate, SPTPageController, SPTCollectionTableViewControllerProtocol, SPTFreeTierCollectionYourLibraryScrollDelegate>
{
    id <SPTFreeTierCollectionYourLibraryScrollProtocol> _ylScrollDelegate;
    SPTCollectionEpisodesViewModel *_viewModel;
    SPTCollectionEpisodesActionViewModel *_actionViewModel;
    id <SPTImageLoader> _imageLoader;
    UITableView *_tableView;
    id <SPTShowInfoViewProvider> _infoViewProvider;
    UIView *_infoView;
    SPTProgressView *_progressView;
    SPTPodcastLogger *_logger;
    id <SPTPodcastTestManager> _testManager;
    id <SPTPodcastEpisodeCellConfigurator> _cellConfigurator;
    SPTCollectionEpisodesDataSource *_collectionEpisodesDataSource;
    NSString *_audioCellIdentifier;
}

@property(retain, nonatomic) NSString *audioCellIdentifier; // @synthesize audioCellIdentifier=_audioCellIdentifier;
@property(retain, nonatomic) SPTCollectionEpisodesDataSource *collectionEpisodesDataSource; // @synthesize collectionEpisodesDataSource=_collectionEpisodesDataSource;
@property(retain, nonatomic) id <SPTPodcastEpisodeCellConfigurator> cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) id <SPTShowInfoViewProvider> infoViewProvider; // @synthesize infoViewProvider=_infoViewProvider;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTCollectionEpisodesActionViewModel *actionViewModel; // @synthesize actionViewModel=_actionViewModel;
@property(retain, nonatomic) SPTCollectionEpisodesViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTFreeTierCollectionYourLibraryScrollProtocol> ylScrollDelegate; // @synthesize ylScrollDelegate=_ylScrollDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)spt_referrerIdentifier;
@property(readonly, nonatomic) NSURL *URI;
- (void)sp_updateContentInsets;
- (void)didUpdateDataSourceForIndexPath:(id)arg1;
- (void)spt_scrollToTop;
- (void)collectionEpisodesViewModelDidUpdatePlaybackRestrictions:(id)arg1;
- (void)viewModel:(id)arg1 episodesDidFinishLoadingWithError:(id)arg2;
- (void)viewModelDidUpdatePlayingEpisode:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)hideEmptyStateInfoView;
- (void)showEmptyStateInfoView;
- (id)playStateForIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)updateVisibleCells;
- (void)updateEditableModeAnimated:(_Bool)arg1 isEditing:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateEditButtonState;
- (void)setupTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEpisodesViewModel:(id)arg1 actionViewModel:(id)arg2 imageLoader:(id)arg3 infoViewProvider:(id)arg4 logger:(id)arg5 testManager:(id)arg6 episodeCellConfigurator:(id)arg7 collectionEpisodesDataSource:(id)arg8;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

