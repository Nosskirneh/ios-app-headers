//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, SPTSearchProtoRecommendations;

@interface SPTSearchProtoMainViewResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *entityTypesArray; // @dynamic entityTypesArray;
@property(readonly, nonatomic) unsigned long long entityTypesArray_Count; // @dynamic entityTypesArray_Count;
@property(nonatomic) _Bool hasRecommendations; // @dynamic hasRecommendations;
@property(retain, nonatomic) NSMutableArray *hitsArray; // @dynamic hitsArray;
@property(readonly, nonatomic) unsigned long long hitsArray_Count; // @dynamic hitsArray_Count;
@property(retain, nonatomic) SPTSearchProtoRecommendations *recommendations; // @dynamic recommendations;

@end

