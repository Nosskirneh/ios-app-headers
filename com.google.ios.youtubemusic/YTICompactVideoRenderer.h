//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTClientBindingData-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIAccessibilitySupportedDatas, YTIAssociatedGameSupportedRenderers, YTICommand, YTICompactVideoJumpToSceneSupportedRenderers, YTICompactVideoRenderer_CompactVideoOfflineabilitySupportedRenderers, YTICompactVideoRichThumbnailSupportedRenderers, YTICompactVideoStyle, YTIFormattedString, YTIIosClientOfflineData, YTIKidsTileDisplayExtension, YTIKidsVideoOwnerExtension, YTIMainAppCompactRendererStyle, YTIMenuSupportedRenderers, YTIOfflineRefreshSupportedRenderers, YTIRenderer, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIUpcomingEventData, YTIVideoClientBindingData, YTIVideoPreviewSupportedRenderers;

@interface YTICompactVideoRenderer : GPBMessage <YTClientBindingData>
{
}

+ (id)descriptor;
+ (id)compactVideoRendererWithOfflineVideo:(id)arg1 navigationEndpoint:(id)arg2;
+ (id)compactVideoRendererWithOfflineVideo:(id)arg1 offlineMode:(_Bool)arg2;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *bindingPlaylistID;
@property(readonly, nonatomic) NSString *bindingVideoID;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) NSMutableArray *addedToUpNextActionsArray; // @dynamic addedToUpNextActionsArray;
@property(readonly, nonatomic) unsigned long long addedToUpNextActionsArray_Count; // @dynamic addedToUpNextActionsArray_Count;
@property(retain, nonatomic) YTIAssociatedGameSupportedRenderers *associatedGame; // @dynamic associatedGame;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge; // @dynamic bottomStandaloneBadge;
@property(retain, nonatomic) YTIThumbnailDetails *channelThumbnail; // @dynamic channelThumbnail;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTICommand *editMetadataEndpoint; // @dynamic editMetadataEndpoint;
@property(retain, nonatomic) NSMutableArray *endSwipeContentsArray; // @dynamic endSwipeContentsArray;
@property(readonly, nonatomic) unsigned long long endSwipeContentsArray_Count; // @dynamic endSwipeContentsArray_Count;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasAssociatedGame; // @dynamic hasAssociatedGame;
@property(nonatomic) _Bool hasBottomStandaloneBadge; // @dynamic hasBottomStandaloneBadge;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasEditMetadataEndpoint; // @dynamic hasEditMetadataEndpoint;
@property(nonatomic) _Bool hasInlineStandaloneBadge; // @dynamic hasInlineStandaloneBadge;
@property(nonatomic) _Bool hasIosClientOfflineData; // @dynamic hasIosClientOfflineData;
@property(nonatomic) _Bool hasIsOwnedByViewer; // @dynamic hasIsOwnedByViewer;
@property(nonatomic) _Bool hasIsWatched; // @dynamic hasIsWatched;
@property(nonatomic) _Bool hasJumpToScene; // @dynamic hasJumpToScene;
@property(nonatomic) _Bool hasKidsTileDisplayExtension; // @dynamic hasKidsTileDisplayExtension;
@property(nonatomic) _Bool hasKidsVideoOwnerExtension; // @dynamic hasKidsVideoOwnerExtension;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMainAppStyle; // @dynamic hasMainAppStyle;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfflineRefreshInfo; // @dynamic hasOfflineRefreshInfo;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasPresentationStyle; // @dynamic hasPresentationStyle;
@property(nonatomic) _Bool hasPublishedTimeText; // @dynamic hasPublishedTimeText;
@property(nonatomic) _Bool hasRejectedVideoButton; // @dynamic hasRejectedVideoButton;
@property(nonatomic) _Bool hasRichThumbnail; // @dynamic hasRichThumbnail;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasShortViewCountText; // @dynamic hasShortViewCountText;
@property(nonatomic) _Bool hasStandaloneBadge; // @dynamic hasStandaloneBadge;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTappedAction; // @dynamic hasTappedAction;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTopStandaloneBadge; // @dynamic hasTopStandaloneBadge;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpcomingEventData; // @dynamic hasUpcomingEventData;
@property(nonatomic) _Bool hasVideoClientBindingData; // @dynamic hasVideoClientBindingData;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasVideoPreview; // @dynamic hasVideoPreview;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *inlineStandaloneBadge; // @dynamic inlineStandaloneBadge;
@property(retain, nonatomic) YTIIosClientOfflineData *iosClientOfflineData; // @dynamic iosClientOfflineData;
@property(nonatomic) _Bool isOwnedByViewer; // @dynamic isOwnedByViewer;
@property(nonatomic) _Bool isWatched; // @dynamic isWatched;
@property(retain, nonatomic) YTICompactVideoJumpToSceneSupportedRenderers *jumpToScene; // @dynamic jumpToScene;
@property(retain, nonatomic) YTIKidsTileDisplayExtension *kidsTileDisplayExtension; // @dynamic kidsTileDisplayExtension;
@property(retain, nonatomic) YTIKidsVideoOwnerExtension *kidsVideoOwnerExtension; // @dynamic kidsVideoOwnerExtension;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMainAppCompactRendererStyle *mainAppStyle; // @dynamic mainAppStyle;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIOfflineRefreshSupportedRenderers *offlineRefreshInfo; // @dynamic offlineRefreshInfo;
@property(retain, nonatomic) YTICompactVideoRenderer_CompactVideoOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) NSMutableArray *ownerBadgesArray; // @dynamic ownerBadgesArray;
@property(readonly, nonatomic) unsigned long long ownerBadgesArray_Count; // @dynamic ownerBadgesArray_Count;
@property(nonatomic) int presentationStyle; // @dynamic presentationStyle;
@property(retain, nonatomic) YTIFormattedString *publishedTimeText; // @dynamic publishedTimeText;
@property(retain, nonatomic) YTIRenderer *rejectedVideoButton; // @dynamic rejectedVideoButton;
@property(retain, nonatomic) YTICompactVideoRichThumbnailSupportedRenderers *richThumbnail; // @dynamic richThumbnail;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIFormattedString *shortViewCountText; // @dynamic shortViewCountText;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge; // @dynamic standaloneBadge;
@property(retain, nonatomic) YTICompactVideoStyle *style; // @dynamic style;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTICommand *tappedAction; // @dynamic tappedAction;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailBadgesArray; // @dynamic thumbnailBadgesArray;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count; // @dynamic thumbnailBadgesArray_Count;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge; // @dynamic topStandaloneBadge;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIUpcomingEventData *upcomingEventData; // @dynamic upcomingEventData;
@property(retain, nonatomic) YTIVideoClientBindingData *videoClientBindingData; // @dynamic videoClientBindingData;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIVideoPreviewSupportedRenderers *videoPreview; // @dynamic videoPreview;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end

