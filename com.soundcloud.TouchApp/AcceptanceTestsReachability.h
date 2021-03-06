//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP4Core9Reachable_-Protocol.h"

@class NSString;

@interface AcceptanceTestsReachability : NSObject <_TtP4Core9Reachable_>
{
}

+ (void)load;
+ (id)sharedInstance;
- (void)updateReachabilityState:(long long)arg1;
@property(nonatomic) _Bool reachable;
@property(nonatomic) long long state;
- (_Bool)stopNotifierAndReturnError:(id *)arg1;
- (_Bool)startNotifierAndReturnError:(id *)arg1;
- (id)observeStateWithObserver:(CDUnknownBlockType)arg1;
- (id)observeReachableWithObserver:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

