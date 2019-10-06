//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeService-Protocol.h"

@class NSString, SPTAllocationContext, SPTVolumeCosmosResolver, SPTVolumeFlagsManager, SPTVolumeRemotePopupPresenter;
@protocol CosmosFeature, GaiaFeature, SPTAbbaService, SPTContainerService, SPTVolumeAPI;

@interface SPTVolumeServiceImplementation : NSObject <SPTVolumeService>
{
    id <SPTContainerService> _containerService;
    id <GaiaFeature> _gaiaService;
    id <CosmosFeature> _cosmosService;
    id <SPTAbbaService> _abbaService;
    id <SPTVolumeAPI> _volumeManager;
    SPTVolumeRemotePopupPresenter *_remoteVolumePopupPresenter;
    SPTVolumeCosmosResolver *_resolver;
    SPTVolumeFlagsManager *_flagManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTVolumeFlagsManager *flagManager; // @synthesize flagManager=_flagManager;
@property(retain, nonatomic) SPTVolumeCosmosResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) SPTVolumeRemotePopupPresenter *remoteVolumePopupPresenter; // @synthesize remoteVolumePopupPresenter=_remoteVolumePopupPresenter;
@property(retain, nonatomic) id <SPTVolumeAPI> volumeManager; // @synthesize volumeManager=_volumeManager;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(nonatomic) __weak id <GaiaFeature> gaiaService; // @synthesize gaiaService=_gaiaService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideVolumeAPI;
- (void)setupVolumeSliderView;
- (void)setupRemoteVolumePopupPresenter;
- (void)setupGaiaVolumeProxy;
- (void)setupVolumeManager;
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

