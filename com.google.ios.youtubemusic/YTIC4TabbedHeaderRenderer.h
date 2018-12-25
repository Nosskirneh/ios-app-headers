//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTIC4TabbedHeaderColorSupportedDatas, YTIC4TabbedHeaderEditChannelButtonSupportedRenderers, YTIC4TabbedHeaderFlaggingMenuSupportedRenderers, YTIC4TabbedHeaderLinksSupportedRenderers, YTIC4TabbedHeaderMenuSupportedRenderers, YTIC4TabbedHeaderOfflineabiltySupportedRenderers, YTIC4TabbedHeaderOtherSubscribersSupportedRenderers, YTIC4TabbedHeaderSecondaryHeaderSupportedRenderers, YTIC4TabbedHeaderSubscribeButtonSupportedRenderers, YTIC4TabbedHeaderViewAsSupportedRenderers, YTIC4TabbedViewAsNotificationSupportedRenderers, YTICommand, YTIFormattedString, YTIRenderer, YTIThumbnailDetails, YTIVisitTracking;

@interface YTIC4TabbedHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) NSString *yt_headerRendererTitle;

// Remaining properties
@property(retain, nonatomic) YTICommand *advancedSettingsEndpoint; // @dynamic advancedSettingsEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *avatar; // @dynamic avatar;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *banner; // @dynamic banner;
@property(nonatomic) int bannerColor; // @dynamic bannerColor;
@property(retain, nonatomic) YTIRenderer *bannerEditor; // @dynamic bannerEditor;
@property(retain, nonatomic) YTICommand *bannerLinkEndpoint; // @dynamic bannerLinkEndpoint;
@property(retain, nonatomic) YTIButtonSupportedRenderers *casualChannelSettingsButton; // @dynamic casualChannelSettingsButton;
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(retain, nonatomic) YTIC4TabbedHeaderOfflineabiltySupportedRenderers *channelOfflineability; // @dynamic channelOfflineability;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(retain, nonatomic) YTICommand *editAvatarEndpoint; // @dynamic editAvatarEndpoint;
@property(retain, nonatomic) YTICommand *editAvatarServiceEndpoint; // @dynamic editAvatarServiceEndpoint;
@property(retain, nonatomic) YTIC4TabbedHeaderEditChannelButtonSupportedRenderers *editBannerButton; // @dynamic editBannerButton;
@property(retain, nonatomic) YTICommand *editBannerEndpoint; // @dynamic editBannerEndpoint;
@property(retain, nonatomic) NSMutableArray *editChannelButtonsArray; // @dynamic editChannelButtonsArray;
@property(readonly, nonatomic) unsigned long long editChannelButtonsArray_Count; // @dynamic editChannelButtonsArray_Count;
@property(retain, nonatomic) YTICommand *editChannelDescriptionEndpoint; // @dynamic editChannelDescriptionEndpoint;
@property(retain, nonatomic) YTICommand *editLinksEndpoint; // @dynamic editLinksEndpoint;
@property(retain, nonatomic) YTIC4TabbedHeaderFlaggingMenuSupportedRenderers *flaggingMenu; // @dynamic flaggingMenu;
@property(nonatomic) _Bool hasAdvancedSettingsEndpoint; // @dynamic hasAdvancedSettingsEndpoint;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasBanner; // @dynamic hasBanner;
@property(nonatomic) _Bool hasBannerColor; // @dynamic hasBannerColor;
@property(nonatomic) _Bool hasBannerEditor; // @dynamic hasBannerEditor;
@property(nonatomic) _Bool hasBannerLinkEndpoint; // @dynamic hasBannerLinkEndpoint;
@property(nonatomic) _Bool hasCasualChannelSettingsButton; // @dynamic hasCasualChannelSettingsButton;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasChannelOfflineability; // @dynamic hasChannelOfflineability;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasEditAvatarEndpoint; // @dynamic hasEditAvatarEndpoint;
@property(nonatomic) _Bool hasEditAvatarServiceEndpoint; // @dynamic hasEditAvatarServiceEndpoint;
@property(nonatomic) _Bool hasEditBannerButton; // @dynamic hasEditBannerButton;
@property(nonatomic) _Bool hasEditBannerEndpoint; // @dynamic hasEditBannerEndpoint;
@property(nonatomic) _Bool hasEditChannelDescriptionEndpoint; // @dynamic hasEditChannelDescriptionEndpoint;
@property(nonatomic) _Bool hasEditLinksEndpoint; // @dynamic hasEditLinksEndpoint;
@property(nonatomic) _Bool hasFlaggingMenu; // @dynamic hasFlaggingMenu;
@property(nonatomic) _Bool hasHeaderColorPalette; // @dynamic hasHeaderColorPalette;
@property(nonatomic) _Bool hasHeaderLinks; // @dynamic hasHeaderLinks;
@property(nonatomic) _Bool hasMobileBanner; // @dynamic hasMobileBanner;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasNavigationSettingsEndpoint; // @dynamic hasNavigationSettingsEndpoint;
@property(nonatomic) _Bool hasOtherSubscribersModule; // @dynamic hasOtherSubscribersModule;
@property(nonatomic) _Bool hasOverflowMenu; // @dynamic hasOverflowMenu;
@property(nonatomic) _Bool hasPageWidth; // @dynamic hasPageWidth;
@property(nonatomic) _Bool hasProfileEditorEndpoint; // @dynamic hasProfileEditorEndpoint;
@property(nonatomic) _Bool hasSecondaryHeader; // @dynamic hasSecondaryHeader;
@property(nonatomic) _Bool hasShrinkToFit; // @dynamic hasShrinkToFit;
@property(nonatomic) _Bool hasSponsorButton; // @dynamic hasSponsorButton;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasSubscriberCountText; // @dynamic hasSubscriberCountText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTranslateEndpoint; // @dynamic hasTranslateEndpoint;
@property(nonatomic) _Bool hasTvBanner; // @dynamic hasTvBanner;
@property(nonatomic) _Bool hasViewAsNotification; // @dynamic hasViewAsNotification;
@property(nonatomic) _Bool hasViewAsSelector; // @dynamic hasViewAsSelector;
@property(nonatomic) _Bool hasVisitTracking; // @dynamic hasVisitTracking;
@property(retain, nonatomic) YTIC4TabbedHeaderColorSupportedDatas *headerColorPalette; // @dynamic headerColorPalette;
@property(retain, nonatomic) YTIC4TabbedHeaderLinksSupportedRenderers *headerLinks; // @dynamic headerLinks;
@property(retain, nonatomic) YTIThumbnailDetails *mobileBanner; // @dynamic mobileBanner;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTICommand *navigationSettingsEndpoint; // @dynamic navigationSettingsEndpoint;
@property(retain, nonatomic) NSMutableArray *otherButtonsArray; // @dynamic otherButtonsArray;
@property(readonly, nonatomic) unsigned long long otherButtonsArray_Count; // @dynamic otherButtonsArray_Count;
@property(retain, nonatomic) YTIC4TabbedHeaderOtherSubscribersSupportedRenderers *otherSubscribersModule; // @dynamic otherSubscribersModule;
@property(retain, nonatomic) YTIC4TabbedHeaderMenuSupportedRenderers *overflowMenu; // @dynamic overflowMenu;
@property(nonatomic) int pageWidth; // @dynamic pageWidth;
@property(retain, nonatomic) YTICommand *profileEditorEndpoint; // @dynamic profileEditorEndpoint;
@property(retain, nonatomic) YTIC4TabbedHeaderSecondaryHeaderSupportedRenderers *secondaryHeader; // @dynamic secondaryHeader;
@property(nonatomic) _Bool shrinkToFit; // @dynamic shrinkToFit;
@property(retain, nonatomic) YTIRenderer *sponsorButton; // @dynamic sponsorButton;
@property(retain, nonatomic) YTIC4TabbedHeaderSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTIFormattedString *subscriberCountText; // @dynamic subscriberCountText;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTICommand *translateEndpoint; // @dynamic translateEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *tvBanner; // @dynamic tvBanner;
@property(retain, nonatomic) YTIC4TabbedViewAsNotificationSupportedRenderers *viewAsNotification; // @dynamic viewAsNotification;
@property(retain, nonatomic) YTIC4TabbedHeaderViewAsSupportedRenderers *viewAsSelector; // @dynamic viewAsSelector;
@property(retain, nonatomic) YTIVisitTracking *visitTracking; // @dynamic visitTracking;

@end
