//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILiveBadgeRenderer, YTIMusicPassBadgeRenderer, YTIMusicPivotBadgeRenderer, YTITextBadgeRenderer, YTIUpcomingEventBadgeRenderer;

@interface YTIThumbnailBadgeSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLiveBadgeRenderer; // @dynamic hasLiveBadgeRenderer;
@property(nonatomic) _Bool hasMusicPassBadge; // @dynamic hasMusicPassBadge;
@property(nonatomic) _Bool hasMusicPivotBadgeRenderer; // @dynamic hasMusicPivotBadgeRenderer;
@property(nonatomic) _Bool hasTextBadgeRenderer; // @dynamic hasTextBadgeRenderer;
@property(nonatomic) _Bool hasUpcomingEventBadgeRenderer; // @dynamic hasUpcomingEventBadgeRenderer;
@property(retain, nonatomic) YTILiveBadgeRenderer *liveBadgeRenderer; // @dynamic liveBadgeRenderer;
@property(retain, nonatomic) YTIMusicPassBadgeRenderer *musicPassBadge; // @dynamic musicPassBadge;
@property(retain, nonatomic) YTIMusicPivotBadgeRenderer *musicPivotBadgeRenderer; // @dynamic musicPivotBadgeRenderer;
@property(retain, nonatomic) YTITextBadgeRenderer *textBadgeRenderer; // @dynamic textBadgeRenderer;
@property(retain, nonatomic) YTIUpcomingEventBadgeRenderer *upcomingEventBadgeRenderer; // @dynamic upcomingEventBadgeRenderer;

@end

