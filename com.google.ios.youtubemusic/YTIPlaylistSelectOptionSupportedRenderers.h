//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIPlaylistAddToOptionRenderer, YTIPlaylistSelectOptionRenderer;

@interface YTIPlaylistSelectOptionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPlaylistAddToOptionRenderer; // @dynamic hasPlaylistAddToOptionRenderer;
@property(nonatomic) _Bool hasPlaylistSelectOptionRenderer; // @dynamic hasPlaylistSelectOptionRenderer;
@property(retain, nonatomic) YTIPlaylistAddToOptionRenderer *playlistAddToOptionRenderer; // @dynamic playlistAddToOptionRenderer;
@property(retain, nonatomic) YTIPlaylistSelectOptionRenderer *playlistSelectOptionRenderer; // @dynamic playlistSelectOptionRenderer;

@end

