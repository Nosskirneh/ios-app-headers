//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRDynamicPageSectionLayout-Protocol.h"

@class NSMapTable, NSMutableArray, NSString, UICollectionViewLayoutAttributes;

@interface DZRDynamicPageSectionLayoutFootballList : NSObject <DZRDynamicPageSectionLayout>
{
    double _margin;
    NSMapTable *_sectionCache;
    NSMutableArray *_separators;
    double _footerHeight;
    UICollectionViewLayoutAttributes *_headerAttributes;
    UICollectionViewLayoutAttributes *_footertAttributes;
    NSMutableArray *_sponsorsAttributes;
}

@property(retain, nonatomic) NSMutableArray *sponsorsAttributes; // @synthesize sponsorsAttributes=_sponsorsAttributes;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *footertAttributes; // @synthesize footertAttributes=_footertAttributes;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(retain, nonatomic) NSMutableArray *separators; // @synthesize separators=_separators;
@property(retain, nonatomic) NSMapTable *sectionCache; // @synthesize sectionCache=_sectionCache;
@property(nonatomic) double margin; // @synthesize margin=_margin;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 supplementaryViewIdentifierOfKind:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)collectionView:(id)arg1 cellIdentifierAtIndex:(unsigned long long)arg2 inSection:(id)arg3;
- (id)layoutAttributes;
- (struct CGSize)sectionSizeConstrainedByBounds:(struct CGRect)arg1 forCollectionView:(id)arg2;
- (void)prepareLayoutWithSection:(id)arg1 atIndex:(unsigned long long)arg2 constrainedInBounds:(struct CGRect)arg3 forCollectionView:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMargin:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

