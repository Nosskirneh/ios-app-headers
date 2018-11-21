//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCreatePlaylistService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierCreatePlaylistTestManagerImplementation;
@protocol PlaylistFeature, SPContextMenuFeature, SPTContainerService, SPTFeatureFlaggingService, SPTFreeTierPresentationService, SPTGLUEService, SPTInAppMessageService, SPTPageRegistrationToken, SPTPlaylistPlatformService, SPTURIDispatchService;

@interface SPTFreeTierCreatePlaylistServiceImplementation : NSObject <SPTFreeTierCreatePlaylistService>
{
    id <SPTContainerService> _containerService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTFreeTierPresentationService> _freeTierPresentationService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <PlaylistFeature> _playlistFeature;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTGLUEService> _glueService;
    id <SPTInAppMessageService> _inAppMessageService;
    SPTFreeTierCreatePlaylistTestManagerImplementation *_testManager;
    id <SPTPageRegistrationToken> _createPlaylistServiceRegistrationToken;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPageRegistrationToken> createPlaylistServiceRegistrationToken; // @synthesize createPlaylistServiceRegistrationToken=_createPlaylistServiceRegistrationToken;
@property(retain, nonatomic) SPTFreeTierCreatePlaylistTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTInAppMessageService> inAppMessageService; // @synthesize inAppMessageService=_inAppMessageService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <PlaylistFeature> playlistFeature; // @synthesize playlistFeature=_playlistFeature;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTFreeTierPresentationService> freeTierPresentationService; // @synthesize freeTierPresentationService=_freeTierPresentationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)registerContextMenuActions;
- (id)provideTestManager;
- (id)provideLogger;
- (id)provideFreeTierCreatePlaylistTheme;
- (id)provideAddToPlaylistController:(id)arg1 context:(id)arg2;
- (id)provideRenamePlaylistControllerForPlaylistURL:(id)arg1 currentName:(id)arg2;
- (id)provideCreatePlaylistControllerInFolder:(id)arg1;
- (id)provideCreatePlaylistController;
- (void)unregisterCreatePlaylist;
- (void)registerCreatePlaylist;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

