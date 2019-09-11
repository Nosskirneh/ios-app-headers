//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMetaViewControllerObserver-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierTestManagerImplementation, SPTUIModeSwitchManager;
@protocol SPTContainerService, SPTContainerUIService, SPTCrashReporterService, SPTDebugService, SPTFeatureFlagSignal, SPTFeatureFlaggingService, SPTLoginService, SPTServiceManagerService, SPTSessionService, SPTURIDispatchService;

@interface SPTFreeTierServiceImplementation : NSObject <SPTMetaViewControllerObserver>
{
    _Bool _loaded;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTDebugService> _debugService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSessionService> _sessionService;
    id <SPTLoginService> _loginService;
    id <SPTServiceManagerService> _serviceManagerService;
    id <SPTURIDispatchService> _URIDispatchService;
    SPTFreeTierTestManagerImplementation *_testManager;
    id <SPTFeatureFlagSignal> _theNewExperienceEnabledSignal;
    id <SPTFeatureFlagSignal> _premiumTierEnabledSignal;
    long long _theNewExperienceFlagPreviousState;
    SPTUIModeSwitchManager *_modeSwitcher;
}

+ (id)serviceIdentifier;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) SPTUIModeSwitchManager *modeSwitcher; // @synthesize modeSwitcher=_modeSwitcher;
@property(nonatomic) long long theNewExperienceFlagPreviousState; // @synthesize theNewExperienceFlagPreviousState=_theNewExperienceFlagPreviousState;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> premiumTierEnabledSignal; // @synthesize premiumTierEnabledSignal=_premiumTierEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> theNewExperienceEnabledSignal; // @synthesize theNewExperienceEnabledSignal=_theNewExperienceEnabledSignal;
@property(retain, nonatomic) SPTFreeTierTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTServiceManagerService> serviceManagerService; // @synthesize serviceManagerService=_serviceManagerService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideFreeTierTestManager;
- (id)provideNewExperienceEnabledSignal;
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

