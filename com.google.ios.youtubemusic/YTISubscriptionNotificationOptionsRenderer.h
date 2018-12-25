//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIAccessibilitySupportedDatas, YTIButtonSupportedRenderers, YTIFormattedString, YTIIcon, YTISubscriptionNotificationOptionHintSupportedRenderers;

@interface YTISubscriptionNotificationOptionsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIButtonSupportedRenderers *cancelButton; // @dynamic cancelButton;
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(retain, nonatomic) YTIButtonSupportedRenderers *confirmButton; // @dynamic confirmButton;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasCancelButton; // @dynamic hasCancelButton;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasConfirmButton; // @dynamic hasConfirmButton;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasNotificationToggleButtonHint; // @dynamic hasNotificationToggleButtonHint;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTISubscriptionNotificationOptionHintSupportedRenderers *notificationToggleButtonHint; // @dynamic notificationToggleButtonHint;
@property(retain, nonatomic) NSMutableArray *onNotificationsDisabledActionsArray; // @dynamic onNotificationsDisabledActionsArray;
@property(readonly, nonatomic) unsigned long long onNotificationsDisabledActionsArray_Count; // @dynamic onNotificationsDisabledActionsArray_Count;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(retain, nonatomic) NSMutableArray *secondaryOptionsArray; // @dynamic secondaryOptionsArray;
@property(readonly, nonatomic) unsigned long long secondaryOptionsArray_Count; // @dynamic secondaryOptionsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

