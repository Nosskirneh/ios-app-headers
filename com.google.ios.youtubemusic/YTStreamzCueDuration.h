//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTStreamzCueDuration-Protocol.h"

@class GSZEventMetric, NSString;
@protocol GSZStreamzService;

@interface YTStreamzCueDuration : NSObject <YTStreamzCueDuration>
{
    id <GSZStreamzService> _streamzService;
    GSZEventMetric *_eventMetric;
}

- (void).cxx_destruct;
- (void)recordDouble:(double)arg1 withCueDurationState:(id)arg2 isForcedReturn:(_Bool)arg3;
- (id)initWithStreamzService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
