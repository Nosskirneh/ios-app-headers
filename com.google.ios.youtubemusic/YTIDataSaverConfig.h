//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray;

@interface YTIDataSaverConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *bitrateCappedConnectionTypesArray; // @dynamic bitrateCappedConnectionTypesArray;
@property(readonly, nonatomic) unsigned long long bitrateCappedConnectionTypesArray_Count; // @dynamic bitrateCappedConnectionTypesArray_Count;
@property(nonatomic) _Bool hasSimpleBitrateCap; // @dynamic hasSimpleBitrateCap;
@property(nonatomic) _Bool hasUseA1Subdomain; // @dynamic hasUseA1Subdomain;
@property(nonatomic) long long simpleBitrateCap; // @dynamic simpleBitrateCap;
@property(nonatomic) _Bool useA1Subdomain; // @dynamic useA1Subdomain;

@end
