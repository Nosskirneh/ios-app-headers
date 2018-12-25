//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString, YTIIcon, YTIPromotedSparklesBackgroundColor, YTIRenderer;

@interface YTIPromotedSparkles15ClickContent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIPromotedSparklesBackgroundColor *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) NSMutableArray *collapseTapEndpointsArray; // @dynamic collapseTapEndpointsArray;
@property(readonly, nonatomic) unsigned long long collapseTapEndpointsArray_Count; // @dynamic collapseTapEndpointsArray_Count;
@property(retain, nonatomic) YTIRenderer *ctaButton; // @dynamic ctaButton;
@property(retain, nonatomic) NSMutableArray *expandTapEndpointsArray; // @dynamic expandTapEndpointsArray;
@property(readonly, nonatomic) unsigned long long expandTapEndpointsArray_Count; // @dynamic expandTapEndpointsArray_Count;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasCtaButton; // @dynamic hasCtaButton;
@property(nonatomic) _Bool hasOverlayIcon; // @dynamic hasOverlayIcon;
@property(nonatomic) _Bool hasOverlayText; // @dynamic hasOverlayText;
@property(nonatomic) _Bool hasSecondaryOverlayText; // @dynamic hasSecondaryOverlayText;
@property(retain, nonatomic) YTIIcon *overlayIcon; // @dynamic overlayIcon;
@property(retain, nonatomic) YTIFormattedString *overlayText; // @dynamic overlayText;
@property(retain, nonatomic) YTIFormattedString *secondaryOverlayText; // @dynamic secondaryOverlayText;

@end

