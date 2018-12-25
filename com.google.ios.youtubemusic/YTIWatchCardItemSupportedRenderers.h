//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIWatchCardAlbumRenderer, YTIWatchCardPlaylistRenderer, YTIWatchCardRadioRenderer;

@interface YTIWatchCardItemSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasWatchCardAlbumRenderer; // @dynamic hasWatchCardAlbumRenderer;
@property(nonatomic) _Bool hasWatchCardPlaylistRenderer; // @dynamic hasWatchCardPlaylistRenderer;
@property(nonatomic) _Bool hasWatchCardRadioRenderer; // @dynamic hasWatchCardRadioRenderer;
@property(retain, nonatomic) YTIWatchCardAlbumRenderer *watchCardAlbumRenderer; // @dynamic watchCardAlbumRenderer;
@property(retain, nonatomic) YTIWatchCardPlaylistRenderer *watchCardPlaylistRenderer; // @dynamic watchCardPlaylistRenderer;
@property(retain, nonatomic) YTIWatchCardRadioRenderer *watchCardRadioRenderer; // @dynamic watchCardRadioRenderer;

@end

