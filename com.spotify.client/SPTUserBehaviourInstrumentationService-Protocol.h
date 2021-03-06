//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTEventFactory, SPTUserBehaviourInstrumentationHubsEventMapper, SPTUserBehaviourInstrumentationLogger;

@protocol SPTUserBehaviourInstrumentationService <SPTService>
- (id <SPTUserBehaviourInstrumentationHubsEventMapper>)provideHubsEventMapper;
- (id <SPTEventFactory>)provideEventFactory;
- (id <SPTUserBehaviourInstrumentationLogger>)provideUBILogger;
@end

