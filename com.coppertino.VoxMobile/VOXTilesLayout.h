//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSDictionary, NSMutableArray;

@interface VOXTilesLayout : UICollectionViewLayout
{
    double _interItemSpacingY;
    long long _numberOfColumns;
    NSDictionary *_layoutInfo;
    NSArray *_indexPathToAbsoluteIndexMap;
    NSMutableArray *_indexPathsToAnimate;
    struct CGSize _itemSize;
    struct UIEdgeInsets _itemInsets;
}

+ (long long)numberOfColumnsInPortrait;
+ (double)libraryArtworkSideSize;
@property(retain, nonatomic) NSMutableArray *indexPathsToAnimate; // @synthesize indexPathsToAnimate=_indexPathsToAnimate;
@property(retain, nonatomic) NSArray *indexPathToAbsoluteIndexMap; // @synthesize indexPathToAbsoluteIndexMap=_indexPathToAbsoluteIndexMap;
@property(retain, nonatomic) NSDictionary *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) double interItemSpacingY; // @synthesize interItemSpacingY=_interItemSpacingY;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) struct UIEdgeInsets itemInsets; // @synthesize itemInsets=_itemInsets;
- (void).cxx_destruct;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGRect)frameForCellAtAbsoluteIndex:(unsigned long long)arg1;
- (void)prepareLayout;
- (void)invalidateLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

