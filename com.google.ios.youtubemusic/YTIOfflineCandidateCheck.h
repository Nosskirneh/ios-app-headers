//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIOfflineCandidateCheck : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int candidateType; // @dynamic candidateType;
@property(retain, nonatomic) NSMutableArray *currentCandidatesArray; // @dynamic currentCandidatesArray;
@property(readonly, nonatomic) unsigned long long currentCandidatesArray_Count; // @dynamic currentCandidatesArray_Count;
@property(nonatomic) _Bool hasCandidateType; // @dynamic hasCandidateType;

@end

