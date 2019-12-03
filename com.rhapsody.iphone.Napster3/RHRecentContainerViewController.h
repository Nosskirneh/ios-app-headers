//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHSwimLaneViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "PSTCollectionViewDataSource-Protocol.h"
#import "PSTCollectionViewDelegate-Protocol.h"

@class NSFetchedResultsController, NSLayoutConstraint, NSString, RHImageFilterController, UILabel, UIPageControl, UIView;

@interface RHRecentContainerViewController : RHSwimLaneViewController <NSFetchedResultsControllerDelegate, PSTCollectionViewDataSource, PSTCollectionViewDelegate>
{
    UIPageControl *_pageControl;
    UIView *_callToActionView;
    UILabel *_welcomeLabel;
    UILabel *_serviceLabel;
    UILabel *_instructionsLabel;
    NSLayoutConstraint *_callToActionViewTopConstraint;
    NSFetchedResultsController *_fetchedResultsController;
    NSString *_lastUserGuid;
}

@property(nonatomic) __weak NSString *lastUserGuid; // @synthesize lastUserGuid=_lastUserGuid;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(nonatomic) __weak NSLayoutConstraint *callToActionViewTopConstraint; // @synthesize callToActionViewTopConstraint=_callToActionViewTopConstraint;
@property(nonatomic) __weak UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(nonatomic) __weak UILabel *serviceLabel; // @synthesize serviceLabel=_serviceLabel;
@property(nonatomic) __weak UILabel *welcomeLabel; // @synthesize welcomeLabel=_welcomeLabel;
@property(nonatomic) __weak UIView *callToActionView; // @synthesize callToActionView=_callToActionView;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
- (void).cxx_destruct;
@property(readonly, nonatomic) RHImageFilterController *imageFilterController;
- (id)playbackService;
- (id)dependencies;
@property(readonly, nonatomic) long long maxRecentItems;
- (id)newFetchedResultsControllerWithPromise:(id *)arg1;
- (void)scrollToCurrentItem:(_Bool)arg1;
- (void)refreshData;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateInterfaceForAvailableData;
- (struct CGSize)cellSizeForCurrentConstraints;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)networkStatusDidChange:(id)arg1;
- (void)userLoggedInStateChanged:(id)arg1;
- (void)pageControlTapped:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)viewDidLayoutSubviewsAfterSizeChanged;
- (void)setZoomOffset:(double)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewUnloading;
@property(readonly, nonatomic) NSString *collectionViewNibName;
- (void)viewDidLoad;
- (id)initWithDataController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
