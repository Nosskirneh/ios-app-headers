//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SASMediationUtils : NSObject
{
}

+ (void)updateAvailableNativeMediationSDKs;
+ (id)availableNativeMediationSDKs;
+ (id)supportedNativeMediationSDKs;
+ (void)updateAvailableMediationSDKs;
+ (id)availableMediationSDKs;
+ (void)unregisterMediationSDK:(long long)arg1;
+ (void)registerMediationSDK:(long long)arg1 signatureClassName:(id)arg2 adapterClassName:(id)arg3;
+ (id)supportedMediationSDKs;
+ (id)mediationSDKNativeAdapterClassNameForSDK:(long long)arg1;
+ (id)mediationSDKAdapterClassNameForSDK:(long long)arg1;
+ (_Bool)isThirdPartySDKAvailable:(long long)arg1;
+ (_Bool)isClassAvailable:(id)arg1;
+ (void)_testsTearDown;

@end

