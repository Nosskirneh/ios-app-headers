//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIAssociatedGameSupportedRenderers, YTICommand, YTIFormattedString, YTIGamingVideoRenderer_GamingVideoOfflineabilitySupportedRenderers, YTIMenuSupportedRenderers, YTIThumbnailDetails, YTIUpcomingEventData;

@interface YTIGamingVideoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAssociatedGameSupportedRenderers *associatedGame; // @dynamic associatedGame;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *channelThumbnail; // @dynamic channelThumbnail;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(nonatomic) _Bool hasAssociatedGame; // @dynamic hasAssociatedGame;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasPublishedTimeText; // @dynamic hasPublishedTimeText;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasShortViewCountText; // @dynamic hasShortViewCountText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpcomingEventData; // @dynamic hasUpcomingEventData;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIGamingVideoRenderer_GamingVideoOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) NSMutableArray *ownerBadgesArray; // @dynamic ownerBadgesArray;
@property(readonly, nonatomic) unsigned long long ownerBadgesArray_Count; // @dynamic ownerBadgesArray_Count;
@property(retain, nonatomic) YTIFormattedString *publishedTimeText; // @dynamic publishedTimeText;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIFormattedString *shortViewCountText; // @dynamic shortViewCountText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailBadgesArray; // @dynamic thumbnailBadgesArray;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count; // @dynamic thumbnailBadgesArray_Count;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIUpcomingEventData *upcomingEventData; // @dynamic upcomingEventData;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end

