//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDA4AProxyInfo, IDMessagingService, IDVehicleInfo, IDVersionInfo, NSDictionary, NSString, NSURL;

@protocol IDAccessoryMonitor <NSObject>
@property(readonly) _Bool supportsA4AMultisession;
@property(readonly) _Bool supportsA4AConnectionInBackground;
@property(readonly, nonatomic) IDVersionInfo *etchVersion;
@property(readonly, nonatomic) IDVersionInfo *cdsVersion;
@property(readonly, nonatomic) IDVehicleInfo *vehicleInfo;
@property(readonly, nonatomic) IDMessagingService *messagingService;
- (IDA4AProxyInfo *)proxyInfo;
- (NSURL *)communicationURL;
- (void)deregisterApplication:(NSString *)arg1;
- (void)registerNonStickyApplication:(NSString *)arg1;
- (void)registerStickyApplication:(NSString *)arg1;
- (void)launchApplication:(NSString *)arg1;
- (void)stopMonitoring;
- (void)startMonitoringWithManifest:(NSDictionary *)arg1;
- (void)startMonitoring;
- (id)init;
@end
