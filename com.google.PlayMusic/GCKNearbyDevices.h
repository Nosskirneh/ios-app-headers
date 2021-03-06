//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GCKNearbyDevices : NSObject
{
    NSMutableDictionary *_devices;
    NSMutableDictionary *_BTIDtoBSSIDMap;
    double _lastWriteTime;
    _Bool _dispatchPending;
    NSString *_currentUnknownDeviceID;
}

+ (void)resetForTest;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)persistCacheImmediately;
- (void)rotateDeviceIDForUnknown;
- (id)getDeviceIDForUnknown;
- (id)environmentScanForDevice:(id)arg1;
- (void)saveToCacheWithInterval;
- (id)getKnownVisibleDevices;
- (id)getKnownDeviceWithBSSID:(id)arg1;
- (void)addKnownDevice:(id)arg1 withDeviceId:(id)arg2 withPIN:(id)arg3 forBSSID:(id)arg4;
- (id)getBSSIDforBTID:(id)arg1;
- (void)mapBSSID:(id)arg1 toBTID:(id)arg2;
- (void)addToken:(id)arg1 expirationTime:(double)arg2 forID:(id)arg3;
- (id)getOrCreateNearbyDevice:(id)arg1;
- (id)init;

@end

