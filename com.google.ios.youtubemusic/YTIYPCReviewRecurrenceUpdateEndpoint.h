//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIYPCReviewRecurrenceUpdateEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUpdateType; // @dynamic hasUpdateType;
@property(retain, nonatomic) NSMutableArray *offerParamsArray; // @dynamic offerParamsArray;
@property(readonly, nonatomic) unsigned long long offerParamsArray_Count; // @dynamic offerParamsArray_Count;
@property(nonatomic) int updateType; // @dynamic updateType;

@end

