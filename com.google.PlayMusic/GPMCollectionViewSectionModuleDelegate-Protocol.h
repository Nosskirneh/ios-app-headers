//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Card, GPMImpressionTracker, MusicItem;

@protocol GPMCollectionViewSectionModuleDelegate <NSObject>
- (void)pinnableContainerForItem:(MusicItem *)arg1 completionBlock:(void (^)(id <PinnableContainer>))arg2;
- (GPMImpressionTracker *)impressionTracker;
- (long long)playLogSection;
- (void)displayContextMenuForItem:(MusicItem *)arg1 sender:(Card *)arg2;
- (void)playMusicItem:(MusicItem *)arg1 sender:(Card *)arg2;
- (void)openMusicItem:(MusicItem *)arg1 sender:(Card *)arg2;
@end

