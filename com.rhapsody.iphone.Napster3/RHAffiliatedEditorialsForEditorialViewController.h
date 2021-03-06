//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, RHDataController, RHEditorialMO, RHLoadingOverlay, RHNoDataOverlay, UILabel, UITableView, UIView, ZDSPromise;

@interface RHAffiliatedEditorialsForEditorialViewController : RHViewController <UITableViewDataSource, UITableViewDelegate, NSFetchedResultsControllerDelegate>
{
    _Bool _shouldAnimateFetchedResultsChanges;
    RHDataController *_dataController;
    RHEditorialMO *_editorial;
    NSFetchedResultsController *_fetchedResultsController;
    ZDSPromise *_loadingPromise;
    UIView *_headerView;
    UILabel *_titleLabel;
    UITableView *_tableView;
    RHLoadingOverlay *_loadingOverlay;
    RHNoDataOverlay *_noDataOverlay;
}

@property(nonatomic) __weak RHNoDataOverlay *noDataOverlay; // @synthesize noDataOverlay=_noDataOverlay;
@property(nonatomic) __weak RHLoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) ZDSPromise *loadingPromise; // @synthesize loadingPromise=_loadingPromise;
@property(nonatomic) _Bool shouldAnimateFetchedResultsChanges; // @synthesize shouldAnimateFetchedResultsChanges=_shouldAnimateFetchedResultsChanges;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) RHEditorialMO *editorial; // @synthesize editorial=_editorial;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (id)metricsProperties;
- (id)metricsScreenName;
- (id)playbackService;
- (id)reachabilityService;
- (id)dependencies;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configureData;
- (void)indicateAvailableData:(_Bool)arg1 loading:(_Bool)arg2;
- (void)updateInterfaceForAvailableData;
- (void)playViewTappedForEditorial:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)networkStatusDidChange:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewUnloading;
- (void)viewDidLoad;
- (id)initWithDataController:(id)arg1 editorial:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

