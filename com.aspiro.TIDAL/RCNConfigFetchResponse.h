//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface RCNConfigFetchResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appConfigArray; // @dynamic appConfigArray;
@property(readonly, nonatomic) unsigned long long appConfigArray_Count; // @dynamic appConfigArray_Count;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) NSMutableArray *internalMetadataArray; // @dynamic internalMetadataArray;
@property(readonly, nonatomic) unsigned long long internalMetadataArray_Count; // @dynamic internalMetadataArray_Count;
@property(retain, nonatomic) NSMutableArray *packageTableArray; // @dynamic packageTableArray;
@property(readonly, nonatomic) unsigned long long packageTableArray_Count; // @dynamic packageTableArray_Count;
@property(nonatomic) int status; // @dynamic status;

@end

