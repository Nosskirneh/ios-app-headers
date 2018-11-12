//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierPreCurationDialogController;
@protocol CosmosFeature, SPTContainerService, SPTCosmosDataLoaderService, SPTFeatureFlaggingService, SPTFreeTierPreCurationService, SPTNowPlayingService, SPTOnDemandService, SPTPlayerFeature, SPTSessionService, SPTURIDispatchService;

@interface SPTFreeTierPreCurationDialogService : NSObject <SPTService>
{
    id <CosmosFeature> _cosmosFeature;
    id <SPTSessionService> _clientSessionService;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFreeTierPreCurationService> _freeTierPreCurationService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTURIDispatchService> _URIDispatchService;
    SPTFreeTierPreCurationDialogController *_dialogController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierPreCurationDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTFreeTierPreCurationService> freeTierPreCurationService; // @synthesize freeTierPreCurationService=_freeTierPreCurationService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
- (void).cxx_destruct;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

