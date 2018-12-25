//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTISpacecastApplianceRequested;

@interface YTISpacecastMetadataLookupRequested : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int contentCacheStatus; // @dynamic contentCacheStatus;
@property(copy, nonatomic) NSString *cpn; // @dynamic cpn;
@property(copy, nonatomic) NSString *docid; // @dynamic docid;
@property(retain, nonatomic) NSMutableArray *formatsArray; // @dynamic formatsArray;
@property(readonly, nonatomic) unsigned long long formatsArray_Count; // @dynamic formatsArray_Count;
@property(nonatomic) _Bool hasContentCacheStatus; // @dynamic hasContentCacheStatus;
@property(nonatomic) _Bool hasCpn; // @dynamic hasCpn;
@property(nonatomic) _Bool hasDocid; // @dynamic hasDocid;
@property(nonatomic) _Bool hasRequest; // @dynamic hasRequest;
@property(nonatomic) _Bool hasRequestContext; // @dynamic hasRequestContext;
@property(retain, nonatomic) YTISpacecastApplianceRequested *request; // @dynamic request;
@property(nonatomic) int requestContext; // @dynamic requestContext;

@end

