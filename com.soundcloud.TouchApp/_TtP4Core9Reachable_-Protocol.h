//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol _TtP4Core9Reachable_ <NSObject>
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) _Bool reachable;
- (_Bool)stopNotifierAndReturnError:(id *)arg1;
- (_Bool)startNotifierAndReturnError:(id *)arg1;
- (id)observeStateWithObserver:(void (^)(long long))arg1;
- (id)observeReachableWithObserver:(void (^)(_Bool))arg1;
@end
