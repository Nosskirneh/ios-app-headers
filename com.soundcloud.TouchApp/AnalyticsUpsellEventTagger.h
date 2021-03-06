//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8Features18UpsellEventTagging_-Protocol.h"

@class APAnalyticsController, NSString, UpsellEventFactory;

@interface AnalyticsUpsellEventTagger : NSObject <_TtP8Features18UpsellEventTagging_>
{
    APAnalyticsController *_analyticsController;
    UpsellEventFactory *_eventFactory;
}

@property(readonly, nonatomic) UpsellEventFactory *eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) APAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
- (void).cxx_destruct;
- (void)tagEvent:(id)arg1;
- (void)tagClickEventWithScreen:(long long)arg1 state:(id)arg2 pageUrn:(id)arg3;
- (void)tagClickEventWithScreen:(long long)arg1 state:(id)arg2;
- (void)tagImpressionEventWithScreen:(long long)arg1 state:(id)arg2 pageUrn:(id)arg3;
- (void)tagImpressionEventWithScreen:(long long)arg1 state:(id)arg2;
- (id)initWithAnalyticsController:(id)arg1 eventFactory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

