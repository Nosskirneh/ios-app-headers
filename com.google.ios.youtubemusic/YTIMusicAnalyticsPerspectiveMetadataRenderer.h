//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand, YTIMusicAnalyticsPerspectiveMetadataRenderer_ChartRestrictions, YTIMusicAnalyticsPerspectiveMetadataRenderer_DateRestrictions, YTIMusicAnalyticsPerspectiveMetadataRenderer_ThumbnailAttribution, YTIThumbnailDetails;

@interface YTIMusicAnalyticsPerspectiveMetadataRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *banner; // @dynamic banner;
@property(retain, nonatomic) YTIMusicAnalyticsPerspectiveMetadataRenderer_ThumbnailAttribution *bannerAttribution; // @dynamic bannerAttribution;
@property(retain, nonatomic) YTIMusicAnalyticsPerspectiveMetadataRenderer_ChartRestrictions *chartRestrictions; // @dynamic chartRestrictions;
@property(retain, nonatomic) YTIMusicAnalyticsPerspectiveMetadataRenderer_DateRestrictions *dateRestrictions; // @dynamic dateRestrictions;
@property(copy, nonatomic) NSString *endTime; // @dynamic endTime;
@property(copy, nonatomic) NSString *entityId; // @dynamic entityId;
@property(nonatomic) _Bool hasBanner; // @dynamic hasBanner;
@property(nonatomic) _Bool hasBannerAttribution; // @dynamic hasBannerAttribution;
@property(nonatomic) _Bool hasChartRestrictions; // @dynamic hasChartRestrictions;
@property(nonatomic) _Bool hasDateRestrictions; // @dynamic hasDateRestrictions;
@property(nonatomic) _Bool hasEndTime; // @dynamic hasEndTime;
@property(nonatomic) _Bool hasEntityId; // @dynamic hasEntityId;
@property(nonatomic) _Bool hasIsLaunched; // @dynamic hasIsLaunched;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasProfile; // @dynamic hasProfile;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) _Bool isLaunched; // @dynamic isLaunched;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *profile; // @dynamic profile;
@property(copy, nonatomic) NSString *startTime; // @dynamic startTime;

@end

