//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIDefaultPromoPanelRenderer, YTIInterstitialPromoRenderer;

@interface YTICarouselItemSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDefaultPromoPanelRenderer *defaultPromoPanelRenderer; // @dynamic defaultPromoPanelRenderer;
@property(nonatomic) _Bool hasDefaultPromoPanelRenderer; // @dynamic hasDefaultPromoPanelRenderer;
@property(nonatomic) _Bool hasInterstitialPromoRenderer; // @dynamic hasInterstitialPromoRenderer;
@property(retain, nonatomic) YTIInterstitialPromoRenderer *interstitialPromoRenderer; // @dynamic interstitialPromoRenderer;

@end
