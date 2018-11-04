//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol DZRDynamicPageSection;

@protocol DZRDynamicPageSectionLayout <NSObject, NSCopying>
- (NSString *)collectionView:(UICollectionView *)arg1 supplementaryViewIdentifierOfKind:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (NSString *)collectionView:(UICollectionView *)arg1 cellIdentifierAtIndex:(unsigned long long)arg2 inSection:(id <DZRDynamicPageSection>)arg3;
- (NSArray *)layoutAttributes;
- (struct CGSize)sectionSizeConstrainedByBounds:(struct CGRect)arg1 forCollectionView:(UICollectionView *)arg2;
- (void)prepareLayoutWithSection:(id <DZRDynamicPageSection>)arg1 atIndex:(unsigned long long)arg2 constrainedInBounds:(struct CGRect)arg3 forCollectionView:(UICollectionView *)arg4;

@optional
- (_Bool)shouldHugContent;
- (NSArray *)updateLayout:(UICollectionView *)arg1 inRect:(struct CGRect)arg2;
@end

