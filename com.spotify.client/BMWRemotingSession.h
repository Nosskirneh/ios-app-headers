//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMWEOCSession.h"

@class NSObject;
@protocol BMWRemotingSessionDelegate;

@interface BMWRemotingSession : BMWEOCSession
{
    NSObject<BMWRemotingSessionDelegate> *_delegate;
}

+ (id)serviceNames;
@property __weak NSObject<BMWRemotingSessionDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)receiveMessage_sds_onDialogEvent:(id)arg1;
- (id)receiveMessage_vrs_onEvent:(id)arg1;
- (id)receiveMessage_rcs_headphoneEvent:(id)arg1;
- (id)receiveMessage_rcs_playbackEvent:(id)arg1;
- (id)receiveMessage_rcs_entPlaylistEvent:(id)arg1;
- (id)receiveMessage_rcs_entSourceEvent:(id)arg1;
- (id)receiveMessage_rcs_entListEvent:(id)arg1;
- (id)receiveMessage_rcs_muteEvent:(id)arg1;
- (id)receiveMessage_rcs_control:(id)arg1;
- (id)receiveMessage_rcs_lockEvent:(id)arg1;
- (id)receiveMessage_vds_diagnosticHandler:(id)arg1;
- (id)receiveMessage_map_abortImport:(id)arg1;
- (id)receiveMessage_map_onEvent:(id)arg1;
- (id)receiveMessage_pia_onEvent:(id)arg1;
- (id)receiveMessage_diag_perf_oneway:(id)arg1;
- (id)receiveMessage_voice_sessionStateChanged:(id)arg1;
- (id)receiveMessage_av_multimediaButtonEvent:(id)arg1;
- (id)receiveMessage_av_connectionDeactivated:(id)arg1;
- (id)receiveMessage_av_connectionGranted:(id)arg1;
- (id)receiveMessage_av_requestPlayerState:(id)arg1;
- (id)receiveMessage_av_connectionDenied:(id)arg1;
- (id)receiveMessage_cds_onPropertyChangedBinaryEvent:(id)arg1;
- (id)receiveMessage_cds_onPropertyChangedEvent:(id)arg1;
- (id)receiveMessage_am_onAppEvent:(id)arg1;
- (id)receiveMessage_rhmi_onHmiEvent:(id)arg1;
- (id)receiveMessage_rhmi_onActionEvent:(id)arg1;
- (id)receiveMessage_ver_getVersion:(id)arg1;
- (id)receiveMessage:(id)arg1;
- (_Bool)synchronous__sds_controlDialogWithHandle:(id)arg1 token:(id)arg2 command:(id)arg3 parameters:(id)arg4 error:(id *)arg5;
- (void)sds_controlDialogWithHandle:(id)arg1 token:(id)arg2 command:(id)arg3 parameters:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__sds_controlDialogWithHandle:(id)arg1 token:(id)arg2 command:(id)arg3 parameters:(id)arg4;
- (_Bool)synchronous__sds_unregisterIntentWithHandle:(id)arg1 intentGroupId:(id)arg2 error:(id *)arg3;
- (void)sds_unregisterIntentWithHandle:(id)arg1 intentGroupId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__sds_unregisterIntentWithHandle:(id)arg1 intentGroupId:(id)arg2;
- (_Bool)synchronous__sds_registerIntentWithHandle:(id)arg1 token:(id)arg2 appName:(id)arg3 intentGroupId:(id)arg4 isGlobal:(id)arg5 payload:(id)arg6 error:(id *)arg7;
- (void)sds_registerIntentWithHandle:(id)arg1 token:(id)arg2 appName:(id)arg3 intentGroupId:(id)arg4 isGlobal:(id)arg5 payload:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)createMessage__sds_registerIntentWithHandle:(id)arg1 token:(id)arg2 appName:(id)arg3 intentGroupId:(id)arg4 isGlobal:(id)arg5 payload:(id)arg6;
- (_Bool)synchronous__sds_takeOverDialogWithHandle:(id)arg1 tokenOfDialogToTakeOver:(id)arg2 error:(id *)arg3;
- (void)sds_takeOverDialogWithHandle:(id)arg1 tokenOfDialogToTakeOver:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__sds_takeOverDialogWithHandle:(id)arg1 tokenOfDialogToTakeOver:(id)arg2;
- (_Bool)synchronous__sds_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)sds_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__sds_disposeWithHandle:(id)arg1;
- (id)synchronous__sds_createWithAppUuid:(id)arg1 error:(id *)arg2;
- (void)sds_createWithAppUuid:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__sds_createWithAppUuid:(id)arg1;
- (_Bool)synchronous__vrs_exportResultWithHandle:(id)arg1 seq:(id)arg2 success:(id)arg3 error:(id *)arg4;
- (void)vrs_exportResultWithHandle:(id)arg1 seq:(id)arg2 success:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__vrs_exportResultWithHandle:(id)arg1 seq:(id)arg2 success:(id)arg3;
- (_Bool)synchronous__vrs_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)vrs_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__vrs_disposeWithHandle:(id)arg1;
- (id)synchronous__vrs_createWitherror:(id *)arg1;
- (void)vrs_createWithcompletionHandler:(CDUnknownBlockType)arg1;
- (id)createMessage__vrs_createWith;
- (_Bool)synchronous__rcs_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)rcs_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__rcs_disposeWithHandle:(id)arg1;
- (_Bool)synchronous__rcs_headphoneControlWithHandle:(id)arg1 headphoneEnabled:(id)arg2 error:(id *)arg3;
- (void)rcs_headphoneControlWithHandle:(id)arg1 headphoneEnabled:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__rcs_headphoneControlWithHandle:(id)arg1 headphoneEnabled:(id)arg2;
- (_Bool)synchronous__rcs_playbackControlWithHandle:(id)arg1 state:(id)arg2 error:(id *)arg3;
- (void)rcs_playbackControlWithHandle:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__rcs_playbackControlWithHandle:(id)arg1 state:(id)arg2;
- (_Bool)synchronous__rcs_playlistControlWithHandle:(id)arg1 cmd:(id)arg2 index:(id)arg3 error:(id *)arg4;
- (void)rcs_playlistControlWithHandle:(id)arg1 cmd:(id)arg2 index:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__rcs_playlistControlWithHandle:(id)arg1 cmd:(id)arg2 index:(id)arg3;
- (_Bool)synchronous__rcs_entSourceControlWithHandle:(id)arg1 entId:(id)arg2 entName:(id)arg3 playable:(id)arg4 upnp:(id)arg5 error:(id *)arg6;
- (void)rcs_entSourceControlWithHandle:(id)arg1 entId:(id)arg2 entName:(id)arg3 playable:(id)arg4 upnp:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)createMessage__rcs_entSourceControlWithHandle:(id)arg1 entId:(id)arg2 entName:(id)arg3 playable:(id)arg4 upnp:(id)arg5;
- (_Bool)synchronous__rcs_muteWithHandle:(id)arg1 mute:(id)arg2 error:(id *)arg3;
- (void)rcs_muteWithHandle:(id)arg1 mute:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__rcs_muteWithHandle:(id)arg1 mute:(id)arg2;
- (_Bool)synchronous__rcs_skipWithHandle:(id)arg1 skip:(id)arg2 error:(id *)arg3;
- (void)rcs_skipWithHandle:(id)arg1 skip:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__rcs_skipWithHandle:(id)arg1 skip:(id)arg2;
- (_Bool)synchronous__rcs_coordsWithHandle:(id)arg1 eventId1:(id)arg2 x1:(id)arg3 y1:(id)arg4 eventId2:(id)arg5 x2:(id)arg6 y2:(id)arg7 time:(id)arg8 error:(id *)arg9;
- (void)rcs_coordsWithHandle:(id)arg1 eventId1:(id)arg2 x1:(id)arg3 y1:(id)arg4 eventId2:(id)arg5 x2:(id)arg6 y2:(id)arg7 time:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)createMessage__rcs_coordsWithHandle:(id)arg1 eventId1:(id)arg2 x1:(id)arg3 y1:(id)arg4 eventId2:(id)arg5 x2:(id)arg6 y2:(id)arg7 time:(id)arg8;
- (_Bool)synchronous__rcs_volumeWithHandle:(id)arg1 vol:(id)arg2 error:(id *)arg3;
- (void)rcs_volumeWithHandle:(id)arg1 vol:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__rcs_volumeWithHandle:(id)arg1 vol:(id)arg2;
- (_Bool)synchronous__rcs_buttonWithHandle:(id)arg1 b1:(id)arg2 b2:(id)arg3 b3:(id)arg4 b4:(id)arg5 b5:(id)arg6 b6:(id)arg7 b7:(id)arg8 error:(id *)arg9;
- (void)rcs_buttonWithHandle:(id)arg1 b1:(id)arg2 b2:(id)arg3 b3:(id)arg4 b4:(id)arg5 b5:(id)arg6 b6:(id)arg7 b7:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)createMessage__rcs_buttonWithHandle:(id)arg1 b1:(id)arg2 b2:(id)arg3 b3:(id)arg4 b4:(id)arg5 b5:(id)arg6 b6:(id)arg7 b7:(id)arg8;
- (_Bool)synchronous__rcs_rotaryWithHandle:(id)arg1 pos:(id)arg2 accelOn:(id)arg3 overflow:(id)arg4 tilt:(id)arg5 push:(id)arg6 error:(id *)arg7;
- (void)rcs_rotaryWithHandle:(id)arg1 pos:(id)arg2 accelOn:(id)arg3 overflow:(id)arg4 tilt:(id)arg5 push:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)createMessage__rcs_rotaryWithHandle:(id)arg1 pos:(id)arg2 accelOn:(id)arg3 overflow:(id)arg4 tilt:(id)arg5 push:(id)arg6;
- (_Bool)synchronous__rcs_lockWithHandle:(id)arg1 error:(id *)arg2;
- (void)rcs_lockWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__rcs_lockWithHandle:(id)arg1;
- (id)synchronous__rcs_createWitherror:(id *)arg1;
- (void)rcs_createWithcompletionHandler:(CDUnknownBlockType)arg1;
- (id)createMessage__rcs_createWith;
- (_Bool)synchronous__vds_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)vds_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__vds_disposeWithHandle:(id)arg1;
- (_Bool)synchronous__vds_respondWithHandle:(id)arg1 type:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (void)vds_respondWithHandle:(id)arg1 type:(id)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__vds_respondWithHandle:(id)arg1 type:(id)arg2 data:(id)arg3;
- (id)synchronous__vds_createWitherror:(id *)arg1;
- (void)vds_createWithcompletionHandler:(CDUnknownBlockType)arg1;
- (id)createMessage__vds_createWith;
- (_Bool)synchronous__rm_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)rm_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__rm_disposeWithHandle:(id)arg1;
- (id)synchronous__rm_getSummaryWithHandle:(id)arg1 error:(id *)arg2;
- (void)rm_getSummaryWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__rm_getSummaryWithHandle:(id)arg1;
- (id)synchronous__rm_createWitherror:(id *)arg1;
- (void)rm_createWithcompletionHandler:(CDUnknownBlockType)arg1;
- (id)createMessage__rm_createWith;
- (_Bool)synchronous__map_finalizeImportWithHandle:(id)arg1 transferId:(id)arg2 error:(id *)arg3;
- (void)map_finalizeImportWithHandle:(id)arg1 transferId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__map_finalizeImportWithHandle:(id)arg1 transferId:(id)arg2;
- (_Bool)synchronous__map_abortImportWithHandle:(id)arg1 transferId:(id)arg2 reason:(id)arg3 error:(id *)arg4;
- (void)map_abortImportWithHandle:(id)arg1 transferId:(id)arg2 reason:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__map_abortImportWithHandle:(id)arg1 transferId:(id)arg2 reason:(id)arg3;
- (_Bool)synchronous__map_importDataWithHandle:(id)arg1 transferId:(id)arg2 seq:(id)arg3 data:(id)arg4 error:(id *)arg5;
- (void)map_importDataWithHandle:(id)arg1 transferId:(id)arg2 seq:(id)arg3 data:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__map_importDataWithHandle:(id)arg1 transferId:(id)arg2 seq:(id)arg3 data:(id)arg4;
- (id)synchronous__map_initializeImportWithHandle:(id)arg1 transferId:(id)arg2 filename:(id)arg3 size:(id)arg4 error:(id *)arg5;
- (void)map_initializeImportWithHandle:(id)arg1 transferId:(id)arg2 filename:(id)arg3 size:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__map_initializeImportWithHandle:(id)arg1 transferId:(id)arg2 filename:(id)arg3 size:(id)arg4;
- (_Bool)synchronous__map_setModeWithHandle:(id)arg1 mode:(id)arg2 error:(id *)arg3;
- (void)map_setModeWithHandle:(id)arg1 mode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__map_setModeWithHandle:(id)arg1 mode:(id)arg2;
- (_Bool)synchronous__map_removeWithHandle:(id)arg1 filename:(id)arg2 error:(id *)arg3;
- (void)map_removeWithHandle:(id)arg1 filename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__map_removeWithHandle:(id)arg1 filename:(id)arg2;
- (_Bool)synchronous__map_hideOverlayWithHandle:(id)arg1 filename:(id)arg2 overlayId:(id)arg3 error:(id *)arg4;
- (void)map_hideOverlayWithHandle:(id)arg1 filename:(id)arg2 overlayId:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__map_hideOverlayWithHandle:(id)arg1 filename:(id)arg2 overlayId:(id)arg3;
- (_Bool)synchronous__map_showOverlayWithHandle:(id)arg1 filename:(id)arg2 overlayId:(id)arg3 error:(id *)arg4;
- (void)map_showOverlayWithHandle:(id)arg1 filename:(id)arg2 overlayId:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__map_showOverlayWithHandle:(id)arg1 filename:(id)arg2 overlayId:(id)arg3;
- (_Bool)synchronous__map_highlightWithHandle:(id)arg1 filename:(id)arg2 overlayId:(id)arg3 location:(id)arg4 error:(id *)arg5;
- (void)map_highlightWithHandle:(id)arg1 filename:(id)arg2 overlayId:(id)arg3 location:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__map_highlightWithHandle:(id)arg1 filename:(id)arg2 overlayId:(id)arg3 location:(id)arg4;
- (_Bool)synchronous__map_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)map_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__map_disposeWithHandle:(id)arg1;
- (id)synchronous__map_createWitherror:(id *)arg1;
- (void)map_createWithcompletionHandler:(CDUnknownBlockType)arg1;
- (id)createMessage__map_createWith;
- (_Bool)synchronous__pia_exportResultWithHandle:(id)arg1 success:(id)arg2 error:(id *)arg3;
- (void)pia_exportResultWithHandle:(id)arg1 success:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__pia_exportResultWithHandle:(id)arg1 success:(id)arg2;
- (_Bool)synchronous__pia_importWithHandle:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (void)pia_importWithHandle:(id)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__pia_importWithHandle:(id)arg1 data:(id)arg2;
- (_Bool)synchronous__pia_requestWithHandle:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (void)pia_requestWithHandle:(id)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__pia_requestWithHandle:(id)arg1 data:(id)arg2;
- (_Bool)synchronous__pia_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)pia_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__pia_disposeWithHandle:(id)arg1;
- (id)synchronous__pia_createWithToken:(id)arg1 deviceId:(id)arg2 error:(id *)arg3;
- (void)pia_createWithToken:(id)arg1 deviceId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__pia_createWithToken:(id)arg1 deviceId:(id)arg2;
- (id)synchronous__diag_perf_endWitherror:(id *)arg1;
- (void)diag_perf_endWithcompletionHandler:(CDUnknownBlockType)arg1;
- (id)createMessage__diag_perf_endWith;
- (_Bool)synchronous__diag_perf_twowayWithData:(id)arg1 error:(id *)arg2;
- (void)diag_perf_twowayWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__diag_perf_twowayWithData:(id)arg1;
- (_Bool)synchronous__diag_perf_onewayWithData:(id)arg1 error:(id *)arg2;
- (void)diag_perf_onewayWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__diag_perf_onewayWithData:(id)arg1;
- (_Bool)synchronous__diag_perf_startWithMode:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (void)diag_perf_startWithMode:(id)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__diag_perf_startWithMode:(id)arg1 data:(id)arg2;
- (id)synchronous__diag_echoWithData:(id)arg1 mode:(id)arg2 parameter:(id)arg3 error:(id *)arg4;
- (void)diag_echoWithData:(id)arg1 mode:(id)arg2 parameter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__diag_echoWithData:(id)arg1 mode:(id)arg2 parameter:(id)arg3;
- (_Bool)synchronous__log_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)log_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__log_disposeWithHandle:(id)arg1;
- (_Bool)synchronous__log_logWithHandle:(id)arg1 level:(id)arg2 message:(id)arg3 error:(id *)arg4;
- (void)log_logWithHandle:(id)arg1 level:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__log_logWithHandle:(id)arg1 level:(id)arg2 message:(id)arg3;
- (id)synchronous__log_createWithToken:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (void)log_createWithToken:(id)arg1 name:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__log_createWithToken:(id)arg1 name:(id)arg2;
- (_Bool)synchronous__voice_stopSessionWithHandle:(id)arg1 error:(id *)arg2;
- (void)voice_stopSessionWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__voice_stopSessionWithHandle:(id)arg1;
- (_Bool)synchronous__voice_requestSessionWithHandle:(id)arg1 priority:(id)arg2 filterType:(id)arg3 error:(id *)arg4;
- (void)voice_requestSessionWithHandle:(id)arg1 priority:(id)arg2 filterType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__voice_requestSessionWithHandle:(id)arg1 priority:(id)arg2 filterType:(id)arg3;
- (_Bool)synchronous__voice_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)voice_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__voice_disposeWithHandle:(id)arg1;
- (id)synchronous__voice_createWithDeviceId:(id)arg1 bluetoothAddress:(id)arg2 error:(id *)arg3;
- (void)voice_createWithDeviceId:(id)arg1 bluetoothAddress:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__voice_createWithDeviceId:(id)arg1 bluetoothAddress:(id)arg2;
- (_Bool)synchronous__av_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)av_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__av_disposeWithHandle:(id)arg1;
- (_Bool)synchronous__av_closeConnectionWithHandle:(id)arg1 connectionType:(id)arg2 error:(id *)arg3;
- (void)av_closeConnectionWithHandle:(id)arg1 connectionType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__av_closeConnectionWithHandle:(id)arg1 connectionType:(id)arg2;
- (_Bool)synchronous__av_playerStateChangedWithHandle:(id)arg1 connectionType:(id)arg2 playerState:(id)arg3 error:(id *)arg4;
- (void)av_playerStateChangedWithHandle:(id)arg1 connectionType:(id)arg2 playerState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__av_playerStateChangedWithHandle:(id)arg1 connectionType:(id)arg2 playerState:(id)arg3;
- (_Bool)synchronous__av_requestConnectionWithHandle:(id)arg1 connectionType:(id)arg2 error:(id *)arg3;
- (void)av_requestConnectionWithHandle:(id)arg1 connectionType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__av_requestConnectionWithHandle:(id)arg1 connectionType:(id)arg2;
- (id)synchronous__av_createWithToken:(id)arg1 instanceID:(id)arg2 id:(id)arg3 error:(id *)arg4;
- (void)av_createWithToken:(id)arg1 instanceID:(id)arg2 id:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__av_createWithToken:(id)arg1 instanceID:(id)arg2 id:(id)arg3;
- (_Bool)synchronous__cds_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)cds_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__cds_disposeWithHandle:(id)arg1;
- (_Bool)synchronous__cds_removePropertyChangedEventHandlerWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 error:(id *)arg4;
- (void)cds_removePropertyChangedEventHandlerWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__cds_removePropertyChangedEventHandlerWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3;
- (_Bool)synchronous__cds_addPropertyChangedEventHandlerWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 intervalLimit:(id)arg4 error:(id *)arg5;
- (void)cds_addPropertyChangedEventHandlerWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 intervalLimit:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__cds_addPropertyChangedEventHandlerWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 intervalLimit:(id)arg4;
- (_Bool)synchronous__cds_setPropertyBinaryAsyncWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 propertyValue:(id)arg4 propertyBinaryValue:(id)arg5 error:(id *)arg6;
- (void)cds_setPropertyBinaryAsyncWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 propertyValue:(id)arg4 propertyBinaryValue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)createMessage__cds_setPropertyBinaryAsyncWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 propertyValue:(id)arg4 propertyBinaryValue:(id)arg5;
- (_Bool)synchronous__cds_setPropertyAsyncWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 propertyValue:(id)arg4 error:(id *)arg5;
- (void)cds_setPropertyAsyncWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 propertyValue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__cds_setPropertyAsyncWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 propertyValue:(id)arg4;
- (_Bool)synchronous__cds_getPropertyAsyncWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 error:(id *)arg4;
- (void)cds_getPropertyAsyncWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__cds_getPropertyAsyncWithHandle:(id)arg1 propertyName:(id)arg2 ident:(id)arg3;
- (id)synchronous__cds_getVersionWitherror:(id *)arg1;
- (void)cds_getVersionWithcompletionHandler:(CDUnknownBlockType)arg1;
- (id)createMessage__cds_getVersionWith;
- (id)synchronous__cds_createWithToken:(id)arg1 error:(id *)arg2;
- (void)cds_createWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__cds_createWithToken:(id)arg1;
- (_Bool)synchronous__am_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)am_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__am_disposeWithHandle:(id)arg1;
- (_Bool)synchronous__am_removeAppEventHandlerWithHandle:(id)arg1 ident:(id)arg2 error:(id *)arg3;
- (void)am_removeAppEventHandlerWithHandle:(id)arg1 ident:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__am_removeAppEventHandlerWithHandle:(id)arg1 ident:(id)arg2;
- (_Bool)synchronous__am_addAppEventHandlerWithHandle:(id)arg1 ident:(id)arg2 error:(id *)arg3;
- (void)am_addAppEventHandlerWithHandle:(id)arg1 ident:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__am_addAppEventHandlerWithHandle:(id)arg1 ident:(id)arg2;
- (_Bool)synchronous__am_showLoadingFailHintWithHandle:(id)arg1 error:(id *)arg2;
- (void)am_showLoadingFailHintWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__am_showLoadingFailHintWithHandle:(id)arg1;
- (_Bool)synchronous__am_showLoadedSuccessHintWithHandle:(id)arg1 error:(id *)arg2;
- (void)am_showLoadedSuccessHintWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__am_showLoadedSuccessHintWithHandle:(id)arg1;
- (_Bool)synchronous__am_showLoadingHintWithHandle:(id)arg1 error:(id *)arg2;
- (void)am_showLoadingHintWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__am_showLoadingHintWithHandle:(id)arg1;
- (_Bool)synchronous__am_registerAppWithHandle:(id)arg1 appId:(id)arg2 values:(id)arg3 error:(id *)arg4;
- (void)am_registerAppWithHandle:(id)arg1 appId:(id)arg2 values:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__am_registerAppWithHandle:(id)arg1 appId:(id)arg2 values:(id)arg3;
- (id)synchronous__am_createWithDeviceId:(id)arg1 bluetoothAddress:(id)arg2 error:(id *)arg3;
- (void)am_createWithDeviceId:(id)arg1 bluetoothAddress:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__am_createWithDeviceId:(id)arg1 bluetoothAddress:(id)arg2;
- (id)synchronous__persist_checkPresistentResourcesWithType:(id)arg1 error:(id *)arg2;
- (void)persist_checkPresistentResourcesWithType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__persist_checkPresistentResourcesWithType:(id)arg1;
- (_Bool)synchronous__persist_setResourceWithType:(id)arg1 resourceId:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (void)persist_setResourceWithType:(id)arg1 resourceId:(id)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__persist_setResourceWithType:(id)arg1 resourceId:(id)arg2 data:(id)arg3;
- (_Bool)synchronous__rhmi_disposeWithHandle:(id)arg1 error:(id *)arg2;
- (void)rhmi_disposeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__rhmi_disposeWithHandle:(id)arg1;
- (_Bool)synchronous__rhmi_triggerEventWithHandle:(id)arg1 eventId:(id)arg2 args:(id)arg3 error:(id *)arg4;
- (void)rhmi_triggerEventWithHandle:(id)arg1 eventId:(id)arg2 args:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__rhmi_triggerEventWithHandle:(id)arg1 eventId:(id)arg2 args:(id)arg3;
- (_Bool)synchronous__rhmi_removeHmiEventHandlerWithHandle:(id)arg1 componentId:(id)arg2 eventId:(id)arg3 ident:(id)arg4 error:(id *)arg5;
- (void)rhmi_removeHmiEventHandlerWithHandle:(id)arg1 componentId:(id)arg2 eventId:(id)arg3 ident:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__rhmi_removeHmiEventHandlerWithHandle:(id)arg1 componentId:(id)arg2 eventId:(id)arg3 ident:(id)arg4;
- (_Bool)synchronous__rhmi_addHmiEventHandlerWithHandle:(id)arg1 componentId:(id)arg2 eventId:(id)arg3 ident:(id)arg4 error:(id *)arg5;
- (void)rhmi_addHmiEventHandlerWithHandle:(id)arg1 componentId:(id)arg2 eventId:(id)arg3 ident:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__rhmi_addHmiEventHandlerWithHandle:(id)arg1 componentId:(id)arg2 eventId:(id)arg3 ident:(id)arg4;
- (_Bool)synchronous__rhmi_ackActionEventWithHandle:(id)arg1 actionId:(id)arg2 confirmId:(id)arg3 success:(id)arg4 error:(id *)arg5;
- (void)rhmi_ackActionEventWithHandle:(id)arg1 actionId:(id)arg2 confirmId:(id)arg3 success:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__rhmi_ackActionEventWithHandle:(id)arg1 actionId:(id)arg2 confirmId:(id)arg3 success:(id)arg4;
- (_Bool)synchronous__rhmi_removeActionEventHandlerWithHandle:(id)arg1 actionId:(id)arg2 ident:(id)arg3 error:(id *)arg4;
- (void)rhmi_removeActionEventHandlerWithHandle:(id)arg1 actionId:(id)arg2 ident:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__rhmi_removeActionEventHandlerWithHandle:(id)arg1 actionId:(id)arg2 ident:(id)arg3;
- (_Bool)synchronous__rhmi_addActionEventHandlerWithHandle:(id)arg1 actionId:(id)arg2 ident:(id)arg3 error:(id *)arg4;
- (void)rhmi_addActionEventHandlerWithHandle:(id)arg1 actionId:(id)arg2 ident:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__rhmi_addActionEventHandlerWithHandle:(id)arg1 actionId:(id)arg2 ident:(id)arg3;
- (_Bool)synchronous__rhmi_setDataWithHandle:(id)arg1 modelId:(id)arg2 value:(id)arg3 error:(id *)arg4;
- (void)rhmi_setDataWithHandle:(id)arg1 modelId:(id)arg2 value:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__rhmi_setDataWithHandle:(id)arg1 modelId:(id)arg2 value:(id)arg3;
- (_Bool)synchronous__rhmi_setPropertyWithHandle:(id)arg1 componentId:(id)arg2 propertyId:(id)arg3 values:(id)arg4 error:(id *)arg5;
- (void)rhmi_setPropertyWithHandle:(id)arg1 componentId:(id)arg2 propertyId:(id)arg3 values:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)createMessage__rhmi_setPropertyWithHandle:(id)arg1 componentId:(id)arg2 propertyId:(id)arg3 values:(id)arg4;
- (id)synchronous__rhmi_getStateWithHandle:(id)arg1 error:(id *)arg2;
- (void)rhmi_getStateWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__rhmi_getStateWithHandle:(id)arg1;
- (_Bool)synchronous__rhmi_setStateWithHandle:(id)arg1 state:(id)arg2 error:(id *)arg3;
- (void)rhmi_setStateWithHandle:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__rhmi_setStateWithHandle:(id)arg1 state:(id)arg2;
- (_Bool)synchronous__rhmi_initializeWithHandle:(id)arg1 error:(id *)arg2;
- (void)rhmi_initializeWithHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__rhmi_initializeWithHandle:(id)arg1;
- (_Bool)synchronous__rhmi_setResourceWithHandle:(id)arg1 type:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (void)rhmi_setResourceWithHandle:(id)arg1 type:(id)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__rhmi_setResourceWithHandle:(id)arg1 type:(id)arg2 data:(id)arg3;
- (id)synchronous__rhmi_checkResourceWithHandle:(id)arg1 type:(id)arg2 name:(id)arg3 size:(id)arg4 hash:(id)arg5 error:(id *)arg6;
- (void)rhmi_checkResourceWithHandle:(id)arg1 type:(id)arg2 name:(id)arg3 size:(id)arg4 hash:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)createMessage__rhmi_checkResourceWithHandle:(id)arg1 type:(id)arg2 name:(id)arg3 size:(id)arg4 hash:(id)arg5;
- (id)synchronous__rhmi_getCapabilitiesWithHandle:(id)arg1 component:(id)arg2 error:(id *)arg3;
- (void)rhmi_getCapabilitiesWithHandle:(id)arg1 component:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__rhmi_getCapabilitiesWithHandle:(id)arg1 component:(id)arg2;
- (id)synchronous__rhmi_createWithToken:(id)arg1 metaData:(id)arg2 error:(id *)arg3;
- (void)rhmi_createWithToken:(id)arg1 metaData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__rhmi_createWithToken:(id)arg1 metaData:(id)arg2;
- (id)synchronous__rhmi_create_versionWithToken:(id)arg1 rhmiVersion:(id)arg2 metaData:(id)arg3 error:(id *)arg4;
- (void)rhmi_create_versionWithToken:(id)arg1 rhmiVersion:(id)arg2 metaData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createMessage__rhmi_create_versionWithToken:(id)arg1 rhmiVersion:(id)arg2 metaData:(id)arg3;
- (_Bool)synchronous__sas_logoutWithToken:(id)arg1 error:(id *)arg2;
- (void)sas_logoutWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__sas_logoutWithToken:(id)arg1;
- (id)synchronous__sas_permissionWithToken:(id)arg1 key:(id)arg2 error:(id *)arg3;
- (void)sas_permissionWithToken:(id)arg1 key:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__sas_permissionWithToken:(id)arg1 key:(id)arg2;
- (id)synchronous__sas_loginWithData:(id)arg1 version:(id)arg2 error:(id *)arg3;
- (void)sas_loginWithData:(id)arg1 version:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMessage__sas_loginWithData:(id)arg1 version:(id)arg2;
- (id)synchronous__sas_certificateWithData:(id)arg1 error:(id *)arg2;
- (void)sas_certificateWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__sas_certificateWithData:(id)arg1;
- (_Bool)synchronous__sas_crlWithData:(id)arg1 error:(id *)arg2;
- (void)sas_crlWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__sas_crlWithData:(id)arg1;
- (id)synchronous__info_getSystemInfoWithComponent:(id)arg1 error:(id *)arg2;
- (void)info_getSystemInfoWithComponent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMessage__info_getSystemInfoWithComponent:(id)arg1;
- (id)synchronous__ver_getVersionWitherror:(id *)arg1;
- (void)ver_getVersionWithcompletionHandler:(CDUnknownBlockType)arg1;
- (id)createMessage__ver_getVersionWith;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 url:(id)arg3 settings:(id)arg4;

@end

