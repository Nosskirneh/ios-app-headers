//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataSaverService-Protocol.h"

@class NSString, SPTAllocationContext, SPTDataSaverLogger;
@protocol SPTContainerService, SPTCoreService, SPTDataSaverTestManager, SPTFeatureFlagSignal, SPTFeatureFlaggingService, SPTLocalSettings, SPTPreferences, SPTSessionService, SPTSettingsFeature;

@interface SPTDataSaverServiceImplementation : NSObject <SPTDataSaverService>
{
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTCoreService> _coreService;
    id <SPTSessionService> _clientSessionService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTContainerService> _containerService;
    id <SPTLocalSettings> _localSettings;
    id <SPTPreferences> _corePreferences;
    id <SPTFeatureFlagSignal> _dataSaverActivatedSignal;
    id <SPTDataSaverTestManager> _testManager;
    SPTDataSaverLogger *_logger;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTDataSaverLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTDataSaverTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> dataSaverActivatedSignal; // @synthesize dataSaverActivatedSignal=_dataSaverActivatedSignal;
@property(retain, nonatomic) id <SPTPreferences> corePreferences; // @synthesize corePreferences=_corePreferences;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
- (void).cxx_destruct;
- (void)setupInitialSettings:(_Bool)arg1;
- (id)provideDataSaverActivatedSignal;
@property(readonly, nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled;
- (id)provideDataSaverSettingSection:(id)arg1;
- (void)setupDataSaverSettings;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

