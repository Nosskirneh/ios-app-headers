//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray;

@interface YTIPlayerVisibility : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)isVisibleInState:(int)arg1;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *statesArray; // @dynamic statesArray;
@property(readonly, nonatomic) unsigned long long statesArray_Count; // @dynamic statesArray_Count;

@end

