//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonRenderer, YTIDvrButtonRenderer, YTIUnpluggedBellFollowButtonRenderer;

@interface YTIUnpluggedButtonSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer; // @dynamic buttonRenderer;
@property(retain, nonatomic) YTIDvrButtonRenderer *dvrButtonRenderer; // @dynamic dvrButtonRenderer;
@property(nonatomic) _Bool hasButtonRenderer; // @dynamic hasButtonRenderer;
@property(nonatomic) _Bool hasDvrButtonRenderer; // @dynamic hasDvrButtonRenderer;
@property(nonatomic) _Bool hasUnpluggedBellFollowButtonRenderer; // @dynamic hasUnpluggedBellFollowButtonRenderer;
@property(retain, nonatomic) YTIUnpluggedBellFollowButtonRenderer *unpluggedBellFollowButtonRenderer; // @dynamic unpluggedBellFollowButtonRenderer;

@end

