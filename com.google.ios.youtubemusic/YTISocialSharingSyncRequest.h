//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIInnerTubeContext;

@interface YTISocialSharingSyncRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) NSMutableArray *entityKeysArray; // @dynamic entityKeysArray;
@property(readonly, nonatomic) unsigned long long entityKeysArray_Count; // @dynamic entityKeysArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(retain, nonatomic) NSMutableArray *syncTokensArray; // @dynamic syncTokensArray;
@property(readonly, nonatomic) unsigned long long syncTokensArray_Count; // @dynamic syncTokensArray_Count;

@end
