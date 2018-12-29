//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMCollectionViewSectionModule.h"

#import "GPMCollectionViewGridSectionLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class GPMCollectionViewGridSectionLayout, NSString, UICollectionView;
@protocol GPMCollectionViewHorizontalSectionLayoutDelegate, GPMCollectionViewHorizontalSectionModuleDelegate;

@interface GPMCollectionViewHorizontalSectionModule : GPMCollectionViewSectionModule <UICollectionViewDataSource, UICollectionViewDelegate, GPMCollectionViewGridSectionLayoutDelegate>
{
    struct GPMCollectionViewSectionModule *_innerModule;
    NSString *_cellIdentifier;
    GPMCollectionViewGridSectionLayout *_layout;
    id <GPMCollectionViewHorizontalSectionModuleDelegate> _delegate;
    id <GPMCollectionViewHorizontalSectionLayoutDelegate> _innerLayoutDelegate;
    _Bool _pagingEnabled;
    UICollectionView *_innerCollectionView;
}

+ (void)updateFlowLayout:(id)arg1 toMatchHorizontalLayout:(id)arg2;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(retain, nonatomic) UICollectionView *innerCollectionView; // @synthesize innerCollectionView=_innerCollectionView;
- (void).cxx_destruct;
- (void)didInvalidateLayout:(id)arg1;
- (double)layout:(id)arg1 heightOfItemForWidth:(double)arg2;
- (unsigned long long)columnCountForLayout:(id)arg1;
- (struct UIEdgeInsets)itemInsetsForLayout:(id)arg1;
- (struct UIEdgeInsets)headerInsetsForLayout:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForLayout:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)playLogCollectionType;
- (id)clickLogEventAtIndex:(long long)arg1;
- (void)displayContextMenuForCard:(id)arg1 atIndexPath:(id)arg2;
- (void)card:(id)arg1 clickedAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 heightOfHeaderForWidth:(double)arg2;
- (void)prepareToDisplayCell:(id)arg1 atIndex:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)cellCount;
- (void)configureHeader:(id)arg1;
- (void)configureCell:(id)arg1 atIndex:(long long)arg2;
- (id)reusableIdentifierForCellAtIndex:(long long)arg1;
- (Class)headerClass;
- (id)reusableIdentifierForHeader;
- (void)registerOnCollectionView:(id)arg1;
- (id)layout;
- (void)setSectionIndex:(long long)arg1;
- (long long)sectionIndex;
- (id)musicItemAtIndex:(long long)arg1;
- (id)initWithDelegate:(id)arg1 sectionModule:(struct GPMCollectionViewSectionModule *)arg2 cellIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
