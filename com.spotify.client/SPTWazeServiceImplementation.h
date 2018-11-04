//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAuthServiceObserver.h"
#import "SPTExternalIntegrationPlaybackControllerObserver.h"
#import "SPTWazeService.h"
#import "SPTWazeTestManagerImplementationDataSource.h"
#import "SPTWazeTestManagerObserver.h"

@class NSString, SPTAllocationContext, SPTWazeLogger, SPTWazePresenter, SPTWazeTestManagerImplementation, SPTWazeTransportManager, SPTWazeViewModel;

@interface SPTWazeServiceImplementation : NSObject <SPTWazeTestManagerObserver, SPTAuthServiceObserver, SPTWazeTestManagerImplementationDataSource, SPTExternalIntegrationPlaybackControllerObserver, SPTWazeService>
{
    _Bool _serviceEnabled;
    id <SPTAbbaService> _abbaService;
    id <SPTAuthService> _authService;
    id <SPTBannerFeature> _bannerService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTDrivingStateDetectionService> _drivingDetectionService;
    id <SPTExternalIntegrationPlaybackService> _externalIntegrationPlaybackService;
    id <GaiaFeature> _gaiaFeature;
    id <SPTSettingsFeature> _settingsService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SlateFeature> _slateService;
    id <SPTGLUEService> _glueService;
    id <SPTLocalSettings> _localSettings;
    SPTWazeViewModel *_viewModel;
    SPTWazePresenter *_presenter;
    SPTWazeTransportManager *_transportManager;
    SPTWazeTestManagerImplementation *_testManager;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    SPTWazeLogger *_logger;
}

+ (id)serviceIdentifier;
@property _Bool serviceEnabled; // @synthesize serviceEnabled=_serviceEnabled;
@property(retain, nonatomic) SPTWazeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) SPTWazeTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTWazeTransportManager *transportManager; // @synthesize transportManager=_transportManager;
@property(retain, nonatomic) SPTWazePresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) SPTWazeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(readonly, nonatomic) __weak id <SlateFeature> slateService; // @synthesize slateService=_slateService;
@property(readonly, nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(readonly, nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(readonly, nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> externalIntegrationPlaybackService; // @synthesize externalIntegrationPlaybackService=_externalIntegrationPlaybackService;
@property(readonly, nonatomic) __weak id <SPTDrivingStateDetectionService> drivingDetectionService; // @synthesize drivingDetectionService=_drivingDetectionService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(readonly, nonatomic) __weak id <SPTBannerFeature> bannerService; // @synthesize bannerService=_bannerService;
@property(readonly, nonatomic) __weak id <SPTAuthService> authService; // @synthesize authService=_authService;
@property(readonly, nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (void).cxx_destruct;
- (_Bool)shouldSendResumedPlaybackNotificationWithNewPlayerState:(id)arg1 oldPlayerState:(id)arg2;
- (void)externalIntegrationPlaybackController:(id)arg1 didReceiveNewPlayerState:(id)arg2 oldPlayerState:(id)arg3;
- (id)fragmentsParameterFromURI:(id)arg1;
- (void)authServiceWillReturnToSourceApplicationWithURI:(id)arg1;
- (void)registerWazeSettingsSection;
- (id)providePresentationViewModel;
- (void)testManager:(id)arg1 didChangeWazeIntegrationEnabledState:(_Bool)arg2;
- (void)testManager:(id)arg1 didChangeWazeFeatureEnabledState:(_Bool)arg2;
- (id)navigationState;
- (_Bool)isWazeEnabled;
- (void)disable;
- (void)enableAndShowBanner:(_Bool)arg1;
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
