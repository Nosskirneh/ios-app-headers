//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTEventFactoryModelMapping, SPTInteractionEventFactory;

@protocol SPTEventFactory <NSObject>
- (id <SPTInteractionEventFactory>)factoryWithEvent:(id <SPTEventFactoryModelMapping>)arg1;
@end

