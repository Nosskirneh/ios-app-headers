//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTICommand;

@interface YTMOpenSidePanelResponderEvent : YTResponderEvent
{
    YTICommand *_currentNavigationEndpoint;
}

+ (id)eventWithFirstResponder:(id)arg1 currentNavigationEndpoint:(id)arg2;
@property(readonly, nonatomic) YTICommand *currentNavigationEndpoint; // @synthesize currentNavigationEndpoint=_currentNavigationEndpoint;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 currentNavigationEndpoint:(id)arg2;

@end

