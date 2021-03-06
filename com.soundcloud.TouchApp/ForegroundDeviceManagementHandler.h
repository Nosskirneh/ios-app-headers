//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DeviceManagementHandler-Protocol.h"

@class AlertHandler, AlertHandlerFactory, NSString, SCDeviceManager;
@protocol _TtP4Core9Reachable_;

@interface ForegroundDeviceManagementHandler : NSObject <DeviceManagementHandler>
{
    SCDeviceManager *_deviceManager;
    AlertHandler *_foregroundActiveDeviceLimitHandler;
    AlertHandler *_foregroundTotalDeviceLimitHandler;
    AlertHandler *_offlineExpiredAlertHandler;
    AlertHandlerFactory *_alertHandlerFactory;
    id <_TtP4Core9Reachable_> _reachability;
    AlertHandler *_offlineThresholdAlertHandler;
    long long _offlineSyncWarningThreshold;
    long long _offlineSyncExpiredThreshold;
}

@property(nonatomic) long long offlineSyncExpiredThreshold; // @synthesize offlineSyncExpiredThreshold=_offlineSyncExpiredThreshold;
@property(nonatomic) long long offlineSyncWarningThreshold; // @synthesize offlineSyncWarningThreshold=_offlineSyncWarningThreshold;
@property(retain, nonatomic) AlertHandler *offlineThresholdAlertHandler; // @synthesize offlineThresholdAlertHandler=_offlineThresholdAlertHandler;
@property(readonly, nonatomic) id <_TtP4Core9Reachable_> reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) AlertHandlerFactory *alertHandlerFactory; // @synthesize alertHandlerFactory=_alertHandlerFactory;
@property(readonly, nonatomic) AlertHandler *offlineExpiredAlertHandler; // @synthesize offlineExpiredAlertHandler=_offlineExpiredAlertHandler;
@property(readonly, nonatomic) AlertHandler *foregroundTotalDeviceLimitHandler; // @synthesize foregroundTotalDeviceLimitHandler=_foregroundTotalDeviceLimitHandler;
@property(readonly, nonatomic) AlertHandler *foregroundActiveDeviceLimitHandler; // @synthesize foregroundActiveDeviceLimitHandler=_foregroundActiveDeviceLimitHandler;
@property(readonly, nonatomic) SCDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
- (void).cxx_destruct;
- (long long)daysLeft;
- (_Bool)offlineSyncSubscriptionHasExpired;
- (id)offlineSyncStatusSignalInViewController:(id)arg1;
- (id)checkTimeDeviceWasOffline:(id)arg1;
- (id)checkDeviceAuthorization:(id)arg1;
- (id)preCheckOnlineStatusOfDevice:(id)arg1;
- (id)initWithDeviceManager:(id)arg1 alertHandlerFactory:(id)arg2 foregroundActiveDeviceLimitHandler:(id)arg3 foregroundTotalDeviceLimitHandler:(id)arg4 offlineExpiredAlertHandler:(id)arg5 offlineSyncWarningThreshold:(long long)arg6 offlineSyncExpiredThreshold:(long long)arg7 reachability:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

