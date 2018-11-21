//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFormatListPlatformService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFormatListPlatformRegistryImplementation, SPTFormatListPlatformRemoteControlPolicyFactoryImplementation, SPTFormatListPlatformRemoteControlPolicyManagerImplementation, SPTFormatListPlatformTestManagerImplementation;
@protocol SPTAbbaService, SPTContainerService, SPTCoreService, SPTFeedbackService, SPTFormatListPlatformResolver, SPTFreeTierService, SPTGLUEService, SPTLocalSettings, SPTPlayerFeature, SPTPlaylistPlatformService, SPTSessionService, SPTSettingsFeature, UpsellFeature;

@interface SPTFormatListPlatformServiceImplementation : NSObject <SPTService, SPTFormatListPlatformService>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTGLUEService> _glueService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTCoreService> _coreService;
    id <UpsellFeature> _upsellFeature;
    id <SPTAbbaService> _abbaService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTFeedbackService> _feedbackService;
    SPTFormatListPlatformTestManagerImplementation *_testManager;
    SPTFormatListPlatformRegistryImplementation *_registry;
    id <SPTFormatListPlatformResolver> _platformResolver;
    id <SPTLocalSettings> _localSettings;
    SPTFormatListPlatformRemoteControlPolicyFactoryImplementation *_remoteControlPolicyFactory;
    SPTFormatListPlatformRemoteControlPolicyManagerImplementation *_remoteControlPolicyManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFormatListPlatformRemoteControlPolicyManagerImplementation *remoteControlPolicyManager; // @synthesize remoteControlPolicyManager=_remoteControlPolicyManager;
@property(retain, nonatomic) SPTFormatListPlatformRemoteControlPolicyFactoryImplementation *remoteControlPolicyFactory; // @synthesize remoteControlPolicyFactory=_remoteControlPolicyFactory;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTFormatListPlatformResolver> platformResolver; // @synthesize platformResolver=_platformResolver;
@property(retain, nonatomic) SPTFormatListPlatformRegistryImplementation *registry; // @synthesize registry=_registry;
@property(retain, nonatomic) SPTFormatListPlatformTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTFeedbackService> feedbackService; // @synthesize feedbackService=_feedbackService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <UpsellFeature> upsellFeature; // @synthesize upsellFeature=_upsellFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideRemoteControlPolicyManager;
- (id)provideRemoteControlPolicyFactory;
- (id)providePlatformManagerForFormatListURL:(id)arg1;
- (id)providePlatformResolver;
- (id)providePlatformRegistry;
- (id)provideLocalSettings;
- (id)provideTestManager;
- (id)provideFormatListPlatformViewController:(id)arg1 context:(id)arg2;
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

