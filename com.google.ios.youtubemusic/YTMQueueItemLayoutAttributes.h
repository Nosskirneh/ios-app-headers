//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class YTMThemeController;

@interface YTMQueueItemLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _reordering;
    _Bool _shuffling;
    YTMThemeController *_themeController;
}

@property(nonatomic, getter=isShuffling) _Bool shuffling; // @synthesize shuffling=_shuffling;
@property(nonatomic, getter=isReordering) _Bool reordering; // @synthesize reordering=_reordering;
@property(retain, nonatomic) YTMThemeController *themeController; // @synthesize themeController=_themeController;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end
