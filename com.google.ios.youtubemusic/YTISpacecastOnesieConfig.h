//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface YTISpacecastOnesieConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool disableOnesieForCachedProgressiveOnly; // @dynamic disableOnesieForCachedProgressiveOnly;
@property(nonatomic) _Bool hasDisableOnesieForCachedProgressiveOnly; // @dynamic hasDisableOnesieForCachedProgressiveOnly;
@property(retain, nonatomic) GPBInt32Array *preferredOnesieFormatsArray; // @dynamic preferredOnesieFormatsArray;
@property(readonly, nonatomic) unsigned long long preferredOnesieFormatsArray_Count; // @dynamic preferredOnesieFormatsArray_Count;

@end
