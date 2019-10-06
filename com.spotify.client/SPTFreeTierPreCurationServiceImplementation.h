//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTAllocationContext, SPTFreeTierPreCurationTestManagerImplementation, SPTFreeTierPreCurationTheme;
@protocol SPTCollectionPlatformService, SPTFeatureFlaggingService, SPTFreeTierPreCurationUIFactory, SPTFreeTierService, SPTGLUEService;

@interface SPTFreeTierPreCurationServiceImplementation : NSObject
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTGLUEService> _glueService;
    SPTFreeTierPreCurationTestManagerImplementation *_testManager;
    SPTFreeTierPreCurationTheme *_theme;
    id <SPTFreeTierPreCurationUIFactory> _uiFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFreeTierPreCurationUIFactory> uiFactory; // @synthesize uiFactory=_uiFactory;
@property(retain, nonatomic) SPTFreeTierPreCurationTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTFreeTierPreCurationTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (void).cxx_destruct;
- (id)provideUIFactory;
- (id)provideTheme;
- (id)provideTestManager;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

