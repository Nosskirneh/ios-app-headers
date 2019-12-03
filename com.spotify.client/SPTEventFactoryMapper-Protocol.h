//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTEventFactoryInteractionModelMapping, SPTEventFactoryModelMapping, SPTImpressionEventFactory, SPTInteractionEventFactory;

@protocol SPTEventFactoryMapper <NSObject>
- (id <SPTImpressionEventFactory>)impressionFactoryWithEvent:(id <SPTEventFactoryModelMapping>)arg1;
- (id <SPTInteractionEventFactory>)interactionFactoryWithEvent:(id <SPTEventFactoryInteractionModelMapping>)arg1;
@end
