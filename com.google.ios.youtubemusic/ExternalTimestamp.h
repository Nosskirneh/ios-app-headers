//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ExternalTimestamp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasTimeMs; // @dynamic hasTimeMs;
@property(nonatomic) _Bool hasUptimeMs; // @dynamic hasUptimeMs;
@property(copy, nonatomic) NSString *source; // @dynamic source;
@property(nonatomic) long long timeMs; // @dynamic timeMs;
@property(nonatomic) long long uptimeMs; // @dynamic uptimeMs;

@end

