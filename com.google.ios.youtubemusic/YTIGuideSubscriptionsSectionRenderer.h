//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSData, NSMutableArray, NSString, YTIFormattedString;

@interface YTIGuideSubscriptionsSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *formattedTitle; // @dynamic formattedTitle;
@property(retain, nonatomic) GPBEnumArray *handlerDatasArray; // @dynamic handlerDatasArray;
@property(readonly, nonatomic) unsigned long long handlerDatasArray_Count; // @dynamic handlerDatasArray_Count;
@property(nonatomic) _Bool hasFormattedTitle; // @dynamic hasFormattedTitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

