//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIChannelOfferCardSubscribeButtonSupportedRenderers, YTIChannelOfferCardSupportedRenderers, YTIFormattedString;

@interface YTIChannelOfferCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasPrimaryOffer; // @dynamic hasPrimaryOffer;
@property(nonatomic) _Bool hasSecondaryOffer; // @dynamic hasSecondaryOffer;
@property(nonatomic) _Bool hasSubheader; // @dynamic hasSubheader;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *header; // @dynamic header;
@property(retain, nonatomic) YTIChannelOfferCardSupportedRenderers *primaryOffer; // @dynamic primaryOffer;
@property(retain, nonatomic) YTIChannelOfferCardSupportedRenderers *secondaryOffer; // @dynamic secondaryOffer;
@property(retain, nonatomic) YTIFormattedString *subheader; // @dynamic subheader;
@property(retain, nonatomic) YTIChannelOfferCardSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

