//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTLocalFilesImportManager;
@protocol CollectionFeature, CosmosFeature, SPTCollectionPlatformService, SPTContainerService, SPTContainerUIService, SPTNetworkService, SPTNuxService, SPTPlaylistPlatformService, SPTResolver, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTLocalFilesServiceImplementation : NSObject <SPTService>
{
    id <CollectionFeature> _collectionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTNetworkService> _networkService;
    id <SPTNuxService> _nuxService;
    id <SPTSettingsFeature> _settingsFeature;
    id <CosmosFeature> _cosmosService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTURIDispatchService> _dispatchService;
    SPTLocalFilesImportManager *_localFilesImportManager;
    id <SPTResolver> _cosmosRouter;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTResolver> cosmosRouter; // @synthesize cosmosRouter=_cosmosRouter;
@property(retain, nonatomic) SPTLocalFilesImportManager *localFilesImportManager; // @synthesize localFilesImportManager=_localFilesImportManager;
@property(readonly, nonatomic) __weak id <SPTURIDispatchService> dispatchService; // @synthesize dispatchService=_dispatchService;
@property(readonly, nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(readonly, nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(readonly, nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(readonly, nonatomic) __weak id <SPTNuxService> nuxService; // @synthesize nuxService=_nuxService;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <CollectionFeature> collectionService; // @synthesize collectionService=_collectionService;
- (void).cxx_destruct;
- (id)provideResolver;
- (id)provideLocalSettings;
- (id)provideImportMusicViewControllerWithURL:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

