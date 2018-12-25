//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIAccessibilitySupportedDatas, YTICommand, YTIIcon, YTIMultiPageMenuSupportedRenderers, YTIThumbnailDetails, YTITopbarMenuButtonHintSupportedRenderers, YTITopbarMenuButtonPresentationStyle;

@interface YTITopbarMenuButtonRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIThumbnailDetails *avatar; // @dynamic avatar;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasHasUnlimitedEntitlement; // @dynamic hasHasUnlimitedEntitlement;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasMenuRenderer; // @dynamic hasMenuRenderer;
@property(nonatomic) _Bool hasMenuRequest; // @dynamic hasMenuRequest;
@property(nonatomic) _Bool hasPresentationStyle; // @dynamic hasPresentationStyle;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTargetId; // @dynamic hasTargetId;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnlimitedEntitlement; // @dynamic hasUnlimitedEntitlement;
@property(retain, nonatomic) YTITopbarMenuButtonHintSupportedRenderers *hint; // @dynamic hint;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIMultiPageMenuSupportedRenderers *menuRenderer; // @dynamic menuRenderer;
@property(retain, nonatomic) YTICommand *menuRequest; // @dynamic menuRequest;
@property(retain, nonatomic) YTITopbarMenuButtonPresentationStyle *presentationStyle; // @dynamic presentationStyle;
@property(nonatomic) int style; // @dynamic style;
@property(copy, nonatomic) NSString *targetId; // @dynamic targetId;
@property(copy, nonatomic) NSString *tooltip; // @dynamic tooltip;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
