//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTIFlexibleScrollPromoRenderer;

@interface YTFlexibleScrollPromoResponderEvent : YTResponderEvent
{
    YTIFlexibleScrollPromoRenderer *_renderer;
}

+ (id)eventWithFlexibleScrollPromoRenderer:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) YTIFlexibleScrollPromoRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (id)initWithFlexibleScrollPromoRenderer:(id)arg1 firstResponder:(id)arg2;

@end

