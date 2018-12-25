//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIIcon;

@interface YTIExpandButtonRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIIcon *expandedIcon; // @dynamic expandedIcon;
@property(retain, nonatomic) YTIFormattedString *expandedLabel; // @dynamic expandedLabel;
@property(nonatomic) _Bool hasExpandedIcon; // @dynamic hasExpandedIcon;
@property(nonatomic) _Bool hasExpandedLabel; // @dynamic hasExpandedLabel;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

