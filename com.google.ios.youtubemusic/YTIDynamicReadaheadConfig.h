//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface YTIDynamicReadaheadConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMaxReadAheadMediaTimeMs; // @dynamic hasMaxReadAheadMediaTimeMs;
@property(nonatomic) _Bool hasMinReadAheadMediaTimeMs; // @dynamic hasMinReadAheadMediaTimeMs;
@property(nonatomic) _Bool hasReadAheadGrowthRateMs; // @dynamic hasReadAheadGrowthRateMs;
@property(nonatomic) int maxReadAheadMediaTimeMs; // @dynamic maxReadAheadMediaTimeMs;
@property(nonatomic) int minReadAheadMediaTimeMs; // @dynamic minReadAheadMediaTimeMs;
@property(nonatomic) int readAheadGrowthRateMs; // @dynamic readAheadGrowthRateMs;

@end

