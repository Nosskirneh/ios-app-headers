//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTEngagementToolbarViewModel-Protocol.h"
#import "YTVideoViewModel-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIChannelThumbnailSupportedRenderers, YTICommand, YTIFormattedString, YTIMainAppCompactRendererStyle, YTIMenuSupportedRenderers, YTIPromotedVideoCTASupportedRenderers, YTIShowThumbnailSupportedRenderers, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIUpcomingEventData;

@interface YTIShowRenderer : GPBMessage <YTEngagementToolbarViewModel, YTVideoViewModel>
{
}

+ (id)descriptor;
- (_Bool)isPostsV2Enabled;
- (id)engagementToolbarStyle;
- (_Bool)hasEngagementToolbarStyle;
- (id)likeText;
- (id)banButtonRenderer;
- (_Bool)hasBanButtonRenderer;
- (id)removeButtonRenderer;
- (_Bool)hasRemoveButtonRenderer;
- (id)reportButtonRenderer;
- (_Bool)hasReportButtonRenderer;
- (id)approveButtonRenderer;
- (_Bool)hasApproveButtonRenderer;
- (id)liveChatButtonRenderer;
- (_Bool)hasLiveChatButtonRenderer;
- (_Bool)replyButtonHidden;
- (id)overflowMenuRenderer;
- (_Bool)hasOverflowMenuRenderer;
- (id)creatorHeartRenderer;
- (_Bool)hasCreatorHeartRenderer;
- (id)replyButtonRenderer;
- (_Bool)hasReplyButtonRenderer;
- (id)dislikeButtonRenderer;
- (_Bool)hasDislikeButtonRenderer;
- (id)likeButtonRenderer;
- (_Bool)hasLikeButtonRenderer;
@property(readonly, nonatomic) _Bool isAd;
@property(readonly, nonatomic) YTIFormattedString *descriptionP;
@property(readonly, nonatomic) _Bool hasDescriptionP;
@property(readonly, nonatomic) YTIPromotedVideoCTASupportedRenderers *ctaRenderer;
@property(readonly, nonatomic) _Bool hasCtaRenderer;
@property(readonly, nonatomic) _Bool hasPresentationStyle;
@property(readonly, nonatomic) int presentationStyle;
@property(readonly, nonatomic) _Bool hasUpcomingEventData;
@property(readonly, nonatomic) YTIUpcomingEventData *upcomingEventData;
@property(readonly, nonatomic) _Bool hasViewCountText;
@property(readonly, nonatomic) YTIFormattedString *viewCountText;
@property(readonly, nonatomic) _Bool hasIsWatched;
@property(readonly, nonatomic) _Bool isWatched;
@property(readonly, nonatomic) _Bool hasTopStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge;
@property(readonly, nonatomic) _Bool hasLengthText;
@property(readonly, nonatomic) YTIFormattedString *lengthText;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count;
@property(readonly, nonatomic) NSMutableArray *thumbnailBadgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count;
@property(readonly, nonatomic) NSMutableArray *badgesArray;
@property(readonly, nonatomic) _Bool hasOwnerText;
@property(readonly, nonatomic) YTIFormattedString *ownerText;
@property(readonly, nonatomic) _Bool hasShortViewCountText;
@property(readonly, nonatomic) YTIFormattedString *shortViewCountText;
@property(readonly, nonatomic) _Bool hasPublishedTimeText;
@property(readonly, nonatomic) YTIFormattedString *publishedTimeText;
@property(readonly, nonatomic) _Bool hasSecondaryHeadline;
@property(readonly, nonatomic) YTIFormattedString *secondaryHeadline;
@property(readonly, nonatomic) _Bool hasRecommendationText;
@property(readonly, nonatomic) YTIFormattedString *recommendationText;
@property(readonly, nonatomic) _Bool hasChannelThumbnailSupportedRenderers;
@property(readonly, nonatomic) YTIChannelThumbnailSupportedRenderers *channelThumbnailSupportedRenderers;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) YTIThumbnailDetails *thumbnail;

// Remaining properties
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge; // @dynamic bottomStandaloneBadge;
@property(retain, nonatomic) YTIChannelThumbnailSupportedRenderers *channelThumbnail; // @dynamic channelThumbnail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasBottomStandaloneBadge; // @dynamic hasBottomStandaloneBadge;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMainAppStyle; // @dynamic hasMainAppStyle;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasThumbnailRenderer; // @dynamic hasThumbnailRenderer;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMainAppCompactRendererStyle *mainAppStyle; // @dynamic mainAppStyle;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIShowThumbnailSupportedRenderers *thumbnailRenderer; // @dynamic thumbnailRenderer;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

