//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIAccessibilitySupportedDatas, YTIIcon;

@interface YTILiveChatIconToggleButtonRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(nonatomic) _Bool disabled; // @dynamic disabled;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasDisabled; // @dynamic hasDisabled;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasTargetId; // @dynamic hasTargetId;
@property(nonatomic) _Bool hasToggledIcon; // @dynamic hasToggledIcon;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *targetId; // @dynamic targetId;
@property(retain, nonatomic) YTIIcon *toggledIcon; // @dynamic toggledIcon;
@property(copy, nonatomic) NSString *tooltip; // @dynamic tooltip;

@end

