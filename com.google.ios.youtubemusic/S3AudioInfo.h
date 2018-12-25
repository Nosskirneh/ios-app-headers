//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface S3AudioInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int channelCount; // @dynamic channelCount;
@property(nonatomic) long long commonClockErrorUs; // @dynamic commonClockErrorUs;
@property(nonatomic) unsigned long long commonClockTimestampUs; // @dynamic commonClockTimestampUs;
@property(nonatomic) int encoding; // @dynamic encoding;
@property(nonatomic) _Bool hasChannelCount; // @dynamic hasChannelCount;
@property(nonatomic) _Bool hasCommonClockErrorUs; // @dynamic hasCommonClockErrorUs;
@property(nonatomic) _Bool hasCommonClockTimestampUs; // @dynamic hasCommonClockTimestampUs;
@property(nonatomic) _Bool hasEncoding; // @dynamic hasEncoding;
@property(nonatomic) _Bool hasSampleRateHz; // @dynamic hasSampleRateHz;
@property(nonatomic) float sampleRateHz; // @dynamic sampleRateHz;

@end
