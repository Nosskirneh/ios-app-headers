//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTISurveyTextInterstitialRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) YTIRenderer *backgroundImage; // @dynamic backgroundImage;
@property(retain, nonatomic) YTIThumbnailDetails *brandImage; // @dynamic brandImage;
@property(retain, nonatomic) YTIRenderer *ctaButton; // @dynamic ctaButton;
@property(nonatomic) unsigned int ctaSectionBackgroundColor; // @dynamic ctaSectionBackgroundColor;
@property(retain, nonatomic) NSMutableArray *dismissCommandsArray; // @dynamic dismissCommandsArray;
@property(readonly, nonatomic) unsigned long long dismissCommandsArray_Count; // @dynamic dismissCommandsArray_Count;
@property(nonatomic) unsigned int dividerColor; // @dynamic dividerColor;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasBackgroundImage; // @dynamic hasBackgroundImage;
@property(nonatomic) _Bool hasBrandImage; // @dynamic hasBrandImage;
@property(nonatomic) _Bool hasCtaButton; // @dynamic hasCtaButton;
@property(nonatomic) _Bool hasCtaSectionBackgroundColor; // @dynamic hasCtaSectionBackgroundColor;
@property(nonatomic) _Bool hasDividerColor; // @dynamic hasDividerColor;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTimeoutSeconds; // @dynamic hasTimeoutSeconds;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *impressionCommandsArray; // @dynamic impressionCommandsArray;
@property(readonly, nonatomic) unsigned long long impressionCommandsArray_Count; // @dynamic impressionCommandsArray_Count;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(retain, nonatomic) NSMutableArray *timeoutCommandsArray; // @dynamic timeoutCommandsArray;
@property(readonly, nonatomic) unsigned long long timeoutCommandsArray_Count; // @dynamic timeoutCommandsArray_Count;
@property(nonatomic) unsigned int timeoutSeconds; // @dynamic timeoutSeconds;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

