//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICompactLinkRenderer, YTIShelfRenderer, YTIUnpluggedContentDetailsAboutFieldsRenderer;

@interface YTIUnpluggedContentDetailsAboutSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICompactLinkRenderer *compactLinkRenderer; // @dynamic compactLinkRenderer;
@property(nonatomic) _Bool hasCompactLinkRenderer; // @dynamic hasCompactLinkRenderer;
@property(nonatomic) _Bool hasShelfRenderer; // @dynamic hasShelfRenderer;
@property(nonatomic) _Bool hasUnpluggedContentDetailsAboutFieldsRenderer; // @dynamic hasUnpluggedContentDetailsAboutFieldsRenderer;
@property(retain, nonatomic) YTIShelfRenderer *shelfRenderer; // @dynamic shelfRenderer;
@property(retain, nonatomic) YTIUnpluggedContentDetailsAboutFieldsRenderer *unpluggedContentDetailsAboutFieldsRenderer; // @dynamic unpluggedContentDetailsAboutFieldsRenderer;

@end

