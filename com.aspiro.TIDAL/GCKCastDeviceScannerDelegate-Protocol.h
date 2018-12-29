//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKCastDeviceScanner, GCKDevice, NSError, NSSet;

@protocol GCKCastDeviceScannerDelegate <NSObject>
- (void)deviceScanner:(GCKCastDeviceScanner *)arg1 didStopWithError:(NSError *)arg2;
- (void)deviceScanner:(GCKCastDeviceScanner *)arg1 didUnpublishDevice:(GCKDevice *)arg2 withReason:(long long)arg3;
- (void)deviceScanner:(GCKCastDeviceScanner *)arg1 didUpdateDevice:(GCKDevice *)arg2 changedAttributes:(_Bool)arg3 addedSubtypes:(NSSet *)arg4 removedSubtypes:(NSSet *)arg5;
- (void)deviceScanner:(GCKCastDeviceScanner *)arg1 didPublishDevice:(GCKDevice *)arg2 withSubtypes:(NSSet *)arg3;

@optional
- (void)deviceScanner:(GCKCastDeviceScanner *)arg1 didReceiveResponse:(NSSet *)arg2 unicast:(_Bool)arg3;
- (void)deviceScanner:(GCKCastDeviceScanner *)arg1 didSendDiscoveryQuery:(NSSet *)arg2 unicastResponse:(_Bool)arg3;
@end

