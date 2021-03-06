//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIFormattedString, YTISettingConfirmDialogSupportedRenderers;

@interface YTISettingSingleOptionMenuRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *clientSettingDependenciesArray; // @dynamic clientSettingDependenciesArray;
@property(readonly, nonatomic) unsigned long long clientSettingDependenciesArray_Count; // @dynamic clientSettingDependenciesArray_Count;
@property(retain, nonatomic) YTISettingConfirmDialogSupportedRenderers *confirmChangeDialog; // @dynamic confirmChangeDialog;
@property(nonatomic) _Bool hasConfirmChangeDialog; // @dynamic hasConfirmChangeDialog;
@property(nonatomic) _Bool hasItemId; // @dynamic hasItemId;
@property(nonatomic) _Bool hasSummary; // @dynamic hasSummary;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) int itemId; // @dynamic itemId;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(retain, nonatomic) YTIFormattedString *summary; // @dynamic summary;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

