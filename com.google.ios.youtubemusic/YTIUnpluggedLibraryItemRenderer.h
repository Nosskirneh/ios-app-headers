//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIUnpluggedLibraryItemSupportedRenderers;

@interface YTIUnpluggedLibraryItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnpluggedLibraryItemSupportedRenderers *content; // @dynamic content;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *primaryText; // @dynamic primaryText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

