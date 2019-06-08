//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, RHStationMO, RHStationSession, RHTrackMO, RHUpsellBannerViewController, UIButton, UIImageView, UILabel, UIScrollView, UISlider, UITableView, UIView, ZDSFetchedResultsChanges, ZDSPromise;

@interface RHTuningViewController : RHViewController <UITableViewDataSource, UITableViewDelegate, NSFetchedResultsControllerDelegate>
{
    float _variety;
    UIScrollView *_scrollView;
    UIView *_handle;
    UILabel *_handleLabel;
    UIImageView *_leftGrip;
    UIImageView *_rightGrip;
    UIView *_mask;
    UIView *_contentView;
    UIImageView *_albumImageView;
    UILabel *_stationLabel;
    UILabel *_trackLabel;
    UILabel *_artistLabel;
    UITableView *_tableView;
    UILabel *_upcomingTracksLabel;
    UILabel *_varietyLabel;
    UISlider *_varietySlider;
    UIButton *_plusButton;
    UIButton *_minusButton;
    UIView *_loadingOverlay;
    UIView *_tableContainerView;
    UIView *_upNextContainer;
    NSFetchedResultsController *_upcomingTracksController;
    ZDSPromise *_promisedVarietyChange;
    RHStationMO *_currentStation;
    RHStationSession *_currentSession;
    RHTrackMO *_currentTrack;
    ZDSFetchedResultsChanges *_fetchedResultsChanges;
    RHUpsellBannerViewController *_upsellBanner;
}

@property(retain, nonatomic) RHUpsellBannerViewController *upsellBanner; // @synthesize upsellBanner=_upsellBanner;
@property(retain, nonatomic) ZDSFetchedResultsChanges *fetchedResultsChanges; // @synthesize fetchedResultsChanges=_fetchedResultsChanges;
@property(nonatomic) float variety; // @synthesize variety=_variety;
@property(retain, nonatomic) RHTrackMO *currentTrack; // @synthesize currentTrack=_currentTrack;
@property(retain, nonatomic) RHStationSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) RHStationMO *currentStation; // @synthesize currentStation=_currentStation;
@property(retain, nonatomic) ZDSPromise *promisedVarietyChange; // @synthesize promisedVarietyChange=_promisedVarietyChange;
@property(retain, nonatomic) NSFetchedResultsController *upcomingTracksController; // @synthesize upcomingTracksController=_upcomingTracksController;
@property(nonatomic) __weak UIView *upNextContainer; // @synthesize upNextContainer=_upNextContainer;
@property(nonatomic) __weak UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(nonatomic) __weak UIView *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(nonatomic) __weak UIButton *minusButton; // @synthesize minusButton=_minusButton;
@property(nonatomic) __weak UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(nonatomic) __weak UISlider *varietySlider; // @synthesize varietySlider=_varietySlider;
@property(nonatomic) __weak UILabel *varietyLabel; // @synthesize varietyLabel=_varietyLabel;
@property(nonatomic) __weak UILabel *upcomingTracksLabel; // @synthesize upcomingTracksLabel=_upcomingTracksLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(nonatomic) __weak UILabel *trackLabel; // @synthesize trackLabel=_trackLabel;
@property(nonatomic) __weak UILabel *stationLabel; // @synthesize stationLabel=_stationLabel;
@property(nonatomic) __weak UIImageView *albumImageView; // @synthesize albumImageView=_albumImageView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *mask; // @synthesize mask=_mask;
@property(nonatomic) __weak UIImageView *rightGrip; // @synthesize rightGrip=_rightGrip;
@property(nonatomic) __weak UIImageView *leftGrip; // @synthesize leftGrip=_leftGrip;
@property(nonatomic) __weak UILabel *handleLabel; // @synthesize handleLabel=_handleLabel;
@property(nonatomic) __weak UIView *handle; // @synthesize handle=_handle;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (id)playerController;
- (id)imageProvider;
- (id)reachabilityService;
- (id)dataController;
- (id)dependencies;
- (float)nearestVarietyFor:(float)arg1;
@property(readonly, nonatomic, getter=isOpened) _Bool opened;
- (_Bool)isLoading;
- (void)updateInterfaceForAvailableData;
- (void)presentVarietyChangeRejected:(id)arg1;
- (void)storeVarietyChange;
- (_Bool)shouldAnimateTableViewChanges;
- (void)configureForNetworkStatus;
- (void)configureHandleGrips;
- (void)configureMask;
- (void)configureSlider;
- (void)configureSeparatorsForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configureSeparatorsForCells;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configureForPlayer;
- (_Bool)verifySkipsRemaining;
- (void)networkStatusDidChange:(id)arg1;
- (void)stationSessionSyncChange:(id)arg1;
- (void)trackDidChange:(id)arg1;
- (void)decrementSlider:(id)arg1;
- (void)incrementSlider:(id)arg1;
- (void)varietySliderValueChanged:(id)arg1;
- (void)handleTapped:(id)arg1;
- (void)deletionButtonTapped:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)maxUpcomingTracks;
- (long long)upcomingTrackCountForController:(id)arg1;
- (void)addAlbumImageForTrack:(id)arg1;
- (void)addAlbumImage;
- (void)layoutiPhone;
- (void)layoutiPad;
- (void)viewWillLayoutSubviews;
- (void)viewUnloading;
- (void)loadedViewiPhone;
- (void)loadedViewiPad;
- (void)viewDidLoad;
- (void)close;
- (void)dealloc;
- (void)updateNavigationBarWithCurrentState;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

