//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class NSArray, NSString, YTICommand;

@interface YTRefreshFeedResponderEvent : YTResponderEvent
{
    NSArray *_formEntries;
    YTICommand *_parentNavEndpoint;
    NSString *_params;
}

+ (id)eventWithFormEntries:(id)arg1 params:(id)arg2 parentNavEndpoint:(id)arg3 firstResponder:(id)arg4;
@property(readonly, nonatomic) NSString *params; // @synthesize params=_params;
@property(readonly, nonatomic) YTICommand *parentNavEndpoint; // @synthesize parentNavEndpoint=_parentNavEndpoint;
@property(readonly, nonatomic) NSArray *formEntries; // @synthesize formEntries=_formEntries;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 formEntries:(id)arg2 parentNavEndpoint:(id)arg3 params:(id)arg4;

@end

