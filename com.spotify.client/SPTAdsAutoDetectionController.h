//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccessoryStateObserver-Protocol.h"
#import "SPTExternalIntegrationDriverDistractionObserver-Protocol.h"
#import "SPTLegacyFeatureFlagObserver-Protocol.h"

@class NSSet, NSString, SPTAdRulesManager;
@protocol SPTAccessoryStateManager, SPTAdsBaseGlobalSettingsController, SPTExternalIntegrationDriverDistractionController, SPTLegacyFeatureFlag;

@interface SPTAdsAutoDetectionController : NSObject <SPTLegacyFeatureFlagObserver, SPTAccessoryStateObserver, SPTExternalIntegrationDriverDistractionObserver>
{
    id <SPTAdsBaseGlobalSettingsController> _adSettingsController;
    id <SPTLegacyFeatureFlag> _featureFlag;
    SPTAdRulesManager *_adRulesManager;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistraction;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    NSSet *_currentAccessories;
}

@property(retain, nonatomic) NSSet *currentAccessories; // @synthesize currentAccessories=_currentAccessories;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistraction; // @synthesize driverDistraction=_driverDistraction;
@property(retain, nonatomic) SPTAdRulesManager *adRulesManager; // @synthesize adRulesManager=_adRulesManager;
@property(retain, nonatomic) id <SPTLegacyFeatureFlag> featureFlag; // @synthesize featureFlag=_featureFlag;
@property(retain, nonatomic) id <SPTAdsBaseGlobalSettingsController> adSettingsController; // @synthesize adSettingsController=_adSettingsController;
- (void).cxx_destruct;
- (void)featureFlag:(id)arg1 enabledStateDidChange:(_Bool)arg2;
- (void)disableAdSlots:(_Bool)arg1 reason:(id)arg2;
- (void)externalIntegrationDriverDistractionController:(id)arg1 didChangeEnabledState:(_Bool)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidDisconnect:(id)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidConnect:(id)arg2;
- (id)accessoriesContainCar:(id)arg1;
- (id)serializeAccessoryInfo:(id)arg1;
- (void)registerDeviceInfo:(id)arg1;
- (void)dealloc;
- (id)initWithAutoDeviceStateManagerFlag:(id)arg1 adSettingsController:(id)arg2 stateManager:(id)arg3 driverDistraction:(id)arg4 rulesManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

