//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIMdxRouteDistribution : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTimeSinceStartMs; // @dynamic hasTimeSinceStartMs;
@property(retain, nonatomic) NSMutableArray *routesArray; // @dynamic routesArray;
@property(readonly, nonatomic) unsigned long long routesArray_Count; // @dynamic routesArray_Count;
@property(nonatomic) long long timeSinceStartMs; // @dynamic timeSinceStartMs;

@end

