//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCDAsyncUdpSocketDelegate-Protocol.h"

@class NSArray;

@interface _TtC4WiMP19SonosGroupDiscovery : NSObject <GCDAsyncUdpSocketDelegate>
{
    // Error parsing type: , name: listeners
    // Error parsing type: , name: multicastListeningSocket
    // Error parsing type: , name: multicastMsearchSocket
    // Error parsing type: , name: broadcastMsearchSocket
    // Error parsing type: , name: mSearchMulticastRequestsSent
    // Error parsing type: , name: mSearchBroadcastRequestsSent
    // Error parsing type: , name: discoveredGroupsById
    // Error parsing type: , name: reachability
    // Error parsing type: , name: expirationTimer
    // Error parsing type: , name: volatileTimer
    // Error parsing type: , name: activeSearchTimer
    // Error parsing type: , name: activeSearchInterval
    // Error parsing type: , name: volatileTimeout
    // Error parsing type: , name: started
    // Error parsing type: , name: active
}

+ (id)shared;
- (CDUnknownBlockType).cxx_destruct;
- (void)removeExpiredGroups;
- (void)removeVolatileGroups;
- (void)doActiveSearch;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)reachabilityChanged;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)enableActiveSearch:(_Bool)arg1 startImmediately:(_Bool)arg2;
- (void)stop;
- (void)start;
- (id)init;
@property(nonatomic, readonly) NSArray *discoveredGroups;

@end

