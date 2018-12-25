//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIThumbnailDetails, YTIThumbnailSupportedRenderers;

@interface YTICompactPromotedBannerRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasImpressionEndpoint; // @dynamic hasImpressionEndpoint;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *image; // @dynamic image;
@property(retain, nonatomic) YTICommand *impressionEndpoint; // @dynamic impressionEndpoint;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIThumbnailSupportedRenderers *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

