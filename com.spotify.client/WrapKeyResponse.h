//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface WrapKeyResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int error; // @dynamic error;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(retain, nonatomic) NSMutableArray *keysArray; // @dynamic keysArray;
@property(readonly, nonatomic) unsigned long long keysArray_Count; // @dynamic keysArray_Count;

@end

