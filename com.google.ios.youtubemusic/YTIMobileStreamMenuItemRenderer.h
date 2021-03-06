//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString, YTIIcon, YTIMobileStreamQuickActionItemSupportedRenderers;

@interface YTIMobileStreamMenuItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIsSelected; // @dynamic hasIsSelected;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasQuickActionItem; // @dynamic hasQuickActionItem;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIMobileStreamQuickActionItemSupportedRenderers *quickActionItem; // @dynamic quickActionItem;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) NSMutableArray *visibilityConditionsArray; // @dynamic visibilityConditionsArray;
@property(readonly, nonatomic) unsigned long long visibilityConditionsArray_Count; // @dynamic visibilityConditionsArray_Count;

@end

