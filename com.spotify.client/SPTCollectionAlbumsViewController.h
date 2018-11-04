//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPObjectRepresentation.h"
#import "SPTBarButtonItemManagerObserver.h"
#import "SPTCollectionEntityListObserver.h"
#import "SPTCollectionFilterSearchBarDelegate.h"
#import "SPTPageController.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GLUEEntityRowStyle, NSString, NSURL, SPTCollectionFilterSearchBar, SPTInfoView, SPTProgressView, UITableView;

@interface SPTCollectionAlbumsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, SPObjectRepresentation, SPTCollectionEntityListObserver, SPTBarButtonItemManagerObserver, SPTCollectionFilterSearchBarDelegate, SPContentInsetViewController, SPTPageController>
{
    id <SPTProductState> _productState;
    _Bool _hasLoggedDataDidLoad;
    UITableView *_tableView;
    id <SPTCollectionAlbumsModel> _albumsModel;
    SPTInfoView *_infoView;
    long long _savedSeparatorStyle;
    SPTCollectionFilterSearchBar *_filterSearchBar;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTCollectionLogger> _logger;
    id <SPTNUXModifying> _NUXModifier;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTBrowseRedirectButtonProvider> _browseRedirectButtonProvider;
    SPTProgressView *_progressView;
    id <GLUETheme> _theme;
    GLUEEntityRowStyle *_albumRowStyle;
    id <SPTViewLogger> _viewLogger;
}

@property(nonatomic) _Bool hasLoggedDataDidLoad; // @synthesize hasLoggedDataDidLoad=_hasLoggedDataDidLoad;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) GLUEEntityRowStyle *albumRowStyle; // @synthesize albumRowStyle=_albumRowStyle;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) __weak id <SPTBrowseRedirectButtonProvider> browseRedirectButtonProvider; // @synthesize browseRedirectButtonProvider=_browseRedirectButtonProvider;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(retain, nonatomic) id <SPTNUXModifying> NUXModifier; // @synthesize NUXModifier=_NUXModifier;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTCollectionFilterSearchBar *filterSearchBar; // @synthesize filterSearchBar=_filterSearchBar;
@property(nonatomic) long long savedSeparatorStyle; // @synthesize savedSeparatorStyle=_savedSeparatorStyle;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) id <SPTCollectionAlbumsModel> albumsModel; // @synthesize albumsModel=_albumsModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)logViewDataDidLoadIfLoadedAndNotAlreadyLogged;
- (void)updateRightBarButtonItem;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (_Bool)isEmpty;
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
- (long long)offlineSyncStatusForAlbumAtIndexPath:(id)arg1;
- (id)URL;
- (void)entityListDidReload:(id)arg1;
- (void)configureOfflineSyncStatusForCell:(id)arg1 withStatus:(long long)arg2;
- (void)setupLeadingAccessoryForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1;
- (void)setupContentViewForCell:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)sp_updateContentInsets;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 productState:(id)arg2 glueImageLoader:(id)arg3 collectionLogger:(id)arg4 NUXModifier:(id)arg5 barButtonItemManager:(id)arg6 collectionTestManager:(id)arg7 browseRedirectButtonProvider:(id)arg8 viewLogger:(id)arg9;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

