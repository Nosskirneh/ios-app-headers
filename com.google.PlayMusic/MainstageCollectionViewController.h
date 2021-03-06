//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicCollectionViewController.h"

#import "GPMCardImageProvider-Protocol.h"

@class ItemList;

@interface MainstageCollectionViewController : MusicCollectionViewController <GPMCardImageProvider>
{
    ItemList *_mainstageList;
}

- (void).cxx_destruct;
- (void)generateItemListWithMainstageItems:(id)arg1;
- (double)heightForItemAtIndexPath:(id)arg1 withWidth:(double)arg2;
- (unsigned long long)numberOfColumnsInSection:(unsigned long long)arg1;
- (void)loadItemsWithLoadingHandler:(CDUnknownBlockType)arg1;
- (_Bool)isContentChangeAnimationSupported;
- (id)cardDataSourceForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)reusableIdentifierForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)registerCollectionIdentifiers;
- (void)displayContextMenuForCard:(id)arg1 atIndexPath:(id)arg2;
- (void)card:(id)arg1 clickedAtIndexPath:(id)arg2;
- (id)emptyScreenTextKey;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)musicItemProvider;
- (void)viewDidLoad;

@end

