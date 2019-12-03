//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "RHTappableHeaderViewController-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSString, RHActionSheet, RHDataController, RHLoadingOverlay, RHNavigationService, RHPlaylistMO, RHSharingService, UILabel, UITableView, UIView, ZDSPromise, _TtC7Napster10NoDataView;
@protocol RHAlertPresenter;

@interface RHMemberPlaylistsViewController : RHViewController <UITableViewDataSource, UITableViewDelegate, NSFetchedResultsControllerDelegate, UIGestureRecognizerDelegate, UITextFieldDelegate, RHTappableHeaderViewController>
{
    _Bool _fetchedResultsCountBeforeChange;
    RHPlaylistMO *_selectedPlaylist;
    unsigned long long _mode;
    RHDataController *_dataController;
    NSFetchedResultsController *_fetchedResultsController;
    UIView *_headerView;
    UITableView *_tableView;
    UILabel *_titleLabel;
    ZDSPromise *_loadingPromise;
    RHLoadingOverlay *_loadingOverlay;
    RHActionSheet *_actionSheet;
    _TtC7Napster10NoDataView *_noDataView;
}

@property(nonatomic) __weak _TtC7Napster10NoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) __weak RHActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak RHLoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) ZDSPromise *loadingPromise; // @synthesize loadingPromise=_loadingPromise;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool fetchedResultsCountBeforeChange; // @synthesize fetchedResultsCountBeforeChange=_fetchedResultsCountBeforeChange;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) RHPlaylistMO *selectedPlaylist; // @synthesize selectedPlaylist=_selectedPlaylist;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <RHAlertPresenter> alertPresenter;
@property(readonly, nonatomic) RHSharingService *sharingService;
- (id)reachabilityService;
- (id)dependencies;
- (id)metricsProperties;
- (id)metricsScreenEvent;
- (id)metricsScreenName;
- (id)createNoDataView;
- (void)renamePlaylist:(id)arg1;
- (void)choosePlaylistForTracksFromPlaylist:(id)arg1;
- (void)queuePlaylist:(id)arg1;
- (void)playPlaylist:(id)arg1;
- (void)showPlaylist;
- (id)tableIndexPathFromFetchedResultsIndexPath:(id)arg1;
- (id)fetchedResultsIndexPathFromTableIndexPath:(id)arg1;
- (unsigned long long)tableSectionFromFetchedResultsSection:(unsigned long long)arg1;
- (unsigned long long)fetchedResultsSectionFromTableSection:(unsigned long long)arg1;
- (_Bool)shouldAnimateTableViewChanges;
- (void)removePlaylistFromDownloads:(id)arg1;
- (void)deletePlaylist:(id)arg1;
- (void)askForConfirmationToDeleteDownloads:(id)arg1;
- (void)askForConfirmationToDeletePlaylist:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)playlistAtIndexPath:(id)arg1;
- (id)cellIdentifierForIndexPath:(id)arg1;
- (void)indicateAvailableData:(_Bool)arg1 loading:(_Bool)arg2;
- (void)updateInterfaceForAvailableData;
- (id)memberNoDataMessage;
- (void)refreshViews;
- (void)recognizedLongPress:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (_Bool)isCreateNewPlaylistSection:(long long)arg1;
- (_Bool)isCreateNewPlaylistIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewUnloading;
- (void)reloadData;
- (void)viewDidLoad;
- (void)tappedNavigationItem:(id)arg1;
- (void)updateNavigationItemTitle;
- (void)dealloc;
- (id)notificationCenter;
- (id)initForFollowingPlaylistsWithWithDataController:(id)arg1;
- (id)initForDownloadedPlaylistsWithDataController:(id)arg1 metricsSource:(id)arg2;
- (id)initForPlaylistsInLibraryWithDataController:(id)arg1 metricsSource:(id)arg2;
- (id)initWithDataController:(id)arg1 mode:(unsigned long long)arg2 metricsSource:(id)arg3;
@property(readonly, nonatomic) RHNavigationService *navigationService;
@property(readonly, nonatomic) NSArray *sortingOptions;
- (void)sortingChanged:(id)arg1;
@property(nonatomic) long long sorting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
