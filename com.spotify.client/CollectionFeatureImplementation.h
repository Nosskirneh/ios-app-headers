//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CollectionFeature-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTCollectionLoggerImplementation;
@protocol FollowFeature, SPContextMenuFeature, SPTAbbaService, SPTCollectionPlatformService, SPTContainerService, SPTCoreService, SPTExplicitContentService, SPTNavigationFeature, SPTNetworkService, SPTPageRegistrationToken, SPTPlayerFeature, SPTSessionService, SPTSettingsFeature, SPTShareFeature, SPTShelfService, SPTUIPresentationService;

@interface CollectionFeatureImplementation : NSObject <SPTService, CollectionFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTAbbaService> _abbaService;
    id <SPTSettingsFeature> _settingsFeature;
    id <FollowFeature> _followFeature;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTShareFeature> _shareFeature;
    id <SPTUIPresentationService> _UIPresentationService;
    id <SPTShelfService> _shelfService;
    id <SPTExplicitContentService> _explicitContentService;
    SPTCollectionLoggerImplementation *_collectionLogger;
    id <SPTPageRegistrationToken> _collectionUnionArtistPageRegisterationToken;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPageRegistrationToken> collectionUnionArtistPageRegisterationToken; // @synthesize collectionUnionArtistPageRegisterationToken=_collectionUnionArtistPageRegisterationToken;
@property(retain, nonatomic) SPTCollectionLoggerImplementation *collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTUIPresentationService> UIPresentationService; // @synthesize UIPresentationService=_UIPresentationService;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideCollectionArtistPage:(id)arg1 context:(id)arg2;
- (id)provideCollectionArtistModelForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)provideCollectionArtistModelForURL:(id)arg1;
- (id)provideCollectionLogger;
- (id)playerForViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (void)unregisterCollectionArtistPage;
- (void)unload;
- (void)registerCollectionArtistPage;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

