//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface YTISyncRetryConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float exponentialBackoffFactor; // @dynamic exponentialBackoffFactor;
@property(nonatomic) _Bool hasExponentialBackoffFactor; // @dynamic hasExponentialBackoffFactor;
@property(nonatomic) _Bool hasInitialRetryTimeoutMs; // @dynamic hasInitialRetryTimeoutMs;
@property(nonatomic) _Bool hasMaxRetries; // @dynamic hasMaxRetries;
@property(nonatomic) _Bool hasMaxRetryTimeoutMs; // @dynamic hasMaxRetryTimeoutMs;
@property(nonatomic) long long initialRetryTimeoutMs; // @dynamic initialRetryTimeoutMs;
@property(nonatomic) int maxRetries; // @dynamic maxRetries;
@property(nonatomic) long long maxRetryTimeoutMs; // @dynamic maxRetryTimeoutMs;

@end

