//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString;

@interface YTIUnpluggedLocationAcquisitionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(retain, nonatomic) YTICommand *failedEndpoint; // @dynamic failedEndpoint;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasFailedEndpoint; // @dynamic hasFailedEndpoint;
@property(nonatomic) _Bool hasNextEndpoint; // @dynamic hasNextEndpoint;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *nextEndpoint; // @dynamic nextEndpoint;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

