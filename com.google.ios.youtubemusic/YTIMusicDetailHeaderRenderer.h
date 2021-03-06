//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIFormattedString, YTIRenderer;

@interface YTIMusicDetailHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;
+ (id)ytm_inlineBadgeForExplicitType:(int)arg1;
+ (id)ytm_headerRendererWithOfflinePlaylist:(id)arg1 offlineVideos:(id)arg2 shuffleEnabled:(_Bool)arg3 bylineButtonsEnabled:(_Bool)arg4;
+ (id)ytm_musicPlaylistDataFromOfflinePlaylistData:(id)arg1;
+ (id)ytm_headerRendererForAlbumWithOfflinePlaylist:(id)arg1 offlineVideos:(id)arg2 shuffleEnabled:(_Bool)arg3 bylineButtonsEnabled:(_Bool)arg4;
+ (id)ytm_headerRendererForPlaylistWithOfflinePlaylist:(id)arg1 offlineVideos:(id)arg2 shuffleEnabled:(_Bool)arg3 bylineButtonsEnabled:(_Bool)arg4;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *byline; // @dynamic byline;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(retain, nonatomic) YTIRenderer *fab; // @dynamic fab;
@property(nonatomic) _Bool hasByline; // @dynamic hasByline;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasFab; // @dynamic hasFab;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasMoreButton; // @dynamic hasMoreButton;
@property(nonatomic) _Bool hasSecondTitle; // @dynamic hasSecondTitle;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *menu; // @dynamic menu;
@property(retain, nonatomic) YTIRenderer *moreButton; // @dynamic moreButton;
@property(retain, nonatomic) NSMutableArray *potentialThumbnailOverlaysArray; // @dynamic potentialThumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long potentialThumbnailOverlaysArray_Count; // @dynamic potentialThumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *secondTitle; // @dynamic secondTitle;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) NSMutableArray *subtitleBadgesArray; // @dynamic subtitleBadgesArray;
@property(readonly, nonatomic) unsigned long long subtitleBadgesArray_Count; // @dynamic subtitleBadgesArray_Count;
@property(retain, nonatomic) YTIRenderer *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

