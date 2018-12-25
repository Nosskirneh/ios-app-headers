//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GCKNNetworkReachability : NSObject
{
    unsigned int _latestFlags;
    NSString *_previousBSSID;
    NSString *_previousSSID;
    _Bool _enabled;
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _monitoring;
    long long _currentStatus;
    NSString *_currentWiFiBSSID;
    NSString *_currentWiFiSSID;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *currentWiFiSSID; // @synthesize currentWiFiSSID=_currentWiFiSSID;
@property(copy, nonatomic) NSString *currentWiFiBSSID; // @synthesize currentWiFiBSSID=_currentWiFiBSSID;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
- (void).cxx_destruct;
- (void)unregisterForAppStateNotifications;
- (void)registerForAppStateNotifications;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)sendNotificationWithNetworkChanged:(_Bool)arg1;
- (void)getCurrentWiFiBSSID:(id *)arg1 SSID:(id *)arg2;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)updateReachabilityState;
- (void)updateBSSID;
- (void)updateFlags:(unsigned int)arg1;
- (void)stopMonitoring;
- (_Bool)startMonitoring;
- (_Bool)isEnabled;
- (void)dealloc;
- (id)init;

@end

