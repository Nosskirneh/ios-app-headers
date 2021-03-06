//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCKCastDeviceControllerDelegate-Protocol.h"

@class GCKCastDeviceController, GCKError, NSMutableArray, NSString;
@protocol GCKDeviceFilterDelegate;

@interface GCKDeviceFilter : NSObject <GCKCastDeviceControllerDelegate>
{
    GCKCastDeviceController *_deviceController;
    NSString *_applicationID;
    NSMutableArray *_namespaces;
    long long _filterSessionID;
    _Bool _deviceChanged;
    _Bool _appAvailable;
    _Bool _cancelled;
    _Bool _filterMatched;
    GCKError *_filterError;
    _Bool _filterFinished;
    _Bool _deviceConfigurationReceived;
    _Bool _deviceInformationReceived;
    _Bool _deviceIDChanged;
    int _filterID;
    _Bool _active;
    id <GCKDeviceFilterDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKDeviceFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (_Bool)supportsDiscoveryChannel:(id)arg1;
- (_Bool)shouldDisconnect;
- (id)buildStatusTextForDevice:(id)arg1 runningApplication:(id)arg2 applicationStatusText:(id)arg3;
- (void)deviceController:(id)arg1 didReceiveDeviceInformation:(id)arg2;
- (void)deviceController:(id)arg1 didReceiveDeviceConfiguration:(id)arg2;
- (void)deviceController:(id)arg1 didReceiveAppAvailability:(id)arg2;
- (void)deviceController:(id)arg1 request:(long long)arg2 didFailWithError:(id)arg3;
- (void)deviceControllerDidUpdateStatus:(id)arg1;
- (void)deviceController:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)deviceController:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)deviceControllerDidConnect:(id)arg1;
- (void)notifyFilteringFailedForDevice:(id)arg1 withError:(id)arg2;
- (void)notifyFilteringFinishedForDevice:(id)arg1 withResult:(_Bool)arg2 deviceChanged:(_Bool)arg3 deviceIDChanged:(_Bool)arg4;
- (id)buildDeviceControllerForDevice:(id)arg1 clientPackageName:(id)arg2 ignoreAppStateNotifications:(_Bool)arg3 reconnectStrategy:(id)arg4;
- (void)stop;
- (void)filterDevice:(id)arg1 forApplicationID:(id)arg2 namespaces:(id)arg3;
- (id)initWithDelegate:(id)arg1 filterID:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

