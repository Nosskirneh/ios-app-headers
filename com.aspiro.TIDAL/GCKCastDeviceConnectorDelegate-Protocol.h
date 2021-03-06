//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKCastDeviceConnector, GCKDevice, NSError;

@protocol GCKCastDeviceConnectorDelegate <NSObject>

@optional
- (void)deviceConnector:(GCKCastDeviceConnector *)arg1 didPairWithGuestModeDevice:(GCKDevice *)arg2;
- (void)deviceConnectorDidDisconnectOnAppBackgrounded:(GCKCastDeviceConnector *)arg1;
- (void)deviceConnector:(GCKCastDeviceConnector *)arg1 didDisconnectWithError:(NSError *)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceConnectorDidDisconnect:(GCKCastDeviceConnector *)arg1;
- (void)deviceConnector:(GCKCastDeviceConnector *)arg1 didFailToConnectWithError:(NSError *)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceConnectorDidConnect:(GCKCastDeviceConnector *)arg1;
- (void)deviceConnectorWillConnect:(GCKCastDeviceConnector *)arg1;
@end

