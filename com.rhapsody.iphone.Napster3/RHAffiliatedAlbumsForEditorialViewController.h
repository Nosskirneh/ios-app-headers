//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "PSTCollectionViewDataSource-Protocol.h"
#import "PSTCollectionViewDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, PSTCollectionView, RHDataController, RHEditorialMO, RHNoDataOverlay, UILabel, UIView;

@interface RHAffiliatedAlbumsForEditorialViewController : RHViewController <PSTCollectionViewDataSource, PSTCollectionViewDelegate, NSFetchedResultsControllerDelegate>
{
    RHDataController *_dataController;
    RHEditorialMO *_editorial;
    NSFetchedResultsController *_fetchedResultsController;
    PSTCollectionView *_collectionView;
    UIView *_headerView;
    UILabel *_titleLabel;
    RHNoDataOverlay *_noDataOverlay;
}

@property(nonatomic) __weak RHNoDataOverlay *noDataOverlay; // @synthesize noDataOverlay=_noDataOverlay;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak PSTCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) RHEditorialMO *editorial; // @synthesize editorial=_editorial;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (void)updateInterfaceForAvailableData;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)viewUnloading;
- (void)viewDidLoad;
- (id)initWithDataController:(id)arg1 editorial:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

