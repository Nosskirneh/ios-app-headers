//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface OrchFilterCategoryValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(retain, nonatomic) NSMutableArray *simpleFormValueArray; // @dynamic simpleFormValueArray;
@property(readonly, nonatomic) unsigned long long simpleFormValueArray_Count; // @dynamic simpleFormValueArray_Count;

@end

