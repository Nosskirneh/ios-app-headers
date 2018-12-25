//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIButtonSupportedRenderers, YTIChannelSettingsEditorBooleanFormFieldSupportedRenderers, YTIFormattedString;

@interface YTIChannelSettingsEditorRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *accountSettingsText; // @dynamic accountSettingsText;
@property(retain, nonatomic) YTIFormattedString *advancedSettingsText; // @dynamic advancedSettingsText;
@property(retain, nonatomic) YTIChannelSettingsEditorBooleanFormFieldSupportedRenderers *discussionTabSetting; // @dynamic discussionTabSetting;
@property(nonatomic) _Bool hasAccountSettingsText; // @dynamic hasAccountSettingsText;
@property(nonatomic) _Bool hasAdvancedSettingsText; // @dynamic hasAdvancedSettingsText;
@property(nonatomic) _Bool hasDiscussionTabSetting; // @dynamic hasDiscussionTabSetting;
@property(nonatomic) _Bool hasLayoutSetting; // @dynamic hasLayoutSetting;
@property(nonatomic) _Bool hasPrivacySettingsTitle; // @dynamic hasPrivacySettingsTitle;
@property(nonatomic) _Bool hasSaveButton; // @dynamic hasSaveButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTranslateInfoBody; // @dynamic hasTranslateInfoBody;
@property(nonatomic) _Bool hasTranslateInfoTitle; // @dynamic hasTranslateInfoTitle;
@property(retain, nonatomic) YTIChannelSettingsEditorBooleanFormFieldSupportedRenderers *layoutSetting; // @dynamic layoutSetting;
@property(retain, nonatomic) NSMutableArray *privacySettingsArray; // @dynamic privacySettingsArray;
@property(readonly, nonatomic) unsigned long long privacySettingsArray_Count; // @dynamic privacySettingsArray_Count;
@property(retain, nonatomic) YTIFormattedString *privacySettingsTitle; // @dynamic privacySettingsTitle;
@property(retain, nonatomic) YTIButtonSupportedRenderers *saveButton; // @dynamic saveButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIFormattedString *translateInfoBody; // @dynamic translateInfoBody;
@property(retain, nonatomic) YTIFormattedString *translateInfoTitle; // @dynamic translateInfoTitle;

@end

