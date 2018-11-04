//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DZRDataSourceDelegate-Protocol.h"
#import "DZRLibraryItemCollectionViewCellDelegate-Protocol.h"
#import "DZRRefreshTriggerTarget-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class DZRRefreshTrigger, NSString, NoDataView, UICollectionView, UISearchBar;
@protocol DZRLibraryItemsCollectionViewProtocol, DZRLibraryItemsDataSource;

@interface DZRFilterLibraryItemsCollectionViewController : UIViewController <DZRDataSourceDelegate, UICollectionViewDelegate, UICollectionViewDataSource, DZRLibraryItemCollectionViewCellDelegate, UISearchBarDelegate, DZRRefreshTriggerTarget>
{
    id <DZRLibraryItemsCollectionViewProtocol> _delegate;
    id <DZRLibraryItemsDataSource> _itemsDataSource;
    UISearchBar *_itemsSearchBar;
    UICollectionView *_collectionView;
    double _interCellSpace;
    NoDataView *_noDataView;
    DZRRefreshTrigger *_refreshTrigger;
}

@property(retain, nonatomic) DZRRefreshTrigger *refreshTrigger; // @synthesize refreshTrigger=_refreshTrigger;
@property(retain, nonatomic) NoDataView *noDataView; // @synthesize noDataView=_noDataView;
@property(nonatomic) double interCellSpace; // @synthesize interCellSpace=_interCellSpace;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UISearchBar *itemsSearchBar; // @synthesize itemsSearchBar=_itemsSearchBar;
@property(retain, nonatomic) id <DZRLibraryItemsDataSource> itemsDataSource; // @synthesize itemsDataSource=_itemsDataSource;
@property(nonatomic) __weak id <DZRLibraryItemsCollectionViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTriggerRefresh:(id)arg1;
- (void)dataSource:(id)arg1 dataDidChangeWithChanges:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)libraryItemCellPlayButtonTouched:(id)arg1 forItem:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)closeViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initNoDataView;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

