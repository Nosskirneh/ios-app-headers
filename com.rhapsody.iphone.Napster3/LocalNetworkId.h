//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GPBUInt64Array;

@interface LocalNetworkId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLnid; // @dynamic hasLnid;
@property(nonatomic) unsigned long long lnid; // @dynamic lnid;
@property(retain, nonatomic) GPBUInt64Array *lnidWArray; // @dynamic lnidWArray;
@property(readonly, nonatomic) unsigned long long lnidWArray_Count; // @dynamic lnidWArray_Count;

@end

