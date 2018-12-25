//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnpluggedOfferRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *bodyImage; // @dynamic bodyImage;
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(nonatomic) _Bool hasBodyImage; // @dynamic hasBodyImage;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasOfferServiceEndpoint; // @dynamic hasOfferServiceEndpoint;
@property(nonatomic) _Bool hasOnCompletionNavigationEndpoint; // @dynamic hasOnCompletionNavigationEndpoint;
@property(nonatomic) _Bool hasPriceText; // @dynamic hasPriceText;
@property(nonatomic) _Bool hasPriceValue; // @dynamic hasPriceValue;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleImage; // @dynamic hasTitleImage;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *offerServiceEndpoint; // @dynamic offerServiceEndpoint;
@property(retain, nonatomic) YTICommand *onCompletionNavigationEndpoint; // @dynamic onCompletionNavigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *priceText; // @dynamic priceText;
@property(nonatomic) float priceValue; // @dynamic priceValue;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIThumbnailDetails *titleImage; // @dynamic titleImage;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

