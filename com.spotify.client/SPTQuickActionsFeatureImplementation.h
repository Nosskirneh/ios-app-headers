//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQuickActionsFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTQuickActionsController;
@protocol SPTContainerService, SPTRecentlyPlayedService, SPTScannablesService, SPTURIDispatchService;

@interface SPTQuickActionsFeatureImplementation : NSObject <SPTQuickActionsFeature>
{
    id <SPTContainerService> _containerService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTScannablesService> _scannablesService;
    id <SPTURIDispatchService> _URIDispatchService;
    SPTQuickActionsController *_quickActionsController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTQuickActionsController *quickActionsController; // @synthesize quickActionsController=_quickActionsController;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTScannablesService> scannablesService; // @synthesize scannablesService=_scannablesService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideQuickActionsHandler;
- (void)unload;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

