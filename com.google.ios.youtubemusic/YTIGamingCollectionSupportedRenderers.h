//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIBoxChannelRenderer, YTIBoxGameRenderer, YTICompactBoxGameRenderer;

@interface YTIGamingCollectionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBoxChannelRenderer *boxChannelRenderer; // @dynamic boxChannelRenderer;
@property(retain, nonatomic) YTIBoxGameRenderer *boxGameRenderer; // @dynamic boxGameRenderer;
@property(retain, nonatomic) YTICompactBoxGameRenderer *compactBoxGameRenderer; // @dynamic compactBoxGameRenderer;
@property(nonatomic) _Bool hasBoxChannelRenderer; // @dynamic hasBoxChannelRenderer;
@property(nonatomic) _Bool hasBoxGameRenderer; // @dynamic hasBoxGameRenderer;
@property(nonatomic) _Bool hasCompactBoxGameRenderer; // @dynamic hasCompactBoxGameRenderer;

@end
