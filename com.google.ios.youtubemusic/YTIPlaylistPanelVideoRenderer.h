//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMOfflineVideoIDProtocol-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIAccessibilitySupportedDatas, YTICommand, YTIFormattedString, YTIIosClientOfflineData, YTIMainAppCompactRendererStyle, YTIMenuSupportedRenderers, YTIPlaylistPanelVideoOfflineabilitySupportedRenderers, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIVideoClientBindingData;

@interface YTIPlaylistPanelVideoRenderer : GPBMessage <YTMOfflineVideoIDProtocol>
{
}

+ (id)descriptor;
+ (id)ytm_playlistPanelVideoRendererWithOfflineVideo:(id)arg1 index:(unsigned long long)arg2 playlistID:(id)arg3 offlineMode:(_Bool)arg4;
+ (id)playlistPanelVideoRendererWithOfflineVideo:(id)arg1 index:(unsigned long long)arg2 playlistID:(id)arg3 offlineMode:(_Bool)arg4;
- (void)ytm_fillWithOfflineMusicVideoData:(id)arg1;
- (void)ytm_fillAdditionalMetadatas:(id)arg1;
- (int)ytm_musicVideoType;
- (void)ytm_addOfflineSwipeButtons;
- (id)ytm_videoID;
- (id)ytm_moreSwipeButton;
- (id)ytm_swipeButtons;
- (id)ytm_offlineVideoID;
- (void)fillWithOfflineMusicVideoData:(id)arg1;
- (void)fillAdditionalMetadatas:(id)arg1;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasIndexText; // @dynamic hasIndexText;
@property(nonatomic) _Bool hasIosClientOfflineData; // @dynamic hasIosClientOfflineData;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMainAppStyle; // @dynamic hasMainAppStyle;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasPlaylistSetVideoId; // @dynamic hasPlaylistSetVideoId;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasShortViewCountText; // @dynamic hasShortViewCountText;
@property(nonatomic) _Bool hasStandaloneBadge; // @dynamic hasStandaloneBadge;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTopStandaloneBadge; // @dynamic hasTopStandaloneBadge;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnplayableText; // @dynamic hasUnplayableText;
@property(nonatomic) _Bool hasVideoClientBindingData; // @dynamic hasVideoClientBindingData;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIFormattedString *indexText; // @dynamic indexText;
@property(retain, nonatomic) YTIIosClientOfflineData *iosClientOfflineData; // @dynamic iosClientOfflineData;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMainAppCompactRendererStyle *mainAppStyle; // @dynamic mainAppStyle;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIPlaylistPanelVideoOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(copy, nonatomic) NSString *playlistSetVideoId; // @dynamic playlistSetVideoId;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIFormattedString *shortViewCountText; // @dynamic shortViewCountText;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge; // @dynamic standaloneBadge;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSMutableArray *swipeButtonsArray; // @dynamic swipeButtonsArray;
@property(readonly, nonatomic) unsigned long long swipeButtonsArray_Count; // @dynamic swipeButtonsArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailBadgesArray; // @dynamic thumbnailBadgesArray;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count; // @dynamic thumbnailBadgesArray_Count;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge; // @dynamic topStandaloneBadge;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *unplayableText; // @dynamic unplayableText;
@property(retain, nonatomic) YTIVideoClientBindingData *videoClientBindingData; // @dynamic videoClientBindingData;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end
