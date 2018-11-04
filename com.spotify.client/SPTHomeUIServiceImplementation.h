//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHomeUIService.h"

@class NSString, SPTAllocationContext;

@interface SPTHomeUIServiceImplementation : NSObject <SPTHomeUIService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTVideoFeature> _videoService;
    id <SPTDataSaverService> _dataSaverService;
    id <SPTHomeUITestManager> _testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTHomeUITestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTDataSaverService> dataSaverService; // @synthesize dataSaverService=_dataSaverService;
@property(nonatomic) __weak id <SPTVideoFeature> videoService; // @synthesize videoService=_videoService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideHomeComponentLayoutManager;
- (id)provideHomeMockHubContentOperation;
@property(readonly, nonatomic) id <SPTHomeUIComponentFactory> componentFactory;
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
