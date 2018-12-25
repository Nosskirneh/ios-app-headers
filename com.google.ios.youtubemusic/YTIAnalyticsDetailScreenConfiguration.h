//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAnalyticsInsightDetailScreenConfiguration, YTIAnalyticsStapleCardDetailScreenConfiguration, YTIFormattedString;

@interface YTIAnalyticsDetailScreenConfiguration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cardName; // @dynamic cardName;
@property(nonatomic) _Bool hasCardName; // @dynamic hasCardName;
@property(nonatomic) _Bool hasInsightDetailScreenConfiguration; // @dynamic hasInsightDetailScreenConfiguration;
@property(nonatomic) _Bool hasScreenTitle; // @dynamic hasScreenTitle;
@property(nonatomic) _Bool hasStapleCardDetailScreenConfiguration; // @dynamic hasStapleCardDetailScreenConfiguration;
@property(retain, nonatomic) YTIAnalyticsInsightDetailScreenConfiguration *insightDetailScreenConfiguration; // @dynamic insightDetailScreenConfiguration;
@property(retain, nonatomic) YTIFormattedString *screenTitle; // @dynamic screenTitle;
@property(retain, nonatomic) YTIAnalyticsStapleCardDetailScreenConfiguration *stapleCardDetailScreenConfiguration; // @dynamic stapleCardDetailScreenConfiguration;

@end
