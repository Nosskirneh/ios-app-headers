//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMCollectionViewSectionLayoutDelegate-Protocol.h"

@class GPMCollectionViewSectionLayout, GPMCollectionViewStaggeredSectionLayout;

@protocol GPMCollectionViewStaggeredSectionLayoutDelegate <GPMCollectionViewSectionLayoutDelegate>
- (unsigned long long)columnCountForLayout:(GPMCollectionViewStaggeredSectionLayout *)arg1;
- (double)layout:(GPMCollectionViewSectionLayout *)arg1 heightOfItemAtIndex:(unsigned long long)arg2 forWidth:(double)arg3;
@end

