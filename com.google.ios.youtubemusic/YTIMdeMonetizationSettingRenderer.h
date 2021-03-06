//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIThumbnailDetails;

@interface YTIMdeMonetizationSettingRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *disabledThumbnail; // @dynamic disabledThumbnail;
@property(nonatomic) _Bool hasDisabledThumbnail; // @dynamic hasDisabledThumbnail;
@property(nonatomic) _Bool hasIsSelectable; // @dynamic hasIsSelectable;
@property(nonatomic) _Bool hasIsSelected; // @dynamic hasIsSelected;
@property(nonatomic) _Bool hasSettingLabel; // @dynamic hasSettingLabel;
@property(nonatomic) _Bool hasSettingSubLabel; // @dynamic hasSettingSubLabel;
@property(nonatomic) _Bool hasSettingType; // @dynamic hasSettingType;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool isSelectable; // @dynamic isSelectable;
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(retain, nonatomic) YTIFormattedString *settingLabel; // @dynamic settingLabel;
@property(retain, nonatomic) YTIFormattedString *settingSubLabel; // @dynamic settingSubLabel;
@property(nonatomic) int settingType; // @dynamic settingType;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;

@end

