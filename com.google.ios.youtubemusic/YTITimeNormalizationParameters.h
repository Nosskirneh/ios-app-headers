//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTITimeNormalizationParameters : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *broadcastVideoId; // @dynamic broadcastVideoId;
@property(nonatomic) _Bool hasBroadcastVideoId; // @dynamic hasBroadcastVideoId;
@property(nonatomic) _Bool hasUtcTimeAtJoinMs; // @dynamic hasUtcTimeAtJoinMs;
@property(nonatomic) unsigned long long utcTimeAtJoinMs; // @dynamic utcTimeAtJoinMs;

@end

