//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTINekoValue;

@interface YTINekoChooseValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOtherwiseValue; // @dynamic hasOtherwiseValue;
@property(retain, nonatomic) YTINekoValue *otherwiseValue; // @dynamic otherwiseValue;
@property(retain, nonatomic) NSMutableArray *whenThenValuesArray; // @dynamic whenThenValuesArray;
@property(readonly, nonatomic) unsigned long long whenThenValuesArray_Count; // @dynamic whenThenValuesArray_Count;

@end

