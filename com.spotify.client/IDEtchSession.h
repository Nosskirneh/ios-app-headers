//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDRemoteBMWRemotingServerAdapter, NSOperationQueue, NSUUID;

@interface IDEtchSession : NSObject
{
    struct IDEtchSessionCppAdaptor *_adaptor;
    unsigned long long _sessionState;
    id <IDEtchSessionHmiDelegate> _hmiDelegate;
    id <IDEtchSessionAudioDelegate> _audioDelegate;
    id <IDEtchSessionCdsDelegate> _cdsDelegate;
    id <IDEtchSessionPiaDelegate> _piaDelegate;
    id <IDEtchSessionApplicationManagementDelegate> _applicationManagementDelegate;
    id <IDEtchSessionVoiceRecorderDelegate> _voiceRecorderDelegate;
    id <IDEtchSessionMapDelegate> _mapDelegate;
    id <IDEtchSessionSdsDelegate> _sdsDelegate;
    NSOperationQueue *_delegateQueue;
    NSUUID *_sessionIdentifier;
    IDRemoteBMWRemotingServerAdapter *_remoteServerAdaptor;
}

+ (void)initialize;
@property(retain) IDRemoteBMWRemotingServerAdapter *remoteServerAdaptor; // @synthesize remoteServerAdaptor=_remoteServerAdaptor;
@property(readonly) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <IDEtchSessionSdsDelegate> sdsDelegate; // @synthesize sdsDelegate=_sdsDelegate;
@property __weak id <IDEtchSessionMapDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property __weak id <IDEtchSessionVoiceRecorderDelegate> voiceRecorderDelegate; // @synthesize voiceRecorderDelegate=_voiceRecorderDelegate;
@property __weak id <IDEtchSessionApplicationManagementDelegate> applicationManagementDelegate; // @synthesize applicationManagementDelegate=_applicationManagementDelegate;
@property __weak id <IDEtchSessionPiaDelegate> piaDelegate; // @synthesize piaDelegate=_piaDelegate;
@property __weak id <IDEtchSessionCdsDelegate> cdsDelegate; // @synthesize cdsDelegate=_cdsDelegate;
@property __weak id <IDEtchSessionAudioDelegate> audioDelegate; // @synthesize audioDelegate=_audioDelegate;
@property __weak id <IDEtchSessionHmiDelegate> hmiDelegate; // @synthesize hmiDelegate=_hmiDelegate;
@property unsigned long long sessionState; // @synthesize sessionState=_sessionState;
- (void).cxx_destruct;
- (id)description;
- (id)stringFromRemotingWrapperState:(unsigned long long)arg1;
- (void)processAsyncResultNone:(shared_ptr_db9b4e3e)arg1 callName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleNilValueForParameter:(id)arg1 callName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleSessionNotStartedForCall:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)etchVersionInfoWithError:(id *)arg1;
- (id)cdsVersionInfoWithError:(id *)arg1;
- (id)systemInfoWithError:(id *)arg1;
- (void)setupEtchRuntime;
- (void)destroyRemoteServer;
- (_Bool)stopRemoteServer;
- (_Bool)startRemoteServer;
- (_Bool)createRemoteServerWithUrl:(id)arg1;
- (void)stopSession;
- (_Bool)startSession;
- (void)dealloc;
- (id)init;
- (void)handleEvent:(long long)arg1 uniqueIdentifier:(id)arg2 appIdentifier:(id)arg3 applicationManagementServiceEvent:(int)arg4;
- (void)applicationManagementService:(long long)arg1 removeEventHandlerAppId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationManagementService:(long long)arg1 addEventHandlerAppId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationManagementService:(long long)arg1 registerAppId:(id)arg2 variantMap:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)applicationManagementService:(long long)arg1 disposeWithError:(id *)arg2;
- (long long)registerApplicationManagementServiceWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)handlePlayerStateChanged:(long long)arg1 audioConnectionType:(int)arg2 audioPlayerState:(int)arg3;
- (void)handleMultimediaButtonEvent:(long long)arg1 audioButtonEvent:(int)arg2;
- (void)handleConnectionDenied:(long long)arg1 connectionType:(int)arg2;
- (void)handleConnectionDeactivated:(long long)arg1 connectionType:(int)arg2;
- (void)handleConnectionGranted:(long long)arg1 connectionType:(int)arg2;
- (_Bool)isValidPlayerState:(int)arg1;
- (_Bool)isValidConnectionType:(int)arg1;
- (shared_ptr_0b1fe177)avPlayerStateWithIDAudioPlayerState:(int)arg1;
- (shared_ptr_9f50eacd)avConnectionTypeWithIDAudioConnectionType:(int)arg1;
- (_Bool)audioService:(long long)arg1 confirmPlayerState:(int)arg2 forConnectionOfType:(int)arg3 error:(id *)arg4;
- (void)audioService:(long long)arg1 confirmPlayerState:(int)arg2 forConnectionOfType:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)audioService:(long long)arg1 closeConnectionOfType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)audioService:(long long)arg1 requestConnectionOfType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)registerAudioServiceWithApplicationIdentifier:(id)arg1 auxiliaryInput:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)updateCertificateRevocationList:(id)arg1 error:(id *)arg2;
- (_Bool)loginWithSignedChallenge:(id)arg1 error:(id *)arg2;
- (id)authChallengeForCertificate:(id)arg1 error:(id *)arg2;
- (void)handlePropertyChanged:(long long)arg1 uniqueIdentifier:(id)arg2 propertyName:(id)arg3 propertyValue:(id)arg4;
- (_Bool)cdsService:(long long)arg1 setProperty:(id)arg2 value:(id)arg3 requestIdentifier:(id)arg4 error:(id *)arg5;
- (_Bool)cdsService:(long long)arg1 unbindProperty:(id)arg2 error:(id *)arg3;
- (_Bool)cdsService:(long long)arg1 bindProperty:(id)arg2 refreshInterval:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)cdsService:(long long)arg1 requestProperty:(id)arg2 requestIdentifier:(id)arg3 error:(id *)arg4;
- (void)cdsService:(long long)arg1 setProperty:(id)arg2 value:(id)arg3 requestIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cdsService:(long long)arg1 requestProperty:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cdsService:(long long)arg1 unbindProperty:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cdsService:(long long)arg1 bindProperty:(id)arg2 refreshInterval:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)registerCdsServiceWithError:(id *)arg1;
- (id)etchExceptionError:(id)arg1 forCall:(id)arg2;
- (id)invalidValueErrorForParameter:(id)arg1 callName:(id)arg2;
- (id)nilParameterErrorForParameter:(id)arg1 callName:(id)arg2;
- (id)wrongStateErrorForCall:(id)arg1;
- (id)stringWithRhmiVersion:(long long)arg1;
- (shared_ptr_51068687)rhmiVersionWithIDRhmiVersion:(long long)arg1;
- (void)handleHmiEvent:(long long)arg1 uniqueIdentifier:(id)arg2 componentIdentifier:(long long)arg3 eventIdentifier:(long long)arg4 eventInfo:(id)arg5;
- (void)handleActionEvent:(long long)arg1 uniqueIdentifier:(id)arg2 actionIdentifier:(long long)arg3 actionInfo:(id)arg4;
- (void)hmiService:(long long)arg1 hmiCapabilitiesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)hmiService:(long long)arg1 triggerHmiEvent:(unsigned long long)arg2 parameterMap:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)hmiService:(long long)arg1 setHmiResource:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)hmiService:(long long)arg1 updateProperty:(unsigned long long)arg2 forComponent:(long long)arg3 variantMap:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)hmiService:(long long)arg1 updateDataModel:(long long)arg2 variantData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)hmiService:(long long)arg1 updateTable:(long long)arg2 tableData:(id)arg3 rows:(struct _NSRange)arg4 columns:(struct _NSRange)arg5 totalRows:(unsigned long long)arg6 totalColumns:(unsigned long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)registerHmiServiceWithIdentifier:(id)arg1 name:(id)arg2 vendor:(id)arg3 versionInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)hmiService:(long long)arg1 setHmiResource:(id)arg2 error:(id *)arg3;
- (_Bool)hmiService:(long long)arg1 startRemoteHmiWitherror:(id *)arg2;
- (id)hmiService:(long long)arg1 hmiCapabilitiesWitherror:(id *)arg2;
- (void)hmiService:(long long)arg1 confirmActionEvent:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)hmiService:(long long)arg1 checkAvailabilityOfResource:(id)arg2 error:(id *)arg3;
- (_Bool)hmiService:(long long)arg1 addHmiEventHandlerWithError:(id *)arg2;
- (_Bool)hmiService:(long long)arg1 addActionEventHandlerWithError:(id *)arg2;
- (long long)registerHmiServiceWithIdentifier:(id)arg1 name:(id)arg2 vendor:(id)arg3 versionInfo:(id)arg4 rhmiVersion:(long long)arg5 error:(id *)arg6;
- (long long)registerHmiServiceWithIdentifier:(id)arg1 name:(id)arg2 vendor:(id)arg3 versionInfo:(id)arg4 error:(id *)arg5;
- (shared_ptr_e9bf6e71)mapModeWithIDMapMode:(unsigned long long)arg1;
- (long long)explicitTransferIdWithTransferId:(long long)arg1 mapEvent:(unsigned long long)arg2;
- (void)handleMapEvent:(long long)arg1 mapEvent:(unsigned long long)arg2 transferId:(long long)arg3;
- (void)mapService:(long long)arg1 finalizeImportWithTransferId:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)mapService:(long long)arg1 abortImportWithTransferId:(long long)arg2 reason:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)mapService:(long long)arg1 importDataWithTransferId:(long long)arg2 sequence:(long long)arg3 data:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)mapService:(long long)arg1 initializeImportWithTransferId:(long long)arg2 filename:(id)arg3 size:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)mapService:(long long)arg1 setMode:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)mapService:(long long)arg1 removeWithFilename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)mapService:(long long)arg1 hideOverlayWithFilename:(id)arg2 overlayId:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)mapService:(long long)arg1 showOverlayWithFilename:(id)arg2 overlayId:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)mapService:(long long)arg1 highlightWithFilename:(id)arg2 overlayId:(long long)arg3 location:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)mapService:(long long)arg1 disposeWithCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)mapService:(long long)arg1 disposeWithError:(id *)arg2;
- (void)registerMapServiceWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)registerMapServiceWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)handlePiaEvent:(long long)arg1 piaEvent:(int)arg2 payload:(id)arg3;
- (_Bool)piaService:(long long)arg1 disposeWithError:(id *)arg2;
- (_Bool)piaService:(long long)arg1 exportResult:(_Bool)arg2 error:(id *)arg3;
- (_Bool)piaService:(long long)arg1 importData:(id)arg2 error:(id *)arg3;
- (_Bool)piaService:(long long)arg1 requestWithData:(id)arg2 error:(id *)arg3;
- (long long)registerPiaServiceWithIdentifier:(id)arg1 error:(id *)arg2;
- (shared_ptr_95c73aa4)sdsDialogCommandPtrWithIDSdsCommand:(unsigned long long)arg1;
- (void)handleSdsEvent:(long long)arg1 sdsEvent:(unsigned long long)arg2 parameters:(id)arg3;
- (void)speechDialogService:(long long)arg1 deregisterIntentGroupId:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)speechDialogService:(long long)arg1 registerIntentWithGroupId:(long long)arg2 dialogToken:(long long)arg3 appName:(id)arg4 isGlobal:(_Bool)arg5 payload:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)speechDialogService:(long long)arg1 controlDialogWithCommand:(unsigned long long)arg2 dialogToken:(long long)arg3 parameters:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)speechDialogService:(long long)arg1 takeOverDialogWithDialogToken:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)speechDialogService:(long long)arg1 disposeWithError:(id *)arg2;
- (long long)registerSpeechDialogServiceWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)handleVoiceRecorderEvent:(long long)arg1 voiceRecorderEvent:(unsigned long long)arg2 sequence:(long long)arg3 payload:(id)arg4;
- (void)voiceRecorderService:(long long)arg1 sequence:(long long)arg2 exportResult:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)voiceRecorderService:(long long)arg1 sequence:(long long)arg2 exportResult:(_Bool)arg3 error:(id *)arg4;
- (_Bool)voiceRecorderService:(long long)arg1 disposeWithError:(id *)arg2;
- (long long)registerVoiceRecorderServiceWithIdentifier:(id)arg1 error:(id *)arg2;

@end

