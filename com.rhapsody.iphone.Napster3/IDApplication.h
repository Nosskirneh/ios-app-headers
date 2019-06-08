//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDA4AProxyInfo, IDAppManifest, IDApplicationManagementService, IDAudioService, IDBackgroundTask, IDCdsService, IDEtchSession, IDHmiService, IDMapService, IDPiaService, IDTtsService, IDVehicleInfo, IDVoiceRecorderService, IDWidgetHmiService, NSOperationQueue, NSUndoManager;
@protocol IDApplicationDataSource, IDApplicationDelegate, IDHmiProvider;

@interface IDApplication : NSObject
{
    _Bool _connected;
    IDHmiService *_hmiService;
    IDCdsService *_cdsService;
    IDAudioService *_audioService;
    IDVoiceRecorderService *_voiceRecorderService;
    IDMapService *_mapService;
    IDTtsService *_ttsService;
    id <IDApplicationDelegate> _delegate;
    id <IDApplicationDataSource> _dataSource;
    id <IDHmiProvider> _hmiProvider;
    IDVehicleInfo *_vehicleInfo;
    IDPiaService *_piaService;
    IDApplicationManagementService *_applicationManagementService;
    IDAppManifest *_manifest;
    NSOperationQueue *_appQueue;
    IDEtchSession *_etchSession;
    IDWidgetHmiService *_widgetHmiService;
    NSOperationQueue *_delegateQueue;
    long long _rhmiVersion;
    IDBackgroundTask *_backgroundTask;
    IDA4AProxyInfo *_proxyInfo;
    NSUndoManager *_undoManager;
}

+ (void)initialize;
@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain) IDA4AProxyInfo *proxyInfo; // @synthesize proxyInfo=_proxyInfo;
@property(retain) IDBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property long long rhmiVersion; // @synthesize rhmiVersion=_rhmiVersion;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) IDWidgetHmiService *widgetHmiService; // @synthesize widgetHmiService=_widgetHmiService;
@property(retain) IDEtchSession *etchSession; // @synthesize etchSession=_etchSession;
@property(readonly) NSOperationQueue *appQueue; // @synthesize appQueue=_appQueue;
@property(readonly) IDAppManifest *manifest; // @synthesize manifest=_manifest;
@property(retain) IDApplicationManagementService *applicationManagementService; // @synthesize applicationManagementService=_applicationManagementService;
@property(retain) IDPiaService *piaService; // @synthesize piaService=_piaService;
@property(retain) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
@property(readonly) id <IDHmiProvider> hmiProvider; // @synthesize hmiProvider=_hmiProvider;
@property(nonatomic) __weak id <IDApplicationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IDApplicationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDTtsService *ttsService; // @synthesize ttsService=_ttsService;
@property(retain) IDMapService *mapService; // @synthesize mapService=_mapService;
@property(retain) IDVoiceRecorderService *voiceRecorderService; // @synthesize voiceRecorderService=_voiceRecorderService;
@property(retain) IDAudioService *audioService; // @synthesize audioService=_audioService;
@property(retain) IDCdsService *cdsService; // @synthesize cdsService=_cdsService;
@property(retain) IDHmiService *hmiService; // @synthesize hmiService=_hmiService;
@property(getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (_Bool)shouldRegisterForApplicationLaunch;
- (long long)rhmiVersionToStartApplication;
- (_Bool)hasApplicationSupportForRhmiVersion:(long long)arg1;
- (_Bool)isRhmiVersion:(long long)arg1 supportedByVehicle:(id)arg2;
- (_Bool)hasValidHmiResourceDatabaseCount;
- (_Bool)hasValidResourceHashes;
- (_Bool)shouldRegisterTextToSpeechService;
- (_Bool)shouldRegisterMapService;
- (_Bool)shouldRegisterVoiceRecorderService;
- (_Bool)shouldRegisterPiaService;
- (_Bool)shouldRegisterAudioService;
- (_Bool)shouldRegisterCdsService;
- (_Bool)isLastUserModeAllowed;
- (id)debugDescription;
- (id)description;
- (void)restoreMainHmiState;
- (void)hmiDidStop;
- (void)hmiDidStart;
- (void)applicationDidStop;
- (void)applicationDidFailToStartWithError:(id)arg1;
- (void)applicationDidStart;
- (void)applicationDidConnectToVehicle;
- (void)performLastUserModeWithView:(id)arg1;
- (void)internalStop;
- (void)stopWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)onHmiRestoreEvent:(id)arg1;
- (void)undoSetupTtsService;
- (_Bool)setupTtsService:(id *)arg1;
- (void)undoSetupMapService;
- (_Bool)setupMapService:(id *)arg1;
- (void)undoSetupWidgetHMIService;
- (_Bool)setupWidgetHMIService:(id *)arg1;
- (void)undoSetupVoiceRecorderService;
- (_Bool)setupVoiceRecorderService:(id *)arg1;
- (void)undoSetupPiaService;
- (_Bool)setupApplicationManagementService;
- (_Bool)setupPiaService:(id *)arg1;
- (void)undoSetupAudioService;
- (_Bool)setupAudioService:(id *)arg1;
- (void)undoStartHmi;
- (_Bool)startHmi:(id *)arg1;
- (void)undoSetupHmiService;
- (_Bool)setupHmiService:(id *)arg1;
- (void)undoSetupCdsService;
- (_Bool)setupCdsService:(id *)arg1;
- (void)undoLoginToHmi;
- (_Bool)loginToHmi:(id *)arg1;
- (void)undoStartEtchSession;
- (_Bool)startEtchSession:(id *)arg1;
- (void)undoPreflightCheck;
- (_Bool)performPreflightCheck:(id *)arg1;
- (id)internalStart;
- (void)startWithRhmiVersion:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)uniqueIdentifier;
- (id)vendor;
- (id)version;
- (id)name;
- (id)initWithHmiProvider:(id)arg1 etchSession:(id)arg2;
- (id)initWithHmiProvider:(id)arg1;
- (id)init;

@end

