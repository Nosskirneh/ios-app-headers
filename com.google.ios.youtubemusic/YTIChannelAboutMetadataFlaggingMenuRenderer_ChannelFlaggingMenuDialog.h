//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString, YTIThumbnailDetails;

@interface YTIChannelAboutMetadataFlaggingMenuRenderer_ChannelFlaggingMenuDialog : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *channelTitle; // @dynamic channelTitle;
@property(retain, nonatomic) YTIFormattedString *footerText; // @dynamic footerText;
@property(nonatomic) _Bool hasChannelTitle; // @dynamic hasChannelTitle;
@property(nonatomic) _Bool hasFooterText; // @dynamic hasFooterText;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIFormattedString *header; // @dynamic header;
@property(retain, nonatomic) YTIThumbnailDetails *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

