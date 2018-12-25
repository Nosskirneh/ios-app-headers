//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiResponseHeader, GPBEnumArray, NSData;

@interface GFMCanAddMemberResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(nonatomic) _Bool canAddMember; // @dynamic canAddMember;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasCanAddMember; // @dynamic hasCanAddMember;
@property(nonatomic) _Bool hasInstrumentChallengeToken; // @dynamic hasInstrumentChallengeToken;
@property(copy, nonatomic) NSData *instrumentChallengeToken; // @dynamic instrumentChallengeToken;
@property(retain, nonatomic) GPBEnumArray *unmetPreconditionsArray; // @dynamic unmetPreconditionsArray;
@property(readonly, nonatomic) unsigned long long unmetPreconditionsArray_Count; // @dynamic unmetPreconditionsArray_Count;

@end
