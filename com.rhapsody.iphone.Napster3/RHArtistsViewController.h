//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, RHArtistMO, RHGenreMO, RHLoadingOverlay, RHNavigationService, UILabel, UITableView, UIView, ZDSPromise, _TtC7Napster10NoDataView, _TtC7Napster12Dependencies, _TtC7Napster14DataController, _TtC7Napster19ReachabilityService;

@interface RHArtistsViewController : RHViewController <UITableViewDataSource, UITableViewDelegate, NSFetchedResultsControllerDelegate>
{
    _Bool _fetchedResultsCountBeforeChange;
    RHArtistMO *_selectedArtist;
    RHGenreMO *_genre;
    RHArtistMO *_artist;
    _TtC7Napster14DataController *_dataController;
    _TtC7Napster19ReachabilityService *_reachabilityService;
    RHNavigationService *_navigationService;
    NSFetchedResultsController *_fetchedResultsController;
    unsigned long long _mode;
    UIView *_headerView;
    UITableView *_tableView;
    UILabel *_titleLabel;
    ZDSPromise *_loadingPromise;
    RHLoadingOverlay *_loadingOverlay;
    _TtC7Napster10NoDataView *_noDataView;
    _TtC7Napster12Dependencies *_dependencies;
}

@property(readonly, nonatomic) _TtC7Napster12Dependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(nonatomic) __weak _TtC7Napster10NoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) __weak RHLoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) ZDSPromise *loadingPromise; // @synthesize loadingPromise=_loadingPromise;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool fetchedResultsCountBeforeChange; // @synthesize fetchedResultsCountBeforeChange=_fetchedResultsCountBeforeChange;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(readonly, nonatomic) RHNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(readonly, nonatomic) _TtC7Napster19ReachabilityService *reachabilityService; // @synthesize reachabilityService=_reachabilityService;
@property(readonly, nonatomic) _TtC7Napster14DataController *dataController; // @synthesize dataController=_dataController;
@property(readonly, nonatomic) RHArtistMO *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) RHGenreMO *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) RHArtistMO *selectedArtist; // @synthesize selectedArtist=_selectedArtist;
- (void).cxx_destruct;
- (id)metricsProperties;
- (id)metricsScreenEvent;
- (id)metricsScreenName;
- (void)handleNetworkStatusChangedNotification:(id)arg1;
- (void)refreshViews;
- (id)showDownloadedAlbumsForArtist:(id)arg1 animated:(_Bool)arg2;
- (void)showAlbumsInLibraryForArtist:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAnimateTableViewChanges;
- (id)artistKeyPathForCurrentMode;
- (id)indexPathForArtist:(id)arg1;
- (id)artistAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)indicateAvailableData:(_Bool)arg1 loading:(_Bool)arg2;
- (void)updateInterfaceForAvailableData;
- (_Bool)shouldShowAvailableData;
- (void)didFailSessionValidation:(id)arg1;
- (void)didSignOut:(id)arg1;
- (id)sourceMetricLocation;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewUnloading;
- (void)reloadDownloadedArtists;
- (void)viewDidLoad;
- (id)initForDownloadedArtistsWithDependencies:(id)arg1 metricsSource:(id)arg2;
- (id)initForArtistsInLibraryWithDependencies:(id)arg1 metricsSource:(id)arg2;
- (id)initWithDependencies:(id)arg1 mode:(unsigned long long)arg2 genre:(id)arg3 artist:(id)arg4 title:(id)arg5 metricsSource:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

