//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIBorderMisclickProtectionInfo, YTICommand, YTIFormattedString, YTIPromotedSparklesBackgroundColor, YTIRenderer;

@interface YTIPromotedSparklesTextSearchContent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIPromotedSparklesBackgroundColor *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) YTIBorderMisclickProtectionInfo *borderInfo; // @dynamic borderInfo;
@property(nonatomic) long long clickTargetDelayMs; // @dynamic clickTargetDelayMs;
@property(retain, nonatomic) YTIRenderer *closeButton; // @dynamic closeButton;
@property(retain, nonatomic) YTIRenderer *ctaButton; // @dynamic ctaButton;
@property(retain, nonatomic) YTIFormattedString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasBorderInfo; // @dynamic hasBorderInfo;
@property(nonatomic) _Bool hasClickTargetDelayMs; // @dynamic hasClickTargetDelayMs;
@property(nonatomic) _Bool hasCloseButton; // @dynamic hasCloseButton;
@property(nonatomic) _Bool hasCtaButton; // @dynamic hasCtaButton;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasWebsiteText; // @dynamic hasWebsiteText;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) NSMutableArray *noopTapEndpointsArray; // @dynamic noopTapEndpointsArray;
@property(readonly, nonatomic) unsigned long long noopTapEndpointsArray_Count; // @dynamic noopTapEndpointsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIFormattedString *websiteText; // @dynamic websiteText;

@end

