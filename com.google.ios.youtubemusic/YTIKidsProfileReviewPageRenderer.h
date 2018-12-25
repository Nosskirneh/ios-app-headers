//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIContentLevelSelector, YTIFormattedString, YTIKidsProfileReviewPageRenderer_SearchTooltipDialog;

@interface YTIKidsProfileReviewPageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIContentLevelSelector *contentLevelSelector; // @dynamic contentLevelSelector;
@property(copy, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) _Bool hasContentLevelSelector; // @dynamic hasContentLevelSelector;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasSearchOffButtonText; // @dynamic hasSearchOffButtonText;
@property(nonatomic) _Bool hasSearchOffSettingsDescriptionText; // @dynamic hasSearchOffSettingsDescriptionText;
@property(nonatomic) _Bool hasSearchOnButtonText; // @dynamic hasSearchOnButtonText;
@property(nonatomic) _Bool hasSearchOnSettingsDescriptionText; // @dynamic hasSearchOnSettingsDescriptionText;
@property(nonatomic) _Bool hasSearchSettingsTitle; // @dynamic hasSearchSettingsTitle;
@property(nonatomic) _Bool hasSearchTooltipDialog; // @dynamic hasSearchTooltipDialog;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleWithProfileName; // @dynamic hasTitleWithProfileName;
@property(retain, nonatomic) YTIFormattedString *searchOffButtonText; // @dynamic searchOffButtonText;
@property(copy, nonatomic) NSString *searchOffSettingsDescriptionText; // @dynamic searchOffSettingsDescriptionText;
@property(retain, nonatomic) YTIFormattedString *searchOnButtonText; // @dynamic searchOnButtonText;
@property(copy, nonatomic) NSString *searchOnSettingsDescriptionText; // @dynamic searchOnSettingsDescriptionText;
@property(retain, nonatomic) YTIFormattedString *searchSettingsTitle; // @dynamic searchSettingsTitle;
@property(retain, nonatomic) YTIKidsProfileReviewPageRenderer_SearchTooltipDialog *searchTooltipDialog; // @dynamic searchTooltipDialog;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSString *titleWithProfileName; // @dynamic titleWithProfileName;

@end

