//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeUIService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTFeatureFlaggingService, SPTGLUEService, SPTHomeUIComponentFactory, SPTHomeUITestManager, SPTHubFrameworkService, SPTPlayerFeature, SPTSessionService, SPTSettingsFeature;

@interface SPTHomeUIServiceImplementation : NSObject <SPTHomeUIService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTSessionService> _sessionService;
    id <SPTHomeUITestManager> _testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTHomeUITestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideHomeComponentLayoutManager;
- (id)provideHomePromoV2MockHubContentOperation;
- (id)provideHomeMockHubContentOperation;
@property(readonly, nonatomic) id <SPTHomeUIComponentFactory> componentFactory;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

