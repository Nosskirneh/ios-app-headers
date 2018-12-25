//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIOfflineErrorMetadata;

@interface YTIOfflineSharePairing : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int attemptNumber; // @dynamic attemptNumber;
@property(nonatomic) long long durationMs; // @dynamic durationMs;
@property(nonatomic) int entityType; // @dynamic entityType;
@property(retain, nonatomic) YTIOfflineErrorMetadata *errorData; // @dynamic errorData;
@property(nonatomic) _Bool hasAttemptNumber; // @dynamic hasAttemptNumber;
@property(nonatomic) _Bool hasDurationMs; // @dynamic hasDurationMs;
@property(nonatomic) _Bool hasEntityType; // @dynamic hasEntityType;
@property(nonatomic) _Bool hasErrorData; // @dynamic hasErrorData;
@property(nonatomic) _Bool hasOfflineShareSessionNonce; // @dynamic hasOfflineShareSessionNonce;
@property(copy, nonatomic) NSString *offlineShareSessionNonce; // @dynamic offlineShareSessionNonce;

@end

