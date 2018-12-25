//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface DTReachability : NSObject
{
    NSMutableSet *_observers;
    struct __SCNetworkReachability *_reachability;
    unsigned int _connectionFlags;
    NSString *_hostname;
}

+ (void)removeReachabilityObserver:(id)arg1;
+ (id)addReachabilityObserverWithBlock:(CDUnknownBlockType)arg1;
+ (id)defaultReachability;
- (void).cxx_destruct;
- (void)_notifyObserversWithFlags:(unsigned int)arg1;
- (void)_unregisterNetworkReachability;
- (void)_registerNetworkReachability;
- (void)setHostname:(id)arg1;
- (void)removeReachabilityObserver:(id)arg1;
- (id)addReachabilityObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithHostname:(id)arg1;
- (id)init;

@end

