//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILiveBadgeRenderer, YTIMusicPivotBadgeRenderer;

@interface YTIMusicWideVideoThumbnailBadgeSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLiveBadgeRenderer; // @dynamic hasLiveBadgeRenderer;
@property(nonatomic) _Bool hasMusicPivotBadgeRenderer; // @dynamic hasMusicPivotBadgeRenderer;
@property(retain, nonatomic) YTILiveBadgeRenderer *liveBadgeRenderer; // @dynamic liveBadgeRenderer;
@property(retain, nonatomic) YTIMusicPivotBadgeRenderer *musicPivotBadgeRenderer; // @dynamic musicPivotBadgeRenderer;

@end

