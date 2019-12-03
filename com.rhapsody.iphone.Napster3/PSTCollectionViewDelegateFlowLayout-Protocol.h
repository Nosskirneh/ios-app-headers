//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSTCollectionViewDelegate-Protocol.h"

@class NSIndexPath, PSTCollectionView, PSTCollectionViewLayout;

@protocol PSTCollectionViewDelegateFlowLayout <PSTCollectionViewDelegate>

@optional
- (struct CGSize)collectionView:(PSTCollectionView *)arg1 layout:(PSTCollectionViewLayout *)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(PSTCollectionView *)arg1 layout:(PSTCollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(PSTCollectionView *)arg1 layout:(PSTCollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(PSTCollectionView *)arg1 layout:(PSTCollectionViewLayout *)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(PSTCollectionView *)arg1 layout:(PSTCollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(PSTCollectionView *)arg1 layout:(PSTCollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end
