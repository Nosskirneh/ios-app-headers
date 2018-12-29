//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicCollectionViewController.h"

#import "GPMCardImageProvider-Protocol.h"
#import "GPMConciergeControllerDelegate-Protocol.h"
#import "GPMInfoCardDelegate-Protocol.h"
#import "GPMProfileCardDelegate-Protocol.h"
#import "GPMProfileCardProfileImageProvider-Protocol.h"
#import "MusicClusterHeaderDelegate-Protocol.h"

@class GPMConciergeController, ItemList, NSString;

@interface ListenNowCollectionViewController : MusicCollectionViewController <GPMConciergeControllerDelegate, MusicClusterHeaderDelegate, GPMInfoCardDelegate, GPMCardImageProvider, GPMProfileCardProfileImageProvider, GPMProfileCardDelegate>
{
    ItemList *_listenNowItemList;
    GPMConciergeController *_conciergeController;
    _Bool _viewHasPreviouslyAppeared;
}

+ (_Bool)isGenreRadioItem:(id)arg1;
+ (_Bool)isArtistRadioItem:(id)arg1;
- (void).cxx_destruct;
- (id)playLogCollectionTypeForSection:(long long)arg1;
- (long long)playLogSection;
- (void)profileArtRequestForIndexPath:(id)arg1 size:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)artRequestforIndexPath:(id)arg1 size:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didClickButtonInInfoCard:(id)arg1 withButtonIndex:(unsigned long long)arg2 withActionItemType:(long long)arg3;
- (void)card:(id)arg1 clickedProfileButtonAtIndexPath:(id)arg2;
- (void)displayContextMenuForCard:(id)arg1 atIndexPath:(id)arg2;
- (void)card:(id)arg1 clickedAtIndexPath:(id)arg2;
- (_Bool)shouldDisplayEmptyScreen;
- (void)conciergeDidClickItem:(id)arg1 atIndexPath:(id)arg2;
- (void)conciergeWillDisplayItem:(id)arg1 atIndexPath:(id)arg2;
- (void)conciergeVisibilityDidChange;
- (void)clusterHeaderDidPressMoreButtonAtIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)heightForItemAtIndexPath:(id)arg1 withWidth:(double)arg2;
- (unsigned long long)numberOfColumnsInSection:(unsigned long long)arg1;
- (unsigned long long)maxNumberOfItemsInSection:(unsigned long long)arg1;
- (id)subtitleForSection:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)cardDataSourceForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)reusableIdentifierForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)registerCollectionIdentifiers;
- (void)loadItemsWithLoadingHandler:(CDUnknownBlockType)arg1;
- (void)clearCell:(id)arg1;
- (void)addConciergeViewToCell:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)isContentChangeAnimationSupported;
- (void)generateItemListWithRecentItems:(id)arg1 suggestedItems:(id)arg2;
- (id)musicItemProvider;
- (id)layout;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
