//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIDataSyncPath, YTIInvalidationId;

@interface YTIInvalidationContinuationData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *clickTrackingParams; // @dynamic clickTrackingParams;
@property(retain, nonatomic) YTIDataSyncPath *consistencyTokenPath; // @dynamic consistencyTokenPath;
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(nonatomic) int delayMs; // @dynamic delayMs;
@property(nonatomic) _Bool hasClickTrackingParams; // @dynamic hasClickTrackingParams;
@property(nonatomic) _Bool hasConsistencyTokenPath; // @dynamic hasConsistencyTokenPath;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasDelayMs; // @dynamic hasDelayMs;
@property(nonatomic) _Bool hasInvalidationId; // @dynamic hasInvalidationId;
@property(nonatomic) _Bool hasTimeoutMs; // @dynamic hasTimeoutMs;
@property(retain, nonatomic) YTIInvalidationId *invalidationId; // @dynamic invalidationId;
@property(nonatomic) int timeoutMs; // @dynamic timeoutMs;

@end

