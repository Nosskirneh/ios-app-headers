//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSMutableArray, NSString;

@interface CLCCCounter : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *bucketArray; // @dynamic bucketArray;
@property(readonly, nonatomic) unsigned long long bucketArray_Count; // @dynamic bucketArray_Count;
@property(nonatomic) _Bool hasHashedName; // @dynamic hasHashedName;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) unsigned long long hashedName; // @dynamic hashedName;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

