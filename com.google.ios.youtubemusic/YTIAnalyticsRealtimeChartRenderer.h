//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray, GPBInt64Array, YTIAnalyticsChartHighlight, YTIFormattedString;

@interface YTIAnalyticsRealtimeChartRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int barColor; // @dynamic barColor;
@property(retain, nonatomic) YTIAnalyticsChartHighlight *chartHighlight; // @dynamic chartHighlight;
@property(nonatomic) int chartValuesType; // @dynamic chartValuesType;
@property(retain, nonatomic) GPBInt64Array *datesArray; // @dynamic datesArray;
@property(readonly, nonatomic) unsigned long long datesArray_Count; // @dynamic datesArray_Count;
@property(nonatomic) long long end; // @dynamic end;
@property(nonatomic) _Bool hasBarColor; // @dynamic hasBarColor;
@property(nonatomic) _Bool hasChartHighlight; // @dynamic hasChartHighlight;
@property(nonatomic) _Bool hasChartValuesType; // @dynamic hasChartValuesType;
@property(nonatomic) _Bool hasEnd; // @dynamic hasEnd;
@property(nonatomic) _Bool hasLabelXEnd; // @dynamic hasLabelXEnd;
@property(nonatomic) _Bool hasLabelXStart; // @dynamic hasLabelXStart;
@property(nonatomic) _Bool hasLastDataPointsToColorDifferently; // @dynamic hasLastDataPointsToColorDifferently;
@property(nonatomic) _Bool hasStart; // @dynamic hasStart;
@property(nonatomic) _Bool hasTimePeriod; // @dynamic hasTimePeriod;
@property(retain, nonatomic) YTIFormattedString *labelXEnd; // @dynamic labelXEnd;
@property(retain, nonatomic) YTIFormattedString *labelXStart; // @dynamic labelXStart;
@property(nonatomic) int lastDataPointsToColorDifferently; // @dynamic lastDataPointsToColorDifferently;
@property(nonatomic) long long start; // @dynamic start;
@property(nonatomic) int timePeriod; // @dynamic timePeriod;
@property(retain, nonatomic) GPBDoubleArray *valuesArray; // @dynamic valuesArray;
@property(readonly, nonatomic) unsigned long long valuesArray_Count; // @dynamic valuesArray_Count;

@end

