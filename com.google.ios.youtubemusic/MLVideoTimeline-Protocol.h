//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLTimelineSection, NSArray;

@protocol MLVideoTimeline <NSObject>
- (MLTimelineSection *)timelineSectionContainingBaseTime:(double)arg1;
- (NSArray *)videoSectionsForTimeRangeWithStartBaseTime:(double)arg1 endBaseTime:(double)arg2;
@end
