//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface NSDictionary (SPTWatchPlatformConnectStateUtility)
+ (id)gaiaDeviceDictionaryWithDeviceId:(id)arg1 name:(id)arg2 type:(id)arg3 active:(_Bool)arg4 restricted:(_Bool)arg5 watchPairedDevice:(_Bool)arg6;
+ (id)gaiaDeviceDictionaryWithLocalDeviceId:(id)arg1 localDeviceName:(id)arg2 active:(_Bool)arg3;
+ (id)gaiaDeviceDictionaryWithDevice:(id)arg1;
+ (id)connectStateDictionaryWithGaiaDevices:(id)arg1 localDeviceId:(id)arg2 localDeviceName:(id)arg3 isPlayingRemotely:(_Bool)arg4;
@end

