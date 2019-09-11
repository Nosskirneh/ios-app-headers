//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMobileMediaKitService-Protocol.h"

@class NSString, SPTAllocationContext, SPTDataLoader, SPTMobileMediaKitAPKeepAliveHandler, SPTMobileMediaKitClientCommunicationsManager;
@protocol GaiaFeature, SPTAccessoryManagerService, SPTContainerService, SPTCoreService, SPTExternalIntegrationCollectionService, SPTExternalIntegrationDebugLogService, SPTExternalIntegrationPlaybackService, SPTFeatureFlagSignal, SPTFeatureFlaggingService;

@interface SPTMobileMediaKitServiceImplementation : NSObject <SPTMobileMediaKitService>
{
    _Bool _featureEnabled;
    id <SPTContainerService> _containerService;
    id <SPTExternalIntegrationPlaybackService> _externalIntegrationPlaybackService;
    id <SPTExternalIntegrationCollectionService> _externalIntegrationCollectionService;
    id <SPTExternalIntegrationDebugLogService> _externalIntegrationDebugLogService;
    id <GaiaFeature> _gaiaFeature;
    id <SPTCoreService> _coreService;
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    SPTDataLoader *_dataLoader;
    id <SPTFeatureFlagSignal> _featureEnabledSignal;
    SPTMobileMediaKitClientCommunicationsManager *_communicationManager;
    SPTMobileMediaKitAPKeepAliveHandler *_keepAliveHandler;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTMobileMediaKitAPKeepAliveHandler *keepAliveHandler; // @synthesize keepAliveHandler=_keepAliveHandler;
@property(retain, nonatomic) SPTMobileMediaKitClientCommunicationsManager *communicationManager; // @synthesize communicationManager=_communicationManager;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> featureEnabledSignal; // @synthesize featureEnabledSignal=_featureEnabledSignal;
@property(nonatomic, getter=isFeatureEnabled) _Bool featureEnabled; // @synthesize featureEnabled=_featureEnabled;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTExternalIntegrationDebugLogService> externalIntegrationDebugLogService; // @synthesize externalIntegrationDebugLogService=_externalIntegrationDebugLogService;
@property(nonatomic) __weak id <SPTExternalIntegrationCollectionService> externalIntegrationCollectionService; // @synthesize externalIntegrationCollectionService=_externalIntegrationCollectionService;
@property(nonatomic) __weak id <SPTExternalIntegrationPlaybackService> externalIntegrationPlaybackService; // @synthesize externalIntegrationPlaybackService=_externalIntegrationPlaybackService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)disable;
- (void)enable;
- (void)unload;
- (void)setupKeepAliveHandler;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

