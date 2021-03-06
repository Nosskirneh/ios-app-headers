//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHBaseCollectionViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSString;

@interface RHHomeEditorialsViewController_ipad : RHBaseCollectionViewController <NSFetchedResultsControllerDelegate>
{
}

- (void)controllerDidChangeContent:(id)arg1;
- (id)reachabilityService;
- (id)dependencies;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)sortEditorialsByCategory:(id)arg1;
- (void)showEditorial:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateModel;
- (void)reloadViewData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

