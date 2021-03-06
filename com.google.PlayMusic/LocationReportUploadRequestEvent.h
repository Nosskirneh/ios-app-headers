//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class UlrError;

@interface LocationReportUploadRequestEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long earliestTimestampMillis; // @dynamic earliestTimestampMillis;
@property(retain, nonatomic) UlrError *error; // @dynamic error;
@property(nonatomic) _Bool hasEarliestTimestampMillis; // @dynamic hasEarliestTimestampMillis;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasLatencyMillis; // @dynamic hasLatencyMillis;
@property(nonatomic) _Bool hasLatestTimestampMillis; // @dynamic hasLatestTimestampMillis;
@property(nonatomic) _Bool hasReportSizeInBytes; // @dynamic hasReportSizeInBytes;
@property(nonatomic) long long latencyMillis; // @dynamic latencyMillis;
@property(nonatomic) long long latestTimestampMillis; // @dynamic latestTimestampMillis;
@property(nonatomic) long long reportSizeInBytes; // @dynamic reportSizeInBytes;

@end

