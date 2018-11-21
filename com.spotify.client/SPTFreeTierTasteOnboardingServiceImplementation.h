//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTFreeTierTasteOnboardingService-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierTasteOnboardingCurator, SPTFreeTierTasteOnboardingFlowCoordinator, SPTFreeTierTasteOnboardingOfflineStateAggregateManager, SPTFreeTierTasteOnboardingTestManagerImplementation;
@protocol FollowFeature, SPTAudioPreviewService, SPTCollectionPlatformService, SPTContainerService, SPTFeatureFlagSignal, SPTFeatureFlaggingService, SPTFreeTierService, SPTGLUEService, SPTLoginService, SPTNetworkService, SPTSessionService, SPTSettingsFeature, SPTUIPresentationService, SPTURIDispatchService;

@interface SPTFreeTierTasteOnboardingServiceImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTFreeTierTasteOnboardingService, SPTURISubtypeHandler>
{
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFreeTierService> _freeTierService;
    id <FollowFeature> _followService;
    id <SPTGLUEService> _glueService;
    id <SPTLoginService> _loginService;
    id <SPTNetworkService> _networkService;
    id <SPTSettingsFeature> _settings;
    id <SPTUIPresentationService> _uiPresentationService;
    id <SPTURIDispatchService> _uriDispatchService;
    SPTFreeTierTasteOnboardingCurator *_curator;
    SPTFreeTierTasteOnboardingOfflineStateAggregateManager *_offlineStateAggregateManager;
    SPTFreeTierTasteOnboardingFlowCoordinator *_flowCoordinator;
    SPTFreeTierTasteOnboardingTestManagerImplementation *_testManager;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTFeatureFlagSignal> _onboardingIPadEnabledFlagSignal;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> onboardingIPadEnabledFlagSignal; // @synthesize onboardingIPadEnabledFlagSignal=_onboardingIPadEnabledFlagSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingFlowCoordinator *flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingOfflineStateAggregateManager *offlineStateAggregateManager; // @synthesize offlineStateAggregateManager=_offlineStateAggregateManager;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingCurator *curator; // @synthesize curator=_curator;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTUIPresentationService> uiPresentationService; // @synthesize uiPresentationService=_uiPresentationService;
@property(nonatomic) __weak id <SPTSettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <FollowFeature> followService; // @synthesize followService=_followService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)unregisterLinkHandler;
- (void)registerLinkHandler;
- (unsigned long long)tasteOnboardingFlowCoordinatorStateForURI:(id)arg1;
- (void)initializeFlowCoordinator;
- (void)initializeOfflineStateAggregateManager;
- (void)initializeCurator;
- (void)setupTestManager;
- (id)provideCoordinator;
- (id)provideCurator;
- (_Bool)isMinimumTasteGatheringCompleted;
@property(readonly, nonatomic, getter=isOnboardingCoordinationEnabled) _Bool onboardingCoordinationEnabled;
- (void)disableFreeTierTasteOnboardingService;
- (void)enableFreeTierTasteOnboardingService;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

