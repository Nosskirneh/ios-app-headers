//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString;

@interface YTISignInPromoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasPromoHeadline; // @dynamic hasPromoHeadline;
@property(nonatomic) _Bool hasPromoSubtitle; // @dynamic hasPromoSubtitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *promoHeadline; // @dynamic promoHeadline;
@property(retain, nonatomic) YTIFormattedString *promoSubtitle; // @dynamic promoSubtitle;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

