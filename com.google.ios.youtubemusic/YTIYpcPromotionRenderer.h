//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString;

@interface YTIYpcPromotionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPromotionText; // @dynamic hasPromotionText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *promotionText; // @dynamic promotionText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

