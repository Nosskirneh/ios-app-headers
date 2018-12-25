//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIFormattedString;

@interface YTIVideoEffectInterface : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *effectId; // @dynamic effectId;
@property(nonatomic) _Bool hasEffectId; // @dynamic hasEffectId;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(retain, nonatomic) NSMutableArray *newAssetUrlsArray; // @dynamic newAssetUrlsArray;
@property(readonly, nonatomic) unsigned long long newAssetUrlsArray_Count; // @dynamic newAssetUrlsArray_Count;

@end

