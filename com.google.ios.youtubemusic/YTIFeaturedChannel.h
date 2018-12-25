//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIThumbnailDetails;

@interface YTIFeaturedChannel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long endTimeMs; // @dynamic endTimeMs;
@property(nonatomic) _Bool hasEndTimeMs; // @dynamic hasEndTimeMs;
@property(nonatomic) _Bool hasStartTimeMs; // @dynamic hasStartTimeMs;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasWatermark; // @dynamic hasWatermark;
@property(nonatomic) long long startTimeMs; // @dynamic startTimeMs;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *watermark; // @dynamic watermark;

@end
