//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface DZRReachabilityFacade : NSObject
{
    long long _currentAccessStatus;
    NSMutableDictionary *_callbacksByReachabilityModeChanges;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)debug_isConnectedToInternet;
+ (void)forceNetworkAccessStatusUpdate;
+ (void)setOfflineModeForcedActivated:(_Bool)arg1;
+ (_Bool)isOfflineModeForcedActivated;
+ (void)setNetworkRestricted:(_Bool)arg1;
+ (_Bool)hasNetworkRestriction;
+ (id)sharedReachability;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *callbacksByReachabilityModeChanges; // @synthesize callbacksByReachabilityModeChanges=_callbacksByReachabilityModeChanges;
@property(nonatomic) long long currentAccessStatus; // @synthesize currentAccessStatus=_currentAccessStatus;
- (void).cxx_destruct;
- (id)debug_canAccessToNetwork;
- (void)_sendCallbackForModeChanges:(long long)arg1 withNewModeValue:(_Bool)arg2;
- (void)_sendCallbackForNetworkAccessStatusChangedFromStatus:(long long)arg1 toStatus:(long long)arg2;
- (void)dispose;
- (void)cancelCallbackForModeChanges:(long long)arg1;
- (void)cancelCallbacks;
- (void)setCallback:(CDUnknownBlockType)arg1 forModeChanges:(long long)arg2;
- (void)setCallbackForNetworkAccessChanges:(CDUnknownBlockType)arg1;
- (_Bool)canAccessToNetwork;
- (id)mobileCarrierName;
- (id)mobileNetworkTechnology;
- (long long)networkAccessStatus;
- (id)networkStatus;
- (void)networkRestrictionChanged:(id)arg1;
- (void)offlineForcedChanged:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)loggingMobileNetworkTypeForTechnology:(id)arg1;
- (id)loggingNetworkTypeForNetworkStatus:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
