//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMusicEditablePlaylistDetailHeaderRenderer, YTIPlaylistDetailHeaderRenderer, YTIPlaylistHeaderRenderer;

@interface YTIPlaylistEditHeaderSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMusicEditablePlaylistDetailHeaderRenderer; // @dynamic hasMusicEditablePlaylistDetailHeaderRenderer;
@property(nonatomic) _Bool hasPlaylistDetailHeaderRenderer; // @dynamic hasPlaylistDetailHeaderRenderer;
@property(nonatomic) _Bool hasPlaylistHeaderRenderer; // @dynamic hasPlaylistHeaderRenderer;
@property(retain, nonatomic) YTIMusicEditablePlaylistDetailHeaderRenderer *musicEditablePlaylistDetailHeaderRenderer; // @dynamic musicEditablePlaylistDetailHeaderRenderer;
@property(retain, nonatomic) YTIPlaylistDetailHeaderRenderer *playlistDetailHeaderRenderer; // @dynamic playlistDetailHeaderRenderer;
@property(retain, nonatomic) YTIPlaylistHeaderRenderer *playlistHeaderRenderer; // @dynamic playlistHeaderRenderer;

@end
