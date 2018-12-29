//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMCollectionViewSectionLayout.h"

@protocol GPMCollectionViewGridSectionLayoutDelegate;

@interface GPMCollectionViewGridSectionLayout : GPMCollectionViewSectionLayout
{
    unsigned long long _columnCount;
    struct CGSize _itemSize;
    struct CGSize _contentSize;
}

- (struct CGPoint)offsetOfItemAtRow:(long long)arg1 column:(long long)arg2;
@property(nonatomic) __weak id <GPMCollectionViewGridSectionLayoutDelegate> delegate; // @dynamic delegate;
- (struct CGRect)frameOfItemAtIndex:(long long)arg1;
- (struct CGSize)contentSize;
- (void)prepareLayoutWithSize:(struct CGSize)arg1;

@end
