//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableIndexSet, PSTCollectionView;

@interface PSTCollectionViewLayout : NSObject <NSCoding>
{
    PSTCollectionView *_collectionView;
    struct CGSize _collectionViewBoundsSize;
    NSMutableDictionary *_initialAnimationLayoutAttributesDict;
    NSMutableDictionary *_finalAnimationLayoutAttributesDict;
    NSMutableIndexSet *_deletedSectionsSet;
    NSMutableIndexSet *_insertedSectionsSet;
    NSMutableDictionary *_decorationViewClassDict;
    NSMutableDictionary *_decorationViewNibDict;
    NSMutableDictionary *_decorationViewExternalObjectsTables;
    char filler[200];
}

+ (Class)layoutAttributesClass;
@property(readonly, copy, nonatomic) NSDictionary *decorationViewExternalObjectsTables; // @synthesize decorationViewExternalObjectsTables=_decorationViewExternalObjectsTables;
@property(readonly, copy, nonatomic) NSDictionary *decorationViewNibDict; // @synthesize decorationViewNibDict=_decorationViewNibDict;
@property(readonly, copy, nonatomic) NSDictionary *decorationViewClassDict; // @synthesize decorationViewClassDict=_decorationViewClassDict;
@property(nonatomic) PSTCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCollectionViewBoundsSize:(struct CGSize)arg1;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDeletedSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForInsertedSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayout;
- (void)awakeFromNib;
- (id)init;

@end

