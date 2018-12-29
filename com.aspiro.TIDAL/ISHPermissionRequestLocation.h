//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISHPermissionRequest.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface ISHPermissionRequestLocation : ISHPermissionRequest <CLLocationManagerDelegate>
{
    _Bool initialChangeAuthorizationStatusCallWasIgnored;
    CLLocationManager *_locationManager;
    CDUnknownBlockType completionBlock;
}

+ (_Bool)grantedWhenInUse;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property(nonatomic) _Bool initialChangeAuthorizationStatusCallWasIgnored; // @synthesize initialChangeAuthorizationStatusCallWasIgnored;
@property(retain, nonatomic) CLLocationManager *_locationManager; // @synthesize _locationManager;
- (void).cxx_destruct;
- (void)UIApplicationDidBecomeActiveNotification:(id)arg1;
- (void)handleCompletionBlock;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (_Bool)useFallback;
- (void)requestUserPermissionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)permissionState;
- (void)dealloc;
- (id)locationManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

