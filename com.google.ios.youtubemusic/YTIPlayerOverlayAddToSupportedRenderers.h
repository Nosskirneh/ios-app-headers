//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonRenderer, YTIMenuRenderer;

@interface YTIPlayerOverlayAddToSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer; // @dynamic buttonRenderer;
@property(nonatomic) _Bool hasButtonRenderer; // @dynamic hasButtonRenderer;
@property(nonatomic) _Bool hasMenuRenderer; // @dynamic hasMenuRenderer;
@property(retain, nonatomic) YTIMenuRenderer *menuRenderer; // @dynamic menuRenderer;

@end

