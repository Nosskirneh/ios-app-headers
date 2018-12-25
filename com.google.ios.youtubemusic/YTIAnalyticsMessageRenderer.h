//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIAnalyticsHeaderSupportedRenderers, YTICommand, YTIFormattedString;

@interface YTIAnalyticsMessageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *detailsEndpoint; // @dynamic detailsEndpoint;
@property(nonatomic) _Bool hasDetailsEndpoint; // @dynamic hasDetailsEndpoint;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasMessageText; // @dynamic hasMessageText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIAnalyticsHeaderSupportedRenderers *header; // @dynamic header;
@property(retain, nonatomic) YTIFormattedString *messageText; // @dynamic messageText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

