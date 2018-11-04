//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TV4ViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "_TtP7TV4Play17CanReloadContents_-Protocol.h"

@class NSArray, NSString, TV4Category, TV4ModelsWithAlphaKeys;

@interface TV4AlphaViewController : TV4ViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, _TtP7TV4Play17CanReloadContents_>
{
    _Bool _shouldReload;
    _Bool _isUpdatingCollectionViewLayout;
    TV4Category *_category;
    NSString *_tag;
    NSArray *_allAssets;
    TV4ModelsWithAlphaKeys *_assetsWithAlphaKeys;
}

@property(nonatomic) _Bool isUpdatingCollectionViewLayout; // @synthesize isUpdatingCollectionViewLayout=_isUpdatingCollectionViewLayout;
@property(retain, nonatomic) TV4ModelsWithAlphaKeys *assetsWithAlphaKeys; // @synthesize assetsWithAlphaKeys=_assetsWithAlphaKeys;
@property(copy, nonatomic) NSArray *allAssets; // @synthesize allAssets=_allAssets;
@property(nonatomic) _Bool shouldReload; // @synthesize shouldReload=_shouldReload;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) TV4Category *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)trackPageEvent;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)getAssetForIndexPath:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)getStartCellForView:(id)arg1 indexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)handlePullToRefreshInStartViewController;
- (void)registerPullToRefreshActions;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadPrograms;
- (_Bool)isLoadingAllPrograms;
- (void)reloadContents;
- (void)reloadCollectionView;
- (void)setupCollectionView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateProgress;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

