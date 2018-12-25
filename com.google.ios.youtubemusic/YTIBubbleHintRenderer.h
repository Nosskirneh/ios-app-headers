//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIAccessibilityData, YTIBubbleHintButtonSupportedRenderers, YTIFormattedString, YTIHintTargetEffect;

@interface YTIBubbleHintRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBubbleHintButtonSupportedRenderers *acceptButton; // @dynamic acceptButton;
@property(retain, nonatomic) YTIAccessibilityData *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIFormattedString *detailsText; // @dynamic detailsText;
@property(retain, nonatomic) YTIBubbleHintButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasAcceptButton; // @dynamic hasAcceptButton;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasDetailsText; // @dynamic hasDetailsText;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasHintTargetEffect; // @dynamic hasHintTargetEffect;
@property(nonatomic) _Bool hasIsVisible; // @dynamic hasIsVisible;
@property(nonatomic) _Bool hasMaxWidthPercentage; // @dynamic hasMaxWidthPercentage;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIHintTargetEffect *hintTargetEffect; // @dynamic hintTargetEffect;
@property(nonatomic) _Bool isVisible; // @dynamic isVisible;
@property(nonatomic) float maxWidthPercentage; // @dynamic maxWidthPercentage;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

