//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOMIDAdEventsPublisher-Protocol.h"
#import "GADOMIDCommandPublisher-Protocol.h"
#import "GADOMIDSessionEventsPublisher-Protocol.h"
#import "GADOMIDVideoEventsPublisher-Protocol.h"

@class NSString;
@protocol GADOMIDJSExecutor;

@interface GADOMIDBridge : NSObject <GADOMIDCommandPublisher, GADOMIDSessionEventsPublisher, GADOMIDAdEventsPublisher, GADOMIDVideoEventsPublisher>
{
    id <GADOMIDJSExecutor> _jsExecutor;
}

@property(readonly, nonatomic) id <GADOMIDJSExecutor> jsExecutor; // @synthesize jsExecutor=_jsExecutor;
- (void).cxx_destruct;
- (id)getStringOwner:(unsigned long long)arg1;
- (id)getStringError:(unsigned long long)arg1;
- (void)publishEventWithName:(id)arg1 parameters:(id)arg2 commandName:(id)arg3;
- (void)publishVideoEventWithName:(id)arg1 parameters:(id)arg2;
- (void)publishImpressionEvent;
- (void)publishFinishEvent;
- (void)publishErrorWithType:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)publishStartEventWithAdSessionId:(id)arg1 JSONContext:(id)arg2 verificationParameters:(id)arg3;
- (void)publishInitWithConfiguration:(id)arg1;
- (void)internal_publishCommand:(id)arg1;
- (void)publishCommand:(id)arg1;
- (id)initWithJSExecutor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
