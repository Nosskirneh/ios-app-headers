//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CCTQosTiersOverride, NSMutableArray;

@interface CCTLogResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNextRequestWaitMillis; // @dynamic hasNextRequestWaitMillis;
@property(nonatomic) _Bool hasQosTier; // @dynamic hasQosTier;
@property(retain, nonatomic) NSMutableArray *logResponseDetailsArray; // @dynamic logResponseDetailsArray;
@property(readonly, nonatomic) unsigned long long logResponseDetailsArray_Count; // @dynamic logResponseDetailsArray_Count;
@property(nonatomic) long long nextRequestWaitMillis; // @dynamic nextRequestWaitMillis;
@property(retain, nonatomic) CCTQosTiersOverride *qosTier; // @dynamic qosTier;

@end

