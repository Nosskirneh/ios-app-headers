//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTAdsBaseGlobalSettingsController <NSObject>
- (void)disableAds:(_Bool)arg1 onSlot:(NSString *)arg2 reason:(NSString *)arg3;
- (void)delete:(NSString *)arg1 path:(NSString *)arg2 shouldRefresh:(_Bool)arg3 completion:(void (^)(_Bool, NSDictionary *))arg4;
- (void)put:(NSString *)arg1 path:(NSString *)arg2 value:(NSString *)arg3 shouldRefresh:(_Bool)arg4 completion:(void (^)(_Bool, NSDictionary *))arg5;
- (void)removeTargetingValueForKey:(NSString *)arg1;
- (void)setTargetingValue:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)setAdProductTargetingEnableMidroll:(_Bool)arg1;
- (void)setDeviceInfo:(NSString *)arg1 shouldRefresh:(_Bool)arg2 completion:(void (^)(_Bool, NSDictionary *))arg3;
- (void)setDeviceTargeting;
- (void)setLimitAdTracking;
- (void)setAppleIDFATargeting;
@end

