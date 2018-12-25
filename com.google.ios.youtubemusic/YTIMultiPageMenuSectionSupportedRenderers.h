//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAccountSectionListRenderer, YTIBackgroundPromoRenderer, YTIItemSectionRenderer, YTIMultiPageMenuNotificationSectionRenderer, YTIMultiPageMenuSectionRenderer;

@interface YTIMultiPageMenuSectionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccountSectionListRenderer *accountSectionListRenderer; // @dynamic accountSectionListRenderer;
@property(retain, nonatomic) YTIBackgroundPromoRenderer *backgroundPromoRenderer; // @dynamic backgroundPromoRenderer;
@property(nonatomic) _Bool hasAccountSectionListRenderer; // @dynamic hasAccountSectionListRenderer;
@property(nonatomic) _Bool hasBackgroundPromoRenderer; // @dynamic hasBackgroundPromoRenderer;
@property(nonatomic) _Bool hasItemSectionRenderer; // @dynamic hasItemSectionRenderer;
@property(nonatomic) _Bool hasMultiPageMenuNotificationSectionRenderer; // @dynamic hasMultiPageMenuNotificationSectionRenderer;
@property(nonatomic) _Bool hasMultiPageMenuSectionRenderer; // @dynamic hasMultiPageMenuSectionRenderer;
@property(retain, nonatomic) YTIItemSectionRenderer *itemSectionRenderer; // @dynamic itemSectionRenderer;
@property(retain, nonatomic) YTIMultiPageMenuNotificationSectionRenderer *multiPageMenuNotificationSectionRenderer; // @dynamic multiPageMenuNotificationSectionRenderer;
@property(retain, nonatomic) YTIMultiPageMenuSectionRenderer *multiPageMenuSectionRenderer; // @dynamic multiPageMenuSectionRenderer;

@end
