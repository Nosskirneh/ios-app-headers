//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, StatusProto;

@interface FCSZIncrementResponse_BatchStatus : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLookupStatus; // @dynamic hasLookupStatus;
@property(retain, nonatomic) NSMutableArray *incStatusArray; // @dynamic incStatusArray;
@property(readonly, nonatomic) unsigned long long incStatusArray_Count; // @dynamic incStatusArray_Count;
@property(retain, nonatomic) StatusProto *lookupStatus; // @dynamic lookupStatus;

@end
