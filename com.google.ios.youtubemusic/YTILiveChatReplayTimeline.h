//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTILiveChatReplayTimeline : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTimelineType; // @dynamic hasTimelineType;
@property(retain, nonatomic) NSMutableArray *segmentsArray; // @dynamic segmentsArray;
@property(readonly, nonatomic) unsigned long long segmentsArray_Count; // @dynamic segmentsArray_Count;
@property(nonatomic) int timelineType; // @dynamic timelineType;

@end

