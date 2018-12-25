//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIExpandedShelfContentsRenderer, YTIGridRenderer, YTIHorizontalListRenderer, YTIMessageRenderer, YTIUnpluggedHorizontalChipListRenderer, YTIVerticalListRenderer;

@interface YTIShelfSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIExpandedShelfContentsRenderer *expandedShelfContentsRenderer; // @dynamic expandedShelfContentsRenderer;
@property(retain, nonatomic) YTIGridRenderer *gridRenderer; // @dynamic gridRenderer;
@property(nonatomic) _Bool hasExpandedShelfContentsRenderer; // @dynamic hasExpandedShelfContentsRenderer;
@property(nonatomic) _Bool hasGridRenderer; // @dynamic hasGridRenderer;
@property(nonatomic) _Bool hasHorizontalListRenderer; // @dynamic hasHorizontalListRenderer;
@property(nonatomic) _Bool hasMessageRenderer; // @dynamic hasMessageRenderer;
@property(nonatomic) _Bool hasUnpluggedHorizontalChipListRenderer; // @dynamic hasUnpluggedHorizontalChipListRenderer;
@property(nonatomic) _Bool hasVerticalListRenderer; // @dynamic hasVerticalListRenderer;
@property(retain, nonatomic) YTIHorizontalListRenderer *horizontalListRenderer; // @dynamic horizontalListRenderer;
@property(retain, nonatomic) YTIMessageRenderer *messageRenderer; // @dynamic messageRenderer;
@property(retain, nonatomic) YTIUnpluggedHorizontalChipListRenderer *unpluggedHorizontalChipListRenderer; // @dynamic unpluggedHorizontalChipListRenderer;
@property(retain, nonatomic) YTIVerticalListRenderer *verticalListRenderer; // @dynamic verticalListRenderer;

@end

