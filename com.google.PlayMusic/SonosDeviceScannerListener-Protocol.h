//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SSDPDevice;

@protocol SonosDeviceScannerListener <NSObject>

@optional
- (void)deviceDidGoOffline:(SSDPDevice *)arg1;
- (void)deviceDidComeOnline:(SSDPDevice *)arg1;
- (void)scanStopped;
- (void)scanStarted;
@end

