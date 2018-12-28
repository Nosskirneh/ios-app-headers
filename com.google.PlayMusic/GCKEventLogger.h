//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKClearcutLogger, NSString;

__attribute__((visibility("hidden")))
@interface GCKEventLogger : NSObject
{
    GCKClearcutLogger *_clearcutLogger;
    NSString *_pseudonymousID;
}

+ (long long)hashDeviceID:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)translateApplicationConnectionError:(long long)arg1;
- (int)translateDeviceConnectionError:(long long)arg1;
- (int)encodeApplicationID:(id)arg1;
- (id)convertToSubtypes:(id)arg1;
- (void)logAdaptiveDiscoveryResult:(id)arg1 withExpectedSubtypes:(id)arg2 receivedSubtypes:(id)arg3;
- (void)logEvent:(id)arg1 forAction:(int)arg2;
- (void)logDeviceController:(long long)arg1 sessionID:(long long)arg2 application:(id)arg3 disconnectedWithError:(long long)arg4;
- (void)logDeviceController:(long long)arg1 sessionID:(long long)arg2 applicationConnected:(id)arg3;
- (void)logDeviceController:(long long)arg1 sessionID:(long long)arg2 application:(id)arg3 connectionFailedWithError:(long long)arg4;
- (void)logDeviceController:(long long)arg1 sessionID:(long long)arg2 joiningApplication:(id)arg3 existingSession:(_Bool)arg4;
- (void)logDeviceController:(long long)arg1 sessionID:(long long)arg2 launchingApplication:(id)arg3 relaunchIfRunning:(_Bool)arg4;
- (void)logDeviceController:(long long)arg1 sessionID:(long long)arg2 disconnectedWithError:(long long)arg3 explicit:(_Bool)arg4;
- (void)logDeviceController:(long long)arg1 sessionID:(long long)arg2 connectionFailedWithError:(long long)arg3;
- (void)logDeviceControllerConnected:(long long)arg1 sessionID:(long long)arg2;
- (void)logDeviceControllerConnecting:(long long)arg1 sessionID:(long long)arg2;
- (void)logFilterFailedForDevice:(long long)arg1 sessionID:(long long)arg2 filterID:(int)arg3 withError:(long long)arg4;
- (void)logFilterFinishedForDevice:(long long)arg1 sessionID:(long long)arg2 filterID:(int)arg3 matchedApplicationIDs:(id)arg4 unmatchedApplicationIDs:(id)arg5 matchedNamespaces:(id)arg6 unmatchedNamespaces:(id)arg7;
- (void)logFilterReceivedStatusForDevice:(long long)arg1 sessionID:(long long)arg2 filterID:(int)arg3;
- (void)logFilterRequestedStatusForDevice:(long long)arg1 sessionID:(long long)arg2 filterID:(int)arg3;
- (void)logFilterReceivedAppAvailabilityForDevice:(long long)arg1 sessionID:(long long)arg2 filterID:(int)arg3;
- (void)logFilterRequestedAppAvailabilityForDevice:(long long)arg1 sessionID:(long long)arg2 filterID:(int)arg3;
- (void)logFilterConnectionFailedToDevice:(long long)arg1 sessionID:(long long)arg2 filterID:(int)arg3 withError:(long long)arg4;
- (void)logFilterConnectedToDevice:(long long)arg1 sessionID:(long long)arg2 filterID:(int)arg3;
- (void)logFilterConnectingToDevice:(long long)arg1 sessionID:(long long)arg2 filterID:(int)arg3;
- (void)logSlowMdnsResponse:(long long)arg1 withType:(int)arg2 expectedSubtypes:(id)arg3 receivedSubtypes:(id)arg4 deviceModelName:(id)arg5 latency:(double)arg6;
- (void)logAdaptiveDiscoveryFailedToDevice:(long long)arg1 withReason:(int)arg2 error:(long long)arg3 expectedSubtypes:(id)arg4 receivedSubtypes:(id)arg5 deviceModelName:(id)arg6;
- (void)logAdaptiveDiscoverySuccess:(long long)arg1 withReason:(int)arg2 isSameDevice:(_Bool)arg3 expectedSubtypes:(id)arg4 receivedSubtypes:(id)arg5 deviceModelName:(id)arg6;
- (void)logMdnsSubtypeFilteringEvent:(long long)arg1 subtype:(id)arg2 isPositiveFilteringResult:(_Bool)arg3 wasSubtypePreviouslyDiscovered:(_Bool)arg4 deviceCapabilities:(int)arg5 deviceModelName:(id)arg6 latency:(double)arg7;
- (void)logMdnsSubtypeFilteringEvent:(long long)arg1 subtype:(id)arg2 isPositiveFilteringResult:(_Bool)arg3 wasSubtypePreviouslyDiscovered:(_Bool)arg4 deviceCapabilities:(int)arg5 deviceModelName:(id)arg6;
- (void)logDeviceDiscovered:(long long)arg1;
- (void)resetPseudonymousID;
- (id)init;

@end

