//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CSHMResponseAppData, NSMutableArray;

@interface CSHMOfflinePrefetchResponseData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CSHMResponseAppData *appData; // @dynamic appData;
@property(retain, nonatomic) NSMutableArray *contextSpecificRecommendationsArray; // @dynamic contextSpecificRecommendationsArray;
@property(readonly, nonatomic) unsigned long long contextSpecificRecommendationsArray_Count; // @dynamic contextSpecificRecommendationsArray_Count;
@property(nonatomic) _Bool hasAppData; // @dynamic hasAppData;

@end

