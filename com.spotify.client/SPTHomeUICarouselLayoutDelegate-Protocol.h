//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SPTHomeUICarouselLayout;

@protocol SPTHomeUICarouselLayoutDelegate <NSObject>
- (double)carouselLayoutItemSpacing:(SPTHomeUICarouselLayout *)arg1;
- (struct CGSize)carouselLayout:(SPTHomeUICarouselLayout *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;

@optional
- (double)carouselLayoutTrailingSpace:(SPTHomeUICarouselLayout *)arg1;
- (double)carouselLayoutLeadingSpace:(SPTHomeUICarouselLayout *)arg1;
@end

