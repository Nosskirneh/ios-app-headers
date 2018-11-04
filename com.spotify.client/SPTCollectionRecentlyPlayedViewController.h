//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTCollectionRecentlyPlayedViewModelDelegate.h"
#import "SPTCollectionSupplementaryViewProviderDelegate.h"
#import "SPTCollectionTableViewControllerProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GLUEEntityRowStyle, NSString, SPTCollectionRecentlyPlayedViewModel, SPTCollectionTheme, UIButton<GLUEStyleable>, UITableView;

@interface SPTCollectionRecentlyPlayedViewController : UIViewController <SPContentInsetViewController, SPTCollectionRecentlyPlayedViewModelDelegate, UITableViewDataSource, UITableViewDelegate, SPTCollectionSupplementaryViewProviderDelegate, SPTCollectionTableViewControllerProtocol>
{
    _Bool _hasLoggedDataDidLoad;
    SPTCollectionRecentlyPlayedViewModel *_viewModel;
    id <SPTCollectionSupplementaryViewProvider> _supplementaryViewProvider;
    id <GLUEImageLoader> _imageLoader;
    SPTCollectionTheme *_collectionTheme;
    GLUEEntityRowStyle *_entityRowArtistStyle;
    GLUEEntityRowStyle *_entityRowPlaylistStyle;
    NSString *_viewURI;
    id <SPTCollectionLogger> _logger;
    id <SPTViewLogger> _viewLogger;
    NSString *_viewLoggerIdentifier;
    UITableView *_tableView;
    UIButton<GLUEStyleable> *_editButton;
}

@property(retain, nonatomic) UIButton<GLUEStyleable> *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) _Bool hasLoggedDataDidLoad; // @synthesize hasLoggedDataDidLoad=_hasLoggedDataDidLoad;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *viewLoggerIdentifier; // @synthesize viewLoggerIdentifier=_viewLoggerIdentifier;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *viewURI; // @synthesize viewURI=_viewURI;
@property(retain, nonatomic) GLUEEntityRowStyle *entityRowPlaylistStyle; // @synthesize entityRowPlaylistStyle=_entityRowPlaylistStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *entityRowArtistStyle; // @synthesize entityRowArtistStyle=_entityRowArtistStyle;
@property(retain, nonatomic) SPTCollectionTheme *collectionTheme; // @synthesize collectionTheme=_collectionTheme;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTCollectionSupplementaryViewProvider> supplementaryViewProvider; // @synthesize supplementaryViewProvider=_supplementaryViewProvider;
@property(retain, nonatomic) SPTCollectionRecentlyPlayedViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)sp_updateContentInsets;
- (void)toggleEdit:(id)arg1;
- (id)editButtonTitleForEditingState:(_Bool)arg1;
- (void)logViewDataDidLoadIfLoadedAndNotAlreadyLogged;
- (void)updateEditButton;
- (void)updateAdditionalViews;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)setupMultipleAccessoriesViewForCell:(id)arg1 status:(long long)arg2 accessoryLabelType:(long long)arg3;
- (void)setupLeadingAccessoryForCell:(id)arg1 entityItem:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1;
- (void)setupContentViewForCell:(id)arg1;
- (long long)offlineSyncStatusForSPTOfflineSyncStatus:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)supplementaryViewProviderDidLoad:(id)arg1;
- (id)provideTrailingAccessoryView;
- (void)supplementaryViewProviderRetryAfterError:(id)arg1;
- (void)viewModel:(id)arg1 didFailWithError:(id)arg2;
- (void)viewModel:(id)arg1 loading:(_Bool)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 supplementaryViewProvider:(id)arg2 imageLoader:(id)arg3 viewURI:(id)arg4 collectionLogger:(id)arg5 viewLogger:(id)arg6 viewLoggerIdentifier:(id)arg7 theme:(id)arg8;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
