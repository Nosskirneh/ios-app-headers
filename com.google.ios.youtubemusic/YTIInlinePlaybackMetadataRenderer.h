//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIAddToButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIInlinePlaybackMetadataCTASupportedRenderers, YTIInlinePlaybackMetadataPromoSupportedRenderers, YTIInlinePlaybackVideoReportingSupportedRenderers, YTILikeButtonSupportedRenderers, YTIMenuSupportedRenderers, YTIRenderer, YTIShareButtonSupportedRenderers, YTIThumbnailDetails;

@interface YTIInlinePlaybackMetadataRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAddToButtonSupportedRenderers *addToButton; // @dynamic addToButton;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIRenderer *bottomStandaloneBadge; // @dynamic bottomStandaloneBadge;
@property(retain, nonatomic) YTICommand *channelNavigationEndpoint; // @dynamic channelNavigationEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *channelThumbnail; // @dynamic channelThumbnail;
@property(retain, nonatomic) YTIInlinePlaybackMetadataCTASupportedRenderers *ctaRenderer; // @dynamic ctaRenderer;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasAddToButton; // @dynamic hasAddToButton;
@property(nonatomic) _Bool hasBottomStandaloneBadge; // @dynamic hasBottomStandaloneBadge;
@property(nonatomic) _Bool hasChannelNavigationEndpoint; // @dynamic hasChannelNavigationEndpoint;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasCtaRenderer; // @dynamic hasCtaRenderer;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasLikeButton; // @dynamic hasLikeButton;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasPromoRenderer; // @dynamic hasPromoRenderer;
@property(nonatomic) _Bool hasPublishedTimeText; // @dynamic hasPublishedTimeText;
@property(nonatomic) _Bool hasShareButton; // @dynamic hasShareButton;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasShortViewCountText; // @dynamic hasShortViewCountText;
@property(nonatomic) _Bool hasSubscribeRenderer; // @dynamic hasSubscribeRenderer;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTopStandaloneBadge; // @dynamic hasTopStandaloneBadge;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoReporting; // @dynamic hasVideoReporting;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(retain, nonatomic) YTILikeButtonSupportedRenderers *likeButton; // @dynamic likeButton;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTIInlinePlaybackMetadataPromoSupportedRenderers *promoRenderer; // @dynamic promoRenderer;
@property(retain, nonatomic) YTIFormattedString *publishedTimeText; // @dynamic publishedTimeText;
@property(retain, nonatomic) YTIShareButtonSupportedRenderers *shareButton; // @dynamic shareButton;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIFormattedString *shortViewCountText; // @dynamic shortViewCountText;
@property(retain, nonatomic) YTIRenderer *subscribeRenderer; // @dynamic subscribeRenderer;
@property(retain, nonatomic) NSMutableArray *thumbnailBadgesArray; // @dynamic thumbnailBadgesArray;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count; // @dynamic thumbnailBadgesArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIRenderer *topStandaloneBadge; // @dynamic topStandaloneBadge;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIInlinePlaybackVideoReportingSupportedRenderers *videoReporting; // @dynamic videoReporting;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end

