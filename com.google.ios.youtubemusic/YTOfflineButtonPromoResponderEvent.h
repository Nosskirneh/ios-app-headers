//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTICommand, YTIOfflinePromoRenderer;

@interface YTOfflineButtonPromoResponderEvent : YTResponderEvent
{
    YTIOfflinePromoRenderer *_renderer;
    YTICommand *_endpoint;
}

+ (id)eventWithRenderer:(id)arg1 endpoint:(id)arg2 firstResponder:(id)arg3;
@property(readonly, nonatomic) YTICommand *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) YTIOfflinePromoRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (id)initWithRenderer:(id)arg1 endpoint:(id)arg2 firstResponder:(id)arg3;

@end

