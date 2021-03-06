//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, SFSPPDClientVersion, SFSPPDExtensionSet, SFSPPDMergedPersonSourceOptions, SFSPPDPagingOptions, SFSPPDRequestedAffinity, SFSPPDSimpleFieldMask;

@interface SFSPPDListRankedTargetsLiteRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SFSPPDRequestedAffinity *affinity; // @dynamic affinity;
@property(retain, nonatomic) SFSPPDClientVersion *clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) SFSPPDExtensionSet *extensionSet; // @dynamic extensionSet;
@property(retain, nonatomic) SFSPPDSimpleFieldMask *fieldMask; // @dynamic fieldMask;
@property(nonatomic) _Bool hasAffinity; // @dynamic hasAffinity;
@property(nonatomic) _Bool hasClientVersion; // @dynamic hasClientVersion;
@property(nonatomic) _Bool hasExtensionSet; // @dynamic hasExtensionSet;
@property(nonatomic) _Bool hasFieldMask; // @dynamic hasFieldMask;
@property(nonatomic) _Bool hasIncludeAllReachablePeople; // @dynamic hasIncludeAllReachablePeople;
@property(nonatomic) _Bool hasMergedPersonSourceOptions; // @dynamic hasMergedPersonSourceOptions;
@property(nonatomic) _Bool hasPagingOptions; // @dynamic hasPagingOptions;
@property(nonatomic) _Bool includeAllReachablePeople; // @dynamic includeAllReachablePeople;
@property(retain, nonatomic) GPBEnumArray *includeContainerArray; // @dynamic includeContainerArray;
@property(readonly, nonatomic) unsigned long long includeContainerArray_Count; // @dynamic includeContainerArray_Count;
@property(retain, nonatomic) SFSPPDMergedPersonSourceOptions *mergedPersonSourceOptions; // @dynamic mergedPersonSourceOptions;
@property(retain, nonatomic) SFSPPDPagingOptions *pagingOptions; // @dynamic pagingOptions;

@end

