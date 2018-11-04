//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_SPTHubContentOperationFactory.h"

@class NSString, SPTDataLoaderFactory;

@interface EXP_SPTHubContentOperationFactoryImplementation : NSObject <EXP_SPTHubContentOperationFactory>
{
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTPlayerFeature> _playerService;
    id <CosmosFeature> _cosmosFeature;
}

@property(readonly, nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(readonly, nonatomic) id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (id)createHubs2MigrationContentOperation;
- (id)createContentOperationContainerWithPagedContentOperation:(id)arg1;
- (id)createPlaybackHighlightingContentOperationWithComponentModelURIResolver:(id)arg1;
- (id)createLocalJSONContentOperationWithContentURL:(id)arg1;
- (id)createRemoteContentOperationWithContentURL:(id)arg1 sourceIdentifier:(id)arg2;
- (id)createRemoteContentOperationWithContentURLResolver:(id)arg1 sourceIdentifier:(id)arg2;
- (id)initWithDataLoaderFactory:(id)arg1 offlineModeState:(id)arg2 playerService:(id)arg3 cosmosFeature:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

