//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIShelfRenderer, YTIUnpluggedEmptyStateRenderer, YTIUnpluggedTableSectionRenderer;

@interface YTIUnpluggedSelectableSectionContentsSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasShelfRenderer; // @dynamic hasShelfRenderer;
@property(nonatomic) _Bool hasUnpluggedEmptyStateRenderer; // @dynamic hasUnpluggedEmptyStateRenderer;
@property(nonatomic) _Bool hasUnpluggedTableSectionRenderer; // @dynamic hasUnpluggedTableSectionRenderer;
@property(retain, nonatomic) YTIShelfRenderer *shelfRenderer; // @dynamic shelfRenderer;
@property(retain, nonatomic) YTIUnpluggedEmptyStateRenderer *unpluggedEmptyStateRenderer; // @dynamic unpluggedEmptyStateRenderer;
@property(retain, nonatomic) YTIUnpluggedTableSectionRenderer *unpluggedTableSectionRenderer; // @dynamic unpluggedTableSectionRenderer;

@end

