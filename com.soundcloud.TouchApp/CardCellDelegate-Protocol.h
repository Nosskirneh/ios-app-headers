//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SuperCardCell;

@protocol CardCellDelegate <NSObject>
- (void)cardCellDidTapMeta:(SuperCardCell *)arg1;
- (void)cardCellDidTapArtist:(SuperCardCell *)arg1;
- (void)cardCellDidTapRepost:(SuperCardCell *)arg1;
- (void)cardCellDidTapLike:(SuperCardCell *)arg1;
- (void)cardCellDidTapMore:(SuperCardCell *)arg1;
@end

