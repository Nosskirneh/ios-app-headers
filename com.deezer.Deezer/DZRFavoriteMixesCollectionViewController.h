//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemsCollectionViewController.h"

#import "DZRLibraryItemCollectionViewCellDelegate-Protocol.h"
#import "DZRLibraryItemsCollectionViewProtocol-Protocol.h"
#import "DZRSearchAndSortViewDelegate-Protocol.h"

@class DZRSearchAndSortView, DeezerFriend, NSString, UIView;

@interface DZRFavoriteMixesCollectionViewController : DZRLibraryItemsCollectionViewController <DZRLibraryItemCollectionViewCellDelegate, DZRLibraryItemsCollectionViewProtocol, DZRSearchAndSortViewDelegate>
{
    DeezerFriend *_friend;
    UIView *_collectionViewHeaderView;
    DZRSearchAndSortView *_searchAndSortView;
}

@property(retain, nonatomic) DZRSearchAndSortView *searchAndSortView; // @synthesize searchAndSortView=_searchAndSortView;
@property(retain, nonatomic) UIView *collectionViewHeaderView; // @synthesize collectionViewHeaderView=_collectionViewHeaderView;
@property(retain, nonatomic) DeezerFriend *friend; // @synthesize friend=_friend;
- (void).cxx_destruct;
- (void)updateLayoutForCurrentInterfaceOrientation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)tabName;
- (id)navigationPath;
- (void)libraryItemCellPlayButtonTouched:(id)arg1 forItem:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)cellTypeForControllerForItem:(id)arg1;
- (void)dzrActionFromDataSource:(id)arg1 atIndexPath:(id)arg2;
- (id)noDataDictionary;
- (long long)dataType;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)sortButtonTapped;
- (void)searchButtonTapped;
- (void)updateHeaderFrames;
- (void)initSearchAndSortview;
- (double)searchAndSortViewHeight;
- (void)collectionViewHeader;
- (double)collectionViewHeaderViewHeight;
- (void)viewDidLoad;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

