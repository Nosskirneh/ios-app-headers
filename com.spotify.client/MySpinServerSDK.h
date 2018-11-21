//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAScreenManagerDelegate-Protocol.h"
#import "MSAServiceClientConnectionDelegate-Protocol.h"
#import "MSAServiceClientIVIEventsDelegate-Protocol.h"
#import "MSAServiceClientInputEventDelegate-Protocol.h"
#import "MSAServiceClientScreenContentsDelegate-Protocol.h"
#import "MSAServiceClientVoiceControlDelegate-Protocol.h"
#import "MSAServiceListenerDelegate-Protocol.h"

@class MSAMetricsWindow, MSAScreenManager, MSAServiceClient, MSAServiceListener, MessageScreen, MySpinLaunchOptions, NSString, NSThread, NSTimer, NSURL, UIViewController, UIWindow;
@protocol MySpinAudioFocusDelegate, MySpinCarStatusDelegate, MySpinServerSDKDelegate, MySpinServicesDelegate;

@interface MySpinServerSDK : NSObject <MSAServiceClientConnectionDelegate, MSAServiceClientScreenContentsDelegate, MSAServiceClientInputEventDelegate, MSAScreenManagerDelegate, MSAServiceClientVoiceControlDelegate, MSAServiceListenerDelegate, MSAServiceClientIVIEventsDelegate>
{
    NSURL *_launchURL;
    _Bool useOldStartStopBehaviour;
    NSString *serviceIP;
    unsigned long long servicePort;
    MSAServiceClient *oldServiceClient;
    _Bool _hasNavigateToAppsAvailable;
    struct {
        unsigned short Major;
        unsigned short Minor;
        unsigned short Revision;
        unsigned short Build;
    } sdkVersion;
    NSTimer *delayedServiceClientStart;
    _Bool blockOpenURL;
    MSAServiceListener *serviceListener;
    NSThread *connectSDKWorkerThread;
    _Bool isStarted;
    _Bool isConnectedMode;
    MessageScreen *messageScreen;
    MSAMetricsWindow *metricsWindow;
    _Bool _mayStartOtherAppWhenDisconnected;
    id <MySpinServerSDKDelegate> _delegate;
    id <MySpinCarStatusDelegate> _carStatusDelegate;
    id <MySpinServicesDelegate> _servicesDelegate;
    MySpinLaunchOptions *_launchOptions;
    MSAScreenManager *_screenCaptureManager;
    unsigned long long _appState;
    MSAServiceClient *_serviceClient;
    id <MySpinAudioFocusDelegate> _audioFocusDelegate;
}

+ (id)sharedInstance;
@property __weak id <MySpinAudioFocusDelegate> audioFocusDelegate; // @synthesize audioFocusDelegate=_audioFocusDelegate;
@property(nonatomic) _Bool mayStartOtherAppWhenDisconnected; // @synthesize mayStartOtherAppWhenDisconnected=_mayStartOtherAppWhenDisconnected;
@property(retain, nonatomic) MSAServiceClient *serviceClient; // @synthesize serviceClient=_serviceClient;
@property(nonatomic) unsigned long long appState; // @synthesize appState=_appState;
@property(readonly, nonatomic) MSAScreenManager *screenCaptureManager; // @synthesize screenCaptureManager=_screenCaptureManager;
@property(retain, nonatomic) MySpinLaunchOptions *launchOptions; // @synthesize launchOptions=_launchOptions;
@property __weak id <MySpinServicesDelegate> servicesDelegate; // @synthesize servicesDelegate=_servicesDelegate;
@property __weak id <MySpinCarStatusDelegate> carStatusDelegate; // @synthesize carStatusDelegate=_carStatusDelegate;
@property __weak id <MySpinServerSDKDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)listener:(id)arg1 didFindServiceWithName:(id)arg2 hostname:(id)arg3 andPort:(unsigned short)arg4;
@property(nonatomic) _Bool metricsEnabled;
- (void)log:(id)arg1 withLevel:(long long)arg2;
- (void)setLogLevel:(long long)arg1 andLogComponents:(unsigned long long)arg2;
- (_Bool)isOtherVehicle;
- (_Bool)isTwoWheeler;
- (_Bool)requiresFocusControl;
- (void)setFocusControlCapabilities:(id)arg1;
- (void)notifyAppVoiceControlStatusChange:(long long)arg1 withStatusCode:(long long)arg2;
- (void)closeVoiceControlWithNotification:(_Bool)arg1;
- (void)closeVoiceControl;
- (void)voiceControlStatusChanged:(long long)arg1 withStatusCode:(long long)arg2;
- (void)resignVoiceControl;
- (void)requestVoiceControl:(long long)arg1;
- (_Bool)hasVoiceControlCapability;
- (_Bool)hasPositionInformationCapability;
- (_Bool)embeddedNavigateToDestination:(id)arg1;
- (void)navigateToDestination:(id)arg1 usingApp:(id)arg2 isRedirect:(_Bool)arg3;
- (_Bool)initiateNavigationByDestination:(id)arg1;
- (_Bool)initiateNavigationByCountry:(id)arg1 region:(id)arg2 city:(id)arg3 zipCode:(id)arg4 street:(id)arg5 crossStreet:(id)arg6 houseNumber:(id)arg7 description:(id)arg8;
- (_Bool)initiateNavigationByLocation:(struct CLLocationCoordinate2D)arg1 andDescription:(id)arg2;
- (_Bool)shouldUseEmbeddedNavi:(id)arg1;
- (long long)navigateToCapabilityStatus;
- (void)releaseAudioFocusWithType:(unsigned long long)arg1;
- (void)requestAudioFocusWithType:(unsigned long long)arg1 duration:(unsigned short)arg2;
- (_Bool)hasAudioManagmentCapability;
@property(readonly, nonatomic) UIWindow *externalWindow;
- (_Bool)hasPhoneCallCapability;
- (_Bool)initiatePhoneCall:(id)arg1 withDisplayName:(id)arg2;
- (id)iviVersions;
- (id)iviInfo;
- (id)versionString;
- (id)protocolVersion;
- (id)sdkVersion;
- (void)openApplicationWithURLString:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void)jumpToLauncherWithOptions:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void)launchAppLauncherWithOptions:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopServiceClient;
- (void)setInitialParamsToServiceClient:(id)arg1;
- (void)startServiceClient;
- (void)applyLaunchOptions:(id)arg1;
- (void)applyLaunchURL;
- (void)setLaunchURL:(id)arg1;
- (void)setServiceIP:(id)arg1 andPort:(unsigned long long)arg2;
@property(retain) UIViewController *connectedModeViewController;
@property(retain) UIViewController *disconnectedModeViewController;
- (void)handleNewCompressedFrame:(id)arg1;
- (_Bool)shouldEnableAutolockInDisconnectedMode;
- (id)viewControllerForConnectedModeOnRemoteScreen;
- (id)viewControllerForDisconnectedMode;
- (void)serviceClientDidDisconnect:(id)arg1;
- (void)serviceClientDidConnect:(id)arg1;
- (void)receivedAudioStatus:(unsigned char)arg1 forType:(unsigned char)arg2 requestID:(unsigned int)arg3;
- (void)phoneCallStateDidChange:(unsigned char)arg1;
- (void)homeButtonWasPressed;
- (void)handleSoftkey:(unsigned char)arg1 withEventType:(unsigned char)arg2;
- (_Bool)handleSetFrameSizePixel:(struct CGSize)arg1 andPhysical:(struct CGSize)arg2;
- (_Bool)handleFrameProperties:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
@property(readonly) struct CGSize physicalExternalScreenSize;
@property(readonly) struct CGSize externalScreenSize;
- (void)notifyAppOfConnectionStateChanged:(_Bool)arg1;
@property(readonly) _Bool isConnected;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

