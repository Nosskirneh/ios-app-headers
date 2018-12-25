//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIAccessibilitySupportedDatas, YTICommand, YTIDrawerAvatarHintSupportedRenderers, YTIDrawerAvatarSupportedContinuations, YTIFormattedString, YTIIcon, YTIThumbnailDetails;

@interface YTIDrawerAvatarRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIFormattedString *activityCount; // @dynamic activityCount;
@property(retain, nonatomic) YTIDrawerAvatarSupportedContinuations *continuation; // @dynamic continuation;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasActivityCount; // @dynamic hasActivityCount;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasHideInCompact; // @dynamic hasHideInCompact;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasIconText; // @dynamic hasIconText;
@property(nonatomic) _Bool hasIsSelected; // @dynamic hasIsSelected;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSelectedIcon; // @dynamic hasSelectedIcon;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hideInCompact; // @dynamic hideInCompact;
@property(retain, nonatomic) YTIDrawerAvatarHintSupportedRenderers *hint; // @dynamic hint;
@property(copy, nonatomic) NSString *iconText; // @dynamic iconText;
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIIcon *selectedIcon; // @dynamic selectedIcon;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

