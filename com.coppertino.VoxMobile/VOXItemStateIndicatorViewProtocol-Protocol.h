//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, VOXMediaItemIndicatorModel, VOXMediaItemIndicatorView;

@protocol VOXItemStateIndicatorViewProtocol <NSObject>
- (NSArray *)pausePlaybackVisualization;
- (void)refreshIndicatorViewWithModel:(VOXMediaItemIndicatorModel *)arg1;
- (VOXMediaItemIndicatorView *)indicatorView;

@optional
- (NSArray *)indicatorViewNestedUUIDs;
@end
