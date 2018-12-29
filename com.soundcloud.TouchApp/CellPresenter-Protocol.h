//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UICollectionView, UICollectionViewCell;

@protocol CellPresenter <NSObject>
- (Class)cellClassForEntity:(id)arg1;
- (void)registerCellsInCollectionView:(UICollectionView *)arg1;
- (NSString *)cellReuseIdentifierForEntity:(id)arg1;
- (void)presentCell:(UICollectionViewCell *)arg1 withEntity:(id)arg2 inCollectionView:(UICollectionView *)arg3 atIndexPath:(NSIndexPath *)arg4;

@optional
- (struct CGSize)sizeForEntity:(id)arg1 inCollectionView:(UICollectionView *)arg2;
@end
