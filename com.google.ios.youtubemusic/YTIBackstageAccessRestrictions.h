//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIBackstageAccessRestrictions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMinRequiredTier; // @dynamic hasMinRequiredTier;
@property(nonatomic) _Bool hasRestriction; // @dynamic hasRestriction;
@property(copy, nonatomic) NSString *minRequiredTier; // @dynamic minRequiredTier;
@property(nonatomic) int restriction; // @dynamic restriction;

@end

