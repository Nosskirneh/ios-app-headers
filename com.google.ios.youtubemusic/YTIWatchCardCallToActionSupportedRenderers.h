//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIWatchCardCollageRenderer, YTIWatchCardHeroOneVsOneEventRenderer, YTIWatchCardHeroVideoRenderer, YTIWatchCardSingleImageRenderer;

@interface YTIWatchCardCallToActionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasWatchCardCollageRenderer; // @dynamic hasWatchCardCollageRenderer;
@property(nonatomic) _Bool hasWatchCardHeroOneVsOneEventRenderer; // @dynamic hasWatchCardHeroOneVsOneEventRenderer;
@property(nonatomic) _Bool hasWatchCardHeroVideoRenderer; // @dynamic hasWatchCardHeroVideoRenderer;
@property(nonatomic) _Bool hasWatchCardSingleImageRenderer; // @dynamic hasWatchCardSingleImageRenderer;
@property(retain, nonatomic) YTIWatchCardCollageRenderer *watchCardCollageRenderer; // @dynamic watchCardCollageRenderer;
@property(retain, nonatomic) YTIWatchCardHeroOneVsOneEventRenderer *watchCardHeroOneVsOneEventRenderer; // @dynamic watchCardHeroOneVsOneEventRenderer;
@property(retain, nonatomic) YTIWatchCardHeroVideoRenderer *watchCardHeroVideoRenderer; // @dynamic watchCardHeroVideoRenderer;
@property(retain, nonatomic) YTIWatchCardSingleImageRenderer *watchCardSingleImageRenderer; // @dynamic watchCardSingleImageRenderer;

@end

