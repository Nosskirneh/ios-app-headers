//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIButtonSupportedRenderers, YTICommand, YTICompactPromotedItemTrigger, YTIFormattedString, YTIThumbnailDetails;

@interface YTICompactPromotedItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(retain, nonatomic) YTICommand *dismissEndpoint; // @dynamic dismissEndpoint;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasDismissEndpoint; // @dynamic hasDismissEndpoint;
@property(nonatomic) _Bool hasImpressionEndpoint; // @dynamic hasImpressionEndpoint;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTrigger; // @dynamic hasTrigger;
@property(retain, nonatomic) YTICommand *impressionEndpoint; // @dynamic impressionEndpoint;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTICompactPromotedItemTrigger *trigger; // @dynamic trigger;

@end

