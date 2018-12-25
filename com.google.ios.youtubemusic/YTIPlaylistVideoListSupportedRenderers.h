//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAutoplayVideoRenderer, YTICounterfactualRenderer, YTIPlaylistVideoRenderer, YTIRedCarpetPlaylistVideoRenderer, YTIVideoRenderer;

@interface YTIPlaylistVideoListSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAutoplayVideoRenderer *autoplayVideoRenderer; // @dynamic autoplayVideoRenderer;
@property(retain, nonatomic) YTICounterfactualRenderer *counterfactualRenderer; // @dynamic counterfactualRenderer;
@property(nonatomic) _Bool hasAutoplayVideoRenderer; // @dynamic hasAutoplayVideoRenderer;
@property(nonatomic) _Bool hasCounterfactualRenderer; // @dynamic hasCounterfactualRenderer;
@property(nonatomic) _Bool hasPlaylistVideoRenderer; // @dynamic hasPlaylistVideoRenderer;
@property(nonatomic) _Bool hasRedCarpetPlaylistVideoRenderer; // @dynamic hasRedCarpetPlaylistVideoRenderer;
@property(nonatomic) _Bool hasVideoRenderer; // @dynamic hasVideoRenderer;
@property(retain, nonatomic) YTIPlaylistVideoRenderer *playlistVideoRenderer; // @dynamic playlistVideoRenderer;
@property(retain, nonatomic) YTIRedCarpetPlaylistVideoRenderer *redCarpetPlaylistVideoRenderer; // @dynamic redCarpetPlaylistVideoRenderer;
@property(retain, nonatomic) YTIVideoRenderer *videoRenderer; // @dynamic videoRenderer;

@end

