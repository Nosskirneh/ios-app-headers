//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTIUpcomingEventBadgeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasScheduledStartTimeSeconds; // @dynamic hasScheduledStartTimeSeconds;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(nonatomic) unsigned long long scheduledStartTimeSeconds; // @dynamic scheduledStartTimeSeconds;
@property(copy, nonatomic) NSString *tooltip; // @dynamic tooltip;

@end

