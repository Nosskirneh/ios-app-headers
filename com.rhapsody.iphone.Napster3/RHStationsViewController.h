//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSString, RHActionSheet, RHDataController, RHGenreMO, RHLoadingOverlay, RHStationMO, UILabel, UITableView, UIView, ZDSPromise, _TtC7Napster12Dependencies;
@protocol RHImageProvider;

@interface RHStationsViewController : RHViewController <UITableViewDataSource, UITableViewDelegate, NSFetchedResultsControllerDelegate>
{
    _Bool _beforeShouldShowSectionIndex;
    int _mode;
    RHDataController *_dataController;
    RHGenreMO *_genre;
    RHStationMO *_selectedStation;
    NSArray *_stations;
    NSFetchedResultsController *_fetchedResultsController;
    UIView *_headerView;
    UILabel *_titleLabel;
    UITableView *_tableView;
    ZDSPromise *_loadingPromise;
    RHLoadingOverlay *_loadingOverlay;
    UIView *_noDataView;
    RHActionSheet *_actionSheet;
    ZDSPromise *_promisedImage;
    id <RHImageProvider> _imageProvider;
}

@property(retain, nonatomic) id <RHImageProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) ZDSPromise *promisedImage; // @synthesize promisedImage=_promisedImage;
@property(nonatomic) __weak RHActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) __weak RHLoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) ZDSPromise *loadingPromise; // @synthesize loadingPromise=_loadingPromise;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool beforeShouldShowSectionIndex; // @synthesize beforeShouldShowSectionIndex=_beforeShouldShowSectionIndex;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) NSArray *stations; // @synthesize stations=_stations;
@property(retain, nonatomic) RHStationMO *selectedStation; // @synthesize selectedStation=_selectedStation;
@property(retain, nonatomic) RHGenreMO *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC7Napster12Dependencies *dependencies;
- (id)metricsProperties;
- (id)metricsScreenEvent;
- (id)metricsScreenName;
- (void)didSignOut:(id)arg1;
- (void)removeStationFromLibrary:(id)arg1;
- (void)addStationToLibrary:(id)arg1;
- (_Bool)shouldAnimateTableViewChanges;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)indicateAvailableData:(_Bool)arg1 loading:(_Bool)arg2;
- (void)updateInterfaceForAvailableData;
- (void)refreshViews;
- (void)tappedPlusButton:(id)arg1 withEvent:(id)arg2;
- (id)stationsInLibraryController;
- (void)updateFetchedObjects;
- (id)stationForIndexPath:(id)arg1;
- (id)sourceMetricLocation;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (_Bool)shouldShowSectionIndex;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadingPromiseResolved;
- (void)setupFetchedResultsController;
- (void)viewDidLoad;
- (id)initForRecentStationsWithDependencies:(id)arg1 metricsSource:(id)arg2;
- (id)initForProgrammedStationsWithDependencies:(id)arg1 genre:(id)arg2 metricsSource:(id)arg3;
- (id)initForStationsInLibraryWithDependencies:(id)arg1 metricsSource:(id)arg2;
- (id)initWithDependencies:(id)arg1 mode:(int)arg2 genre:(id)arg3 title:(id)arg4 metricsSource:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

