//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAnalyticsBackdropAreaChartRenderer, YTIAnalyticsBackdropBarChartRenderer, YTIAnalyticsBackdropLineChartRenderer;

@interface YTIAnalyticsBackdropChartSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAnalyticsBackdropAreaChartRenderer *analyticsBackdropAreaChartRenderer; // @dynamic analyticsBackdropAreaChartRenderer;
@property(retain, nonatomic) YTIAnalyticsBackdropBarChartRenderer *analyticsBackdropBarChartRenderer; // @dynamic analyticsBackdropBarChartRenderer;
@property(retain, nonatomic) YTIAnalyticsBackdropLineChartRenderer *analyticsBackdropLineChartRenderer; // @dynamic analyticsBackdropLineChartRenderer;
@property(nonatomic) _Bool hasAnalyticsBackdropAreaChartRenderer; // @dynamic hasAnalyticsBackdropAreaChartRenderer;
@property(nonatomic) _Bool hasAnalyticsBackdropBarChartRenderer; // @dynamic hasAnalyticsBackdropBarChartRenderer;
@property(nonatomic) _Bool hasAnalyticsBackdropLineChartRenderer; // @dynamic hasAnalyticsBackdropLineChartRenderer;

@end

