//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MySpinServerSDKDelegate-Protocol.h"
#import "SPTMySPINDebugViewControllerDelegate-Protocol.h"
#import "SPTMySPINWebViewControllerDelegate-Protocol.h"
#import "SPTService-Protocol.h"

@class NSOperationQueue, NSString, NSURL, SPTAccessory, SPTAllocationContext, SPTMySPINAppFeatureImplementation, SPTMySPINBridgeClient, SPTMySPINDebugViewController, SPTMySPINURIHandlerFeatureImplementation, SPTMySPINWebViewController, UIImageView;
@protocol GLUETheme, SPTAccessoryManagerService, SPTAccessoryStateManager, SPTContainerService, SPTContainerUIService, SPTDebugService, SPTExternalIntegrationPlaybackService, SPTFeatureFlagSignal, SPTFeatureFlaggingService, SPTGLUEService, SPTSessionService, SPTSettingsFeature, SPTSpotifyAppProtocolService;

@interface SPTMySPINFeatureImplementation : NSObject <MySpinServerSDKDelegate, SPTMySPINWebViewControllerDelegate, SPTMySPINDebugViewControllerDelegate, SPTService>
{
    _Bool _didStartLoadingOfWebUI;
    id <SPTSessionService> _clientSessionService;
    id <SPTSpotifyAppProtocolService> _appProtocolService;
    id <SPTExternalIntegrationPlaybackService> _externalIntegrationPlaybackService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    SPTMySPINURIHandlerFeatureImplementation *_uriHandlerFeature;
    SPTMySPINAppFeatureImplementation *_appFeatureImplementation;
    id <SPTDebugService> _debugService;
    id <SPTGLUEService> _glueService;
    SPTMySPINWebViewController *_webViewController;
    UIImageView *_splashScreen;
    SPTMySPINBridgeClient *_mySpinBridgeClient;
    NSURL *_mySpinLaunchURL;
    SPTMySPINWebViewController *_debugWebViewController;
    SPTMySPINBridgeClient *_mySpinDebugBridgeClient;
    SPTMySPINDebugViewController *_mySpinDebugViewController;
    NSOperationQueue *_backgroundDownloadQueue;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFeatureFlagSignal> _featureFlagSignal;
    id <GLUETheme> _glueTheme;
    id <SPTAccessoryStateManager> _accessoryManager;
    SPTAccessory *_currentAccessory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(nonatomic) _Bool didStartLoadingOfWebUI; // @synthesize didStartLoadingOfWebUI=_didStartLoadingOfWebUI;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> featureFlagSignal; // @synthesize featureFlagSignal=_featureFlagSignal;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(retain, nonatomic) NSOperationQueue *backgroundDownloadQueue; // @synthesize backgroundDownloadQueue=_backgroundDownloadQueue;
@property(retain, nonatomic) SPTMySPINDebugViewController *mySpinDebugViewController; // @synthesize mySpinDebugViewController=_mySpinDebugViewController;
@property(retain, nonatomic) SPTMySPINBridgeClient *mySpinDebugBridgeClient; // @synthesize mySpinDebugBridgeClient=_mySpinDebugBridgeClient;
@property(retain, nonatomic) SPTMySPINWebViewController *debugWebViewController; // @synthesize debugWebViewController=_debugWebViewController;
@property(retain, nonatomic) NSURL *mySpinLaunchURL; // @synthesize mySpinLaunchURL=_mySpinLaunchURL;
@property(retain, nonatomic) SPTMySPINBridgeClient *mySpinBridgeClient; // @synthesize mySpinBridgeClient=_mySpinBridgeClient;
@property(retain, nonatomic) UIImageView *splashScreen; // @synthesize splashScreen=_splashScreen;
@property(retain, nonatomic) SPTMySPINWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak SPTMySPINAppFeatureImplementation *appFeatureImplementation; // @synthesize appFeatureImplementation=_appFeatureImplementation;
@property(nonatomic) __weak SPTMySPINURIHandlerFeatureImplementation *uriHandlerFeature; // @synthesize uriHandlerFeature=_uriHandlerFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTExternalIntegrationPlaybackService> externalIntegrationPlaybackService; // @synthesize externalIntegrationPlaybackService=_externalIntegrationPlaybackService;
@property(nonatomic) __weak id <SPTSpotifyAppProtocolService> appProtocolService; // @synthesize appProtocolService=_appProtocolService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideLocalSettings;
- (void)loadFeatureFlagSignal;
- (void)registerFeatureSettingsPage;
- (id)mySpinWebUrls;
@property(readonly, nonatomic) NSURL *webURLWithQueryParams;
@property(readonly, nonatomic) NSString *webURL;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)mySPINDebugViewDidDisappear:(id)arg1;
- (id)provideMySPINDebugViewController;
- (void)pausePlayback;
- (void)performCleanup;
- (void)accessoryDidDisconnect:(id)arg1;
- (id)provideMySPINViewController;
- (id)viewControllerForConnectedModeOnRemoteScreen:(struct CGSize)arg1;
- (id)viewControllerForDisconnectedMode;
- (void)webUIDidFinishLoading:(id)arg1;
- (void)unload;
- (void)cleanUpWebView;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

