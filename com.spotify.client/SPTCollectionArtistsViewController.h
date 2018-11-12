//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPObjectRepresentation-Protocol.h"
#import "SPTBarButtonItemManagerObserver-Protocol.h"
#import "SPTCollectionArtistsModelDelegate-Protocol.h"
#import "SPTCollectionEntityListObserver-Protocol.h"
#import "SPTCollectionFilterSearchBarDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSURL, SPTCollectionFilterSearchBar, SPTInfoView, SPTProgressView, UITableView;
@protocol GLUEImageLoader, GLUETheme, SPTBarButtonItemManager, SPTBrowseRedirectButtonProvider, SPTCollectionArtistsModel, SPTCollectionLogger, SPTCollectionPlatformTestManager, SPTNUXModifying, SPTPageContainer, SPTViewLogger;

@interface SPTCollectionArtistsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, SPObjectRepresentation, SPTBarButtonItemManagerObserver, SPTCollectionEntityListObserver, SPTCollectionFilterSearchBarDelegate, SPTCollectionArtistsModelDelegate, SPContentInsetViewController, SPTPageController>
{
    _Bool _hasLoggedDataDidLoad;
    id <SPTCollectionArtistsModel> _artistsModel;
    UITableView *_tableView;
    SPTInfoView *_infoView;
    long long _savedSeparatorStyle;
    SPTCollectionFilterSearchBar *_filterSearchBar;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTCollectionLogger> _logger;
    NSString *_currentUserName;
    id <SPTNUXModifying> _NUXModifier;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTBrowseRedirectButtonProvider> _browseRedirectButtonProvider;
    id <GLUETheme> _theme;
    SPTProgressView *_progressView;
    id <SPTViewLogger> _viewLogger;
}

@property(nonatomic) _Bool hasLoggedDataDidLoad; // @synthesize hasLoggedDataDidLoad=_hasLoggedDataDidLoad;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) __weak id <SPTBrowseRedirectButtonProvider> browseRedirectButtonProvider; // @synthesize browseRedirectButtonProvider=_browseRedirectButtonProvider;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(retain, nonatomic) id <SPTNUXModifying> NUXModifier; // @synthesize NUXModifier=_NUXModifier;
@property(copy, nonatomic) NSString *currentUserName; // @synthesize currentUserName=_currentUserName;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTCollectionFilterSearchBar *filterSearchBar; // @synthesize filterSearchBar=_filterSearchBar;
@property(nonatomic) long long savedSeparatorStyle; // @synthesize savedSeparatorStyle=_savedSeparatorStyle;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <SPTCollectionArtistsModel> artistsModel; // @synthesize artistsModel=_artistsModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)logViewDataDidLoadIfLoadedAndNotAlreadyLogged;
- (void)updateRightBarButtonItem;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (_Bool)isEmpty;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)spt_referrerIdentifier;
- (id)URI;
- (_Bool)filterBarActive;
- (void)contextMenuButtonPressed:(id)arg1;
- (void)setFilterTextChanged:(id)arg1;
- (void)filterSearchBarContextButtonTapped:(id)arg1;
- (void)filterSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)updateInfoView;
- (void)modifyInfoViewForEmptyStaticFilterContext;
- (void)modifyInfoViewForEmptyFilterContext;
- (void)modifyInfoViewForNUX;
- (long long)offlineSyncStatusForArtistAtIndexPath:(id)arg1;
- (id)URL;
- (void)metadataDidUpdate:(id)arg1 forArtistAtIndexPaths:(id)arg2;
- (void)metadataDidUpdate:(id)arg1 forArtistAtIndexPath:(id)arg2;
- (void)entityListDidReload:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)doneScrolling;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configureOfflineSyncStatusForCell:(id)arg1 withStatus:(long long)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1;
- (void)setupContentViewForCell:(id)arg1;
- (void)sp_updateContentInsets;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 glueImageLoader:(id)arg2 collectionLogger:(id)arg3 currentUserName:(id)arg4 NUXModifier:(id)arg5 barButtonItemManager:(id)arg6 collectionTestManager:(id)arg7 browseRedirectButtonProvider:(id)arg8 viewLogger:(id)arg9;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

