//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIChannelFeaturedVideoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

