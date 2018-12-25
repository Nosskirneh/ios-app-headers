//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIChannelNavigationSettingFieldSupportedRenderers, YTIFormattedString;

@interface YTIChannelCustomTabSettingsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *customTabNameLabel; // @dynamic customTabNameLabel;
@property(retain, nonatomic) YTIFormattedString *customTabURLLabel; // @dynamic customTabURLLabel;
@property(copy, nonatomic) NSString *customTabURLPrefix; // @dynamic customTabURLPrefix;
@property(retain, nonatomic) YTIChannelNavigationSettingFieldSupportedRenderers *defaultViewSetting; // @dynamic defaultViewSetting;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasCustomTabNameLabel; // @dynamic hasCustomTabNameLabel;
@property(nonatomic) _Bool hasCustomTabURLLabel; // @dynamic hasCustomTabURLLabel;
@property(nonatomic) _Bool hasCustomTabURLPrefix; // @dynamic hasCustomTabURLPrefix;
@property(nonatomic) _Bool hasDefaultViewSetting; // @dynamic hasDefaultViewSetting;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasIframeDefaultHeightLabel; // @dynamic hasIframeDefaultHeightLabel;
@property(nonatomic) _Bool hasIframeDefaultHeightTooltip; // @dynamic hasIframeDefaultHeightTooltip;
@property(nonatomic) _Bool hasRedirectMobileToCustomTab; // @dynamic hasRedirectMobileToCustomTab;
@property(retain, nonatomic) YTIFormattedString *iframeDefaultHeightLabel; // @dynamic iframeDefaultHeightLabel;
@property(retain, nonatomic) YTIFormattedString *iframeDefaultHeightTooltip; // @dynamic iframeDefaultHeightTooltip;
@property(retain, nonatomic) YTIChannelNavigationSettingFieldSupportedRenderers *redirectMobileToCustomTab; // @dynamic redirectMobileToCustomTab;

@end

