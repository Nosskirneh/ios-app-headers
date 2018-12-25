//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSMutableArray, YTIAbrConstants;

@interface YTIAbrTrajectory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *abrActionsArray; // @dynamic abrActionsArray;
@property(readonly, nonatomic) unsigned long long abrActionsArray_Count; // @dynamic abrActionsArray_Count;
@property(retain, nonatomic) NSMutableArray *abrStatesArray; // @dynamic abrStatesArray;
@property(readonly, nonatomic) unsigned long long abrStatesArray_Count; // @dynamic abrStatesArray_Count;
@property(retain, nonatomic) YTIAbrConstants *constants; // @dynamic constants;
@property(nonatomic) _Bool hasConstants; // @dynamic hasConstants;
@property(retain, nonatomic) GPBInt32Array *watchTimeMsArray; // @dynamic watchTimeMsArray;
@property(readonly, nonatomic) unsigned long long watchTimeMsArray_Count; // @dynamic watchTimeMsArray_Count;

@end

