//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIUnpluggedTableSectionHeaderSupportedRenderers;

@interface YTIUnpluggedTableSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIUnpluggedTableSectionHeaderSupportedRenderers *header; // @dynamic header;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) NSMutableArray *rowsArray; // @dynamic rowsArray;
@property(readonly, nonatomic) unsigned long long rowsArray_Count; // @dynamic rowsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

