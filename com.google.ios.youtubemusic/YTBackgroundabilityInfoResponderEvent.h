//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTIBackgroundabilityRenderer;

@interface YTBackgroundabilityInfoResponderEvent : YTResponderEvent
{
    YTIBackgroundabilityRenderer *_backgroundabilityRenderer;
}

+ (id)eventWithBackgroundabilityRenderer:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) YTIBackgroundabilityRenderer *backgroundabilityRenderer; // @synthesize backgroundabilityRenderer=_backgroundabilityRenderer;
- (void).cxx_destruct;
- (id)initWithBackgroundabilityRenderer:(id)arg1 firstResponder:(id)arg2;

@end

