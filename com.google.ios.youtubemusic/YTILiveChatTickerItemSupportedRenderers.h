//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILiveChatTickerPaidMessageItemRenderer, YTILiveChatTickerPaidStickerItemRenderer, YTILiveChatTickerSponsorItemRenderer;

@interface YTILiveChatTickerItemSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLiveChatTickerPaidMessageItemRenderer; // @dynamic hasLiveChatTickerPaidMessageItemRenderer;
@property(nonatomic) _Bool hasLiveChatTickerPaidStickerItemRenderer; // @dynamic hasLiveChatTickerPaidStickerItemRenderer;
@property(nonatomic) _Bool hasLiveChatTickerSponsorItemRenderer; // @dynamic hasLiveChatTickerSponsorItemRenderer;
@property(retain, nonatomic) YTILiveChatTickerPaidMessageItemRenderer *liveChatTickerPaidMessageItemRenderer; // @dynamic liveChatTickerPaidMessageItemRenderer;
@property(retain, nonatomic) YTILiveChatTickerPaidStickerItemRenderer *liveChatTickerPaidStickerItemRenderer; // @dynamic liveChatTickerPaidStickerItemRenderer;
@property(retain, nonatomic) YTILiveChatTickerSponsorItemRenderer *liveChatTickerSponsorItemRenderer; // @dynamic liveChatTickerSponsorItemRenderer;

@end

