//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString;

@interface YTIAnalyticsStringWithTooltip : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *displayString; // @dynamic displayString;
@property(nonatomic) _Bool hasDisplayString; // @dynamic hasDisplayString;
@property(nonatomic) _Bool hasTooltipString; // @dynamic hasTooltipString;
@property(retain, nonatomic) YTIFormattedString *tooltipString; // @dynamic tooltipString;

@end

