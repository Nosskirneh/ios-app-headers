//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIInnerTubeContext;

@interface YTIGetSettingValuesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(retain, nonatomic) NSMutableArray *settingItemIdsArray; // @dynamic settingItemIdsArray;
@property(readonly, nonatomic) unsigned long long settingItemIdsArray_Count; // @dynamic settingItemIdsArray_Count;

@end
