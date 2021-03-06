//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMealbarPromoRenderer, YTITooltipRenderer, YTIUnsupportedVersionRenderer;

@interface YTISearchOverlaySupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMealbarPromoRenderer; // @dynamic hasMealbarPromoRenderer;
@property(nonatomic) _Bool hasTooltipRenderer; // @dynamic hasTooltipRenderer;
@property(nonatomic) _Bool hasUnsupportedVersionRenderer; // @dynamic hasUnsupportedVersionRenderer;
@property(retain, nonatomic) YTIMealbarPromoRenderer *mealbarPromoRenderer; // @dynamic mealbarPromoRenderer;
@property(retain, nonatomic) YTITooltipRenderer *tooltipRenderer; // @dynamic tooltipRenderer;
@property(retain, nonatomic) YTIUnsupportedVersionRenderer *unsupportedVersionRenderer; // @dynamic unsupportedVersionRenderer;

@end

