//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RHReachability;

@interface _TtC7Napster19ReachabilityService : NSObject
{
    // Error parsing type: , name: serverReachability
    // Error parsing type: , name: _isServerReachable
    // Error parsing type: , name: _isReachableViaWiFi
    // Error parsing type: , name: isServerReachableDriver
    // Error parsing type: , name: accountController
    // Error parsing type: , name: notificationCenter
    // Error parsing type: , name: disposeBag
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _Bool isReachableViaWiFi;
@property(nonatomic, readonly) _Bool isServerReachable;
@property(nonatomic, readonly) RHReachability *serverReachability; // @synthesize serverReachability;
@property(nonatomic, readonly) _Bool isServerForciblyReachable;
@property(nonatomic, readonly) _Bool isInForcedOfflineMode;

@end
