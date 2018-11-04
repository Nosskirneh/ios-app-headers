//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DZRReachabilityNetworkStatus;

@protocol DZRReachabilityFacadeProtocol <NSObject>
+ (void)forceNetworkAccessStatusUpdate;
+ (void)setOfflineModeForcedActivated:(_Bool)arg1;
+ (_Bool)isOfflineModeForcedActivated;
+ (void)setNetworkRestricted:(_Bool)arg1;
+ (_Bool)hasNetworkRestriction;
- (void)dispose;
- (void)cancelCallbackForModeChanges:(long long)arg1;
- (void)cancelCallbacks;
- (void)setCallback:(void (^)(long long, _Bool))arg1 forModeChanges:(long long)arg2;
- (void)setCallbackForNetworkAccessChanges:(void (^)(long long, long long))arg1;
- (_Bool)canAccessToNetwork;
- (long long)networkAccessStatus;
- (DZRReachabilityNetworkStatus *)networkStatus;
@end

