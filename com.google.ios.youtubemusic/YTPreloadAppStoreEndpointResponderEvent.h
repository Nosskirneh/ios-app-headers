//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTICommand;

@interface YTPreloadAppStoreEndpointResponderEvent : YTResponderEvent
{
    YTICommand *_navigationEndpoint;
}

+ (id)eventWithCommand:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
- (void).cxx_destruct;
- (id)initWithNavigationEndpoint:(id)arg1 firstResponder:(id)arg2;

@end

