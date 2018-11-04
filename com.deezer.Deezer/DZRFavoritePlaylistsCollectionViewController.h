//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemsCollectionViewController.h"

#import "DZRLibraryItemCollectionViewCellDelegate-Protocol.h"
#import "DZRLibraryItemsCollectionViewProtocol-Protocol.h"
#import "DZRSearchAndSortViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CAGradientLayer, DZRCreatePlaylistView, DZRRecentlyDataSource, DZRSearchAndSortView, DeezerFriend, NSString, UICollectionView, UILabel, UIView;

@interface DZRFavoritePlaylistsCollectionViewController : DZRLibraryItemsCollectionViewController <DZRLibraryItemCollectionViewCellDelegate, UITextFieldDelegate, DZRLibraryItemsCollectionViewProtocol, DZRSearchAndSortViewDelegate>
{
    DZRCreatePlaylistView *_createPlaylistView;
    DeezerFriend *_friend;
    UIView *_collectionViewHeaderView;
    DZRRecentlyDataSource *_recentlyUpdatedDataSource;
    UIView *_recentlyUpdatedView;
    UICollectionView *_recentlyUpdatedCollectionView;
    UILabel *_recentlyUpdatedTitleLabel;
    CAGradientLayer *_gradientLayer;
    DZRSearchAndSortView *_searchAndSortView;
}

@property(retain, nonatomic) DZRSearchAndSortView *searchAndSortView; // @synthesize searchAndSortView=_searchAndSortView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *recentlyUpdatedTitleLabel; // @synthesize recentlyUpdatedTitleLabel=_recentlyUpdatedTitleLabel;
@property(retain, nonatomic) UICollectionView *recentlyUpdatedCollectionView; // @synthesize recentlyUpdatedCollectionView=_recentlyUpdatedCollectionView;
@property(retain, nonatomic) UIView *recentlyUpdatedView; // @synthesize recentlyUpdatedView=_recentlyUpdatedView;
@property(retain, nonatomic) DZRRecentlyDataSource *recentlyUpdatedDataSource; // @synthesize recentlyUpdatedDataSource=_recentlyUpdatedDataSource;
@property(retain, nonatomic) UIView *collectionViewHeaderView; // @synthesize collectionViewHeaderView=_collectionViewHeaderView;
@property(retain, nonatomic) DeezerFriend *friend; // @synthesize friend=_friend;
@property(retain, nonatomic) DZRCreatePlaylistView *createPlaylistView; // @synthesize createPlaylistView=_createPlaylistView;
- (void).cxx_destruct;
- (void)updateLayoutForCurrentInterfaceOrientation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didTriggerRefresh:(id)arg1;
- (id)tabName;
- (id)navigationPath;
- (_Bool)shouldObserveSynchronizationNotifications;
- (void)libraryItemCellPlayButtonTouched:(id)arg1 forItem:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 dataDidChangeWithChanges:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)sortButtonTapped;
- (void)searchButtonTapped;
- (void)configureCollectionViewHeader;
- (void)updateHeaderFrames;
- (void)initSearchAndSortview;
- (void)initRecentlyUpdatedView;
- (void)initCreatePlaylistView;
- (double)collectionViewHeaderViewHeight;
- (double)createPlaylistViewHeight;
- (double)recentlyUpdatedViewHeight;
- (double)searchAndSortViewHeight;
- (void)dzrActionFromDataSource:(id)arg1 atIndexPath:(id)arg2;
- (long long)cellTypeForControllerForItem:(id)arg1;
- (long long)dataType;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)registerCollectionViewCells;
- (void)viewDidLoad;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

