//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHBaseCollectionViewController.h"

@class NSArray;

@interface RHFeaturedPlaylistsHomeCollectionViewController : RHBaseCollectionViewController
{
    NSArray *_fetchedObjects;
}

@property(retain, nonatomic) NSArray *fetchedObjects; // @synthesize fetchedObjects=_fetchedObjects;
- (void).cxx_destruct;
- (id)dependencies;
- (void)controllerDidChangeContent:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateModel;
- (void)reloadViewData;
- (void)viewDidLoad;
- (id)initWithFetchedResultsController:(id)arg1 loadingPromise:(id)arg2 viewSizePortrait:(struct CGSize)arg3 viewSizeLandscape:(struct CGSize)arg4 cellSizePortrait:(struct CGSize)arg5 cellSizeLandscape:(struct CGSize)arg6 cellLimit:(long long)arg7 flowLayout:(id)arg8;

@end

