//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString;

@interface YTIAnalyticsDetailTableRenderer_Row : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *detailsEndpoint; // @dynamic detailsEndpoint;
@property(retain, nonatomic) YTIFormattedString *displayValue; // @dynamic displayValue;
@property(nonatomic) _Bool hasDetailsEndpoint; // @dynamic hasDetailsEndpoint;
@property(nonatomic) _Bool hasDisplayValue; // @dynamic hasDisplayValue;
@property(nonatomic) _Bool hasIconColor; // @dynamic hasIconColor;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) int iconColor; // @dynamic iconColor;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;

@end

