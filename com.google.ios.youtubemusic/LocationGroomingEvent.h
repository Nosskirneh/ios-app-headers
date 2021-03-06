//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface LocationGroomingEvent : GPBMessage
{
}

+ (id)descriptor;
+ (id)eventWithGroomingMethod:(int)arg1 numLocationsGroomed:(unsigned long long)arg2;

// Remaining properties
@property(nonatomic) int groomingMethod; // @dynamic groomingMethod;
@property(copy, nonatomic) NSString *groomingMethodName; // @dynamic groomingMethodName;
@property(nonatomic) _Bool hasGroomingMethod; // @dynamic hasGroomingMethod;
@property(nonatomic) _Bool hasGroomingMethodName; // @dynamic hasGroomingMethodName;
@property(nonatomic) _Bool hasNumLocationsAfterGrooming; // @dynamic hasNumLocationsAfterGrooming;
@property(nonatomic) _Bool hasNumLocationsBeforeGrooming; // @dynamic hasNumLocationsBeforeGrooming;
@property(nonatomic) _Bool hasNumLocationsGroomed; // @dynamic hasNumLocationsGroomed;
@property(nonatomic) long long numLocationsAfterGrooming; // @dynamic numLocationsAfterGrooming;
@property(nonatomic) long long numLocationsBeforeGrooming; // @dynamic numLocationsBeforeGrooming;
@property(nonatomic) long long numLocationsGroomed; // @dynamic numLocationsGroomed;

@end

