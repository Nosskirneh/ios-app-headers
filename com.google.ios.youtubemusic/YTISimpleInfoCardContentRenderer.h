//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIInfoCardButtonSupportedRenderers, YTIThumbnailDetails;

@interface YTISimpleInfoCardContentRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInfoCardButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIFormattedString *callToAction; // @dynamic callToAction;
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(retain, nonatomic) YTIFormattedString *displayDomain; // @dynamic displayDomain;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasCallToAction; // @dynamic hasCallToAction;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasDisplayDomain; // @dynamic hasDisplayDomain;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasShowLinkIcon; // @dynamic hasShowLinkIcon;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *image; // @dynamic image;
@property(retain, nonatomic) NSMutableArray *impressionLoggingUrlsV2SArray; // @dynamic impressionLoggingUrlsV2SArray;
@property(readonly, nonatomic) unsigned long long impressionLoggingUrlsV2SArray_Count; // @dynamic impressionLoggingUrlsV2SArray_Count;
@property(nonatomic) _Bool showLinkIcon; // @dynamic showLinkIcon;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

