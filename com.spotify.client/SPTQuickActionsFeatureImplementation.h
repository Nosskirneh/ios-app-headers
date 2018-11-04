//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTQuickActionsFeature.h"

@class NSString, SPTAllocationContext, SPTQuickActionsController;

@interface SPTQuickActionsFeatureImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTQuickActionsFeature>
{
    id <SPTContainerService> _containerService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTScannablesService> _scannablesService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTURIDispatchService> _URIDispatchService;
    SPTQuickActionsController *_quickActionsController;
    id <SPTFeatureFlagSignal> _freeTierSignal;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierSignal; // @synthesize freeTierSignal=_freeTierSignal;
@property(retain, nonatomic) SPTQuickActionsController *quickActionsController; // @synthesize quickActionsController=_quickActionsController;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTScannablesService> scannablesService; // @synthesize scannablesService=_scannablesService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)dealloc;
- (id)provideQuickActionsHandler;
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

