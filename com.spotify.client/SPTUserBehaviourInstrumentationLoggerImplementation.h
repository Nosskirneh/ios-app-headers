//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUserBehaviourInstrumentationLogger-Protocol.h"

@class NSString;
@protocol SPTEventSender;

@interface SPTUserBehaviourInstrumentationLoggerImplementation : NSObject <SPTUserBehaviourInstrumentationLogger>
{
    id <SPTEventSender> _eventSender;
    CDUnknownBlockType _errorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) __weak id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void).cxx_destruct;
- (void)addPathToEvent:(id)arg1 fromComponents:(id)arg2;
- (void)addActionParametersToEvent:(id)arg1 fromInteraction:(id)arg2;
- (id)addDataToMessage:(id)arg1 fromImpression:(id)arg2;
- (id)logNonAuthenticatedImpression:(id)arg1;
- (id)logImpression:(id)arg1;
- (id)addDataToMessage:(id)arg1 fromInteraction:(id)arg2;
- (id)logNonAuthenticatedInteraction:(id)arg1;
- (id)logInteraction:(id)arg1;
- (id)initWithEventSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

