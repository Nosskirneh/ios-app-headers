//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DZRPlayerCoverCollectionViewCell, UIImage;

@protocol DZRPlayerCoverCollectionViewCellDelegate <NSObject>
- (void)playerCoverCollectionViewCellDidTapCover:(DZRPlayerCoverCollectionViewCell *)arg1;
- (_Bool)playerCoverCollectionViewCellCanTapCover:(DZRPlayerCoverCollectionViewCell *)arg1;
- (void)playerCoverCollectionViewCell:(DZRPlayerCoverCollectionViewCell *)arg1 didLoadImage:(UIImage *)arg2;

@optional
- (void)playerCoverCollectionViewCellDidTapRecommendedLabel:(DZRPlayerCoverCollectionViewCell *)arg1;
@end
