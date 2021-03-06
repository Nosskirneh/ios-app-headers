//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIAccessibilitySupportedDatas, YTIButtonSupportedRenderers, YTIFormattedString, YTIOfferRestrictionsSupportedRenderers, YTIServiceTitleRowSupportedRenderers, YTIThumbnailDetails;

@interface YTIInterstitialGridPromoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(copy, nonatomic) NSString *analyticsTag; // @dynamic analyticsTag;
@property(copy, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) YTIThumbnailDetails *backgroundImage; // @dynamic backgroundImage;
@property(copy, nonatomic) NSString *basicServiceBgColor; // @dynamic basicServiceBgColor;
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasAnalyticsTag; // @dynamic hasAnalyticsTag;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasBackgroundImage; // @dynamic hasBackgroundImage;
@property(nonatomic) _Bool hasBasicServiceBgColor; // @dynamic hasBasicServiceBgColor;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasHeaderAccessibility; // @dynamic hasHeaderAccessibility;
@property(nonatomic) _Bool hasHeaderImage; // @dynamic hasHeaderImage;
@property(nonatomic) _Bool hasHeaderSubtitle; // @dynamic hasHeaderSubtitle;
@property(nonatomic) _Bool hasHeaderTitle; // @dynamic hasHeaderTitle;
@property(nonatomic) _Bool hasIsVisible; // @dynamic hasIsVisible;
@property(nonatomic) _Bool hasPremiumServiceBgColor; // @dynamic hasPremiumServiceBgColor;
@property(nonatomic) _Bool hasRestrictions; // @dynamic hasRestrictions;
@property(nonatomic) _Bool hasShowSimpleVersion; // @dynamic hasShowSimpleVersion;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *headerAccessibility; // @dynamic headerAccessibility;
@property(retain, nonatomic) YTIThumbnailDetails *headerImage; // @dynamic headerImage;
@property(retain, nonatomic) YTIFormattedString *headerSubtitle; // @dynamic headerSubtitle;
@property(retain, nonatomic) YTIFormattedString *headerTitle; // @dynamic headerTitle;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(nonatomic) _Bool isVisible; // @dynamic isVisible;
@property(copy, nonatomic) NSString *premiumServiceBgColor; // @dynamic premiumServiceBgColor;
@property(retain, nonatomic) YTIOfferRestrictionsSupportedRenderers *restrictions; // @dynamic restrictions;
@property(retain, nonatomic) NSMutableArray *rowsArray; // @dynamic rowsArray;
@property(readonly, nonatomic) unsigned long long rowsArray_Count; // @dynamic rowsArray_Count;
@property(nonatomic) _Bool showSimpleVersion; // @dynamic showSimpleVersion;
@property(retain, nonatomic) YTIServiceTitleRowSupportedRenderers *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

