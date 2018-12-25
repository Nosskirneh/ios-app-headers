//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMusicCompoundThumbnailRenderer, YTIMusicThumbnailRenderer, YTISimpleVideoThumbnailRenderer;

@interface YTIMusicWideOfflineMixtapeThumbnailSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMusicCompoundThumbnailRenderer; // @dynamic hasMusicCompoundThumbnailRenderer;
@property(nonatomic) _Bool hasMusicThumbnailRenderer; // @dynamic hasMusicThumbnailRenderer;
@property(nonatomic) _Bool hasSimpleVideoThumbnailRenderer; // @dynamic hasSimpleVideoThumbnailRenderer;
@property(retain, nonatomic) YTIMusicCompoundThumbnailRenderer *musicCompoundThumbnailRenderer; // @dynamic musicCompoundThumbnailRenderer;
@property(retain, nonatomic) YTIMusicThumbnailRenderer *musicThumbnailRenderer; // @dynamic musicThumbnailRenderer;
@property(retain, nonatomic) YTISimpleVideoThumbnailRenderer *simpleVideoThumbnailRenderer; // @dynamic simpleVideoThumbnailRenderer;

@end

