//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTIVideoQualityPromoRenderer;

@interface YTVideoQualityPromoResponderEvent : YTResponderEvent
{
    YTIVideoQualityPromoRenderer *_promoRenderer;
}

+ (id)eventWithPromoRenderer:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) YTIVideoQualityPromoRenderer *promoRenderer; // @synthesize promoRenderer=_promoRenderer;
- (void).cxx_destruct;
- (id)initWithPromoRenderer:(id)arg1 firstResponder:(id)arg2;

@end

