//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTICompactCompanionExtensionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) unsigned int borderColor; // @dynamic borderColor;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasBorderColor; // @dynamic hasBorderColor;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIsBlankSpaceUnclickable; // @dynamic hasIsBlankSpaceUnclickable;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSubDetailsButton; // @dynamic hasSubDetailsButton;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *impressionCommandsArray; // @dynamic impressionCommandsArray;
@property(readonly, nonatomic) unsigned long long impressionCommandsArray_Count; // @dynamic impressionCommandsArray_Count;
@property(nonatomic) _Bool isBlankSpaceUnclickable; // @dynamic isBlankSpaceUnclickable;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIRenderer *subDetailsButton; // @dynamic subDetailsButton;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

