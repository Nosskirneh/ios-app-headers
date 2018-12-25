//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIMusicallyMatchingSegmentMap, YTIRenderer;

@interface YTICounterpartComponent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *counterpartRenderer; // @dynamic counterpartRenderer;
@property(retain, nonatomic) YTICommand *counterpartWatchEndpoint; // @dynamic counterpartWatchEndpoint;
@property(nonatomic) _Bool hasCounterpartRenderer; // @dynamic hasCounterpartRenderer;
@property(nonatomic) _Bool hasCounterpartWatchEndpoint; // @dynamic hasCounterpartWatchEndpoint;
@property(nonatomic) _Bool hasSegmentMap; // @dynamic hasSegmentMap;
@property(retain, nonatomic) YTIMusicallyMatchingSegmentMap *segmentMap; // @dynamic segmentMap;

@end
