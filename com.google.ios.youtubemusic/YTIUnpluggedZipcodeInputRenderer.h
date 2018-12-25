//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIButtonSupportedRenderers, YTIFormattedString, YTIThumbnailDetails, YTIUnpluggedEditTextSupportedRenderers;

@interface YTIUnpluggedZipcodeInputRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasPrimaryImage; // @dynamic hasPrimaryImage;
@property(nonatomic) _Bool hasSubmitButton; // @dynamic hasSubmitButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnpluggedEditText; // @dynamic hasUnpluggedEditText;
@property(retain, nonatomic) YTIThumbnailDetails *primaryImage; // @dynamic primaryImage;
@property(retain, nonatomic) YTIButtonSupportedRenderers *submitButton; // @dynamic submitButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIUnpluggedEditTextSupportedRenderers *unpluggedEditText; // @dynamic unpluggedEditText;

@end
