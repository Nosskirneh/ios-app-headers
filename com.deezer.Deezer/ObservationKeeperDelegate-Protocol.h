//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString, ObservationKeeper;

@protocol ObservationKeeperDelegate <NSObject>
- (void)observationKeeper:(ObservationKeeper *)arg1 didObserveChange:(NSDictionary *)arg2 ofValueWithKeyPath:(NSString *)arg3 forObject:(NSObject *)arg4;
@end

