//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMetadataBadgeRenderer, YTIShelfFeaturedTextBadgeRenderer, YTIStandaloneYpcBadgeRenderer;

@interface YTIHorizontalHeaderBadgeSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMetadataBadgeRenderer; // @dynamic hasMetadataBadgeRenderer;
@property(nonatomic) _Bool hasShelfFeaturedTextBadgeRenderer; // @dynamic hasShelfFeaturedTextBadgeRenderer;
@property(nonatomic) _Bool hasStandaloneYpcBadgeRenderer; // @dynamic hasStandaloneYpcBadgeRenderer;
@property(retain, nonatomic) YTIMetadataBadgeRenderer *metadataBadgeRenderer; // @dynamic metadataBadgeRenderer;
@property(retain, nonatomic) YTIShelfFeaturedTextBadgeRenderer *shelfFeaturedTextBadgeRenderer; // @dynamic shelfFeaturedTextBadgeRenderer;
@property(retain, nonatomic) YTIStandaloneYpcBadgeRenderer *standaloneYpcBadgeRenderer; // @dynamic standaloneYpcBadgeRenderer;

@end
