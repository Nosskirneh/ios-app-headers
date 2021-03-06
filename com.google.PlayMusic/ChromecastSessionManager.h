//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CastSessionManager.h"

#import "GCKDeviceManagerDelegate-Protocol.h"
#import "GCKLoggerDelegate-Protocol.h"
#import "GPMCloudQueueSessionChangeDelegate-Protocol.h"

@class CastMessageStream, CloudQueueMessageStream, GCKDeviceManager, GPMEventLogger, GPMServiceConfiguration, MusicPreferences, NSString, NSTimer;
@protocol GOOHUDSuspensionToken;

@interface ChromecastSessionManager : CastSessionManager <GCKDeviceManagerDelegate, GCKLoggerDelegate, GPMCloudQueueSessionChangeDelegate>
{
    NSString *_castAppID;
    NSTimer *_attemptReconnectionTimer;
    id <GOOHUDSuspensionToken> _reconnectingHUDSuspensionToken;
    CloudQueueMessageStream *_cloudQueueMessageStream;
    CastMessageStream *_messageStream;
    GCKDeviceManager *_deviceManager;
    GPMServiceConfiguration *_serviceConfiguration;
    MusicPreferences *_musicPreferences;
    GPMEventLogger *_eventLogger;
}

+ (id)castAppID;
- (void).cxx_destruct;
- (void)handleAttemptReconnectionTimeout:(id)arg1;
- (void)stopAttemptReconnectionTimeout:(id)arg1;
- (void)startAttemptReconnectionTimeoutObserver;
- (void)showAttemptReconnectionHUD;
- (void)handleAppWillEnterForeground:(id)arg1;
- (void)handleAppDidEnterBackground:(id)arg1;
- (void)reset;
- (void)skipWoodstockTrack;
- (id)currentAsset;
- (double)currentTime;
- (unsigned long long)mediaPlayerState;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (_Bool)canSkipCurrentTrack;
- (void)playWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadAsset:(id)arg1 playPosition:(double)arg2 autoPlay:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)logFromFunction:(const char *)arg1 message:(id)arg2;
- (id)deviceID;
- (id)deviceName;
- (void)dealloc;
- (void)destroySession;
- (void)createSession;
- (void)didDisconnectFromCastDevice;
- (void)deviceManager:(id)arg1 volumeDidChangeToLevel:(float)arg2 isMuted:(_Bool)arg3;
- (void)deviceManager:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)deviceManager:(id)arg1 didFailToStopApplicationWithError:(id)arg2;
- (void)deviceManager:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)deviceManager:(id)arg1 didDisconnectFromApplicationWithError:(id)arg2;
- (void)deviceManager:(id)arg1 didFailToConnectToApplicationWithError:(id)arg2;
- (void)deviceManagerDidResumeConnection:(id)arg1 rejoinedApplication:(_Bool)arg2;
- (void)deviceManager:(id)arg1 didSuspendConnectionWithReason:(long long)arg2;
- (void)deviceManager:(id)arg1 didConnectToCastApplication:(id)arg2 sessionID:(id)arg3 launchedApplication:(_Bool)arg4;
- (void)deviceManagerDidConnect:(id)arg1;
- (void)didConnectToInvalidCloudQueueSession;
- (void)didDisconnectFromCloudQueueSession;
- (void)didConnectToExistingCloudQueueSession;
- (void)didConnectToNewCloudQueueSession;
- (void)createCastMessageStream;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)setupObservers;
- (id)initWithCloudQueueManager:(id)arg1 castSuspensionConfiguration:(id)arg2 serviceConfiguration:(id)arg3 musicPreferences:(id)arg4 eventLogger:(id)arg5 device:(id)arg6 audioSessionManager:(id)arg7;
- (id)initWithCloudQueueManager:(id)arg1 castSuspensionConfiguration:(id)arg2 audioSessionManager:(id)arg3;
- (id)init;
- (_Bool)isConnected;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

