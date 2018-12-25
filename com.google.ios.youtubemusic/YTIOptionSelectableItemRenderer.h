//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIAccessibilityData, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString, YTIIcon, YTIOptionsConfirmDialogSupportedRenderers;

@interface YTIOptionSelectableItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) NSMutableArray *clickCommandsArray; // @dynamic clickCommandsArray;
@property(readonly, nonatomic) unsigned long long clickCommandsArray_Count; // @dynamic clickCommandsArray_Count;
@property(retain, nonatomic) YTIOptionsConfirmDialogSupportedRenderers *confirmDialog; // @dynamic confirmDialog;
@property(nonatomic) _Bool disableSubmitButton; // @dynamic disableSubmitButton;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasConfirmDialog; // @dynamic hasConfirmDialog;
@property(nonatomic) _Bool hasDisableSubmitButton; // @dynamic hasDisableSubmitButton;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasSubOptionsAccessibility; // @dynamic hasSubOptionsAccessibility;
@property(nonatomic) _Bool hasSubmitEndpoint; // @dynamic hasSubmitEndpoint;
@property(nonatomic) _Bool hasSubmitNavigationEndpoint; // @dynamic hasSubmitNavigationEndpoint;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIAccessibilityData *subOptionsAccessibility; // @dynamic subOptionsAccessibility;
@property(retain, nonatomic) NSMutableArray *subOptionsArray; // @dynamic subOptionsArray;
@property(readonly, nonatomic) unsigned long long subOptionsArray_Count; // @dynamic subOptionsArray_Count;
@property(retain, nonatomic) YTICommand *submitEndpoint; // @dynamic submitEndpoint;
@property(retain, nonatomic) YTICommand *submitNavigationEndpoint; // @dynamic submitNavigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

