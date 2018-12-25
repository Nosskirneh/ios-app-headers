//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSKAudioCaptureDelegate-Protocol.h"
#import "GSKRecognizerClient-Protocol.h"
#import "GSKSessionDelegate-Protocol.h"

@class GSKAudioSession, GSKEndpointer, GSKSpeechSessionConfig, GSKSpeexEncoder, NSDate, NSMutableArray, NSNumber, NSString, NSTimer;
@protocol GSKAudioCaptureInterface, GSKSpeechRecognizerDelegate;

@interface GSKSpeechRecognizerClient : NSObject <GSKAudioCaptureDelegate, GSKSessionDelegate, GSKRecognizerClient>
{
    id <GSKAudioCaptureInterface> _audioCapture;
    GSKAudioSession *_session;
    GSKSpeexEncoder *_encoder;
    GSKEndpointer *_endpointer;
    GSKSpeechSessionConfig *_config;
    NSDate *_captureStartDate;
    int _state;
    _Bool _hasPrimedConnection;
    _Bool _receivedEndOfSpeech;
    NSString *_recognitionResult;
    NSTimer *_endpointerTimeoutTimer;
    NSNumber *_endpointingGracePeriodInSeconds;
    NSTimer *_clientSideEndpointingGracePeriodTimer;
    _Bool _receivedDeviceSelectionDecision;
    NSMutableArray *_multiDeviceArbitrationEventBlocks;
    NSTimer *_deviceSelectionDecisionTimeoutTimer;
    id <GSKSpeechRecognizerDelegate> _delegate;
    double _minimumCaptureDuration;
}

@property(nonatomic) double minimumCaptureDuration; // @synthesize minimumCaptureDuration=_minimumCaptureDuration;
@property(nonatomic) id <GSKSpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleDeviceSelectionDecision:(id)arg1;
- (void)handleTtsServiceEvent:(id)arg1;
- (void)handlePinholeOutput:(id)arg1;
- (void)handleEndpointerEvent:(id)arg1;
- (void)handleRecognitionEvent:(id)arg1;
- (void)handleRecognizerEvent:(id)arg1;
- (void)sessionDidFinish:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didReceiveResponse:(id)arg2;
- (void)capture:(id)arg1 didFailToStartWithError:(id)arg2;
- (void)stopRecognitionByClientSideEndpointer;
- (void)clientSideEndpointingTimeoutTimerDidFire:(id)arg1;
- (void)stopClientSideEndpointingTimeoutTimer;
- (void)restartClientSideEndpointingTimeoutTimer;
- (void)capture:(id)arg1 didReceiveData:(id)arg2;
- (void)captureDidStop:(id)arg1;
- (void)captureDidStart:(id)arg1;
- (void)deviceSelectionDecisionTimeoutTimerDidFire:(id)arg1;
- (void)restartDeviceSelectionDecisionTimeoutTimer;
- (void)stopDeviceSelectionDecisionTimeoutTimer;
- (void)executeEventsWaitingForDeviceSelectionDecision;
- (void)scheduleEventOnMultiDeviceArbitrationQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)scheduleEventBlock:(CDUnknownBlockType)arg1;
- (_Bool)isMultiDeviceArbitrationEnabled;
- (void)endpointerTimeoutTimerDidFire:(id)arg1;
- (void)stopEndpointerTimeoutTimer;
- (void)restartEndpointerTimeoutTimer;
- (double)captureDuration;
- (float)audioInputLevel;
@property(readonly, nonatomic) _Bool isRecognizing;
@property(readonly, nonatomic) _Bool isCapturing;
@property(readonly, nonatomic) _Bool isIdle;
- (void)cancelRecognition;
- (void)stopRecognitionWithLogMetadata:(id)arg1;
- (void)stopRecognition;
- (void)startCapture;
- (_Bool)requiresRecognitionResult;
- (_Bool)isUsingServerSideEndpointer;
- (_Bool)isUsingClientEndpointer;
- (void)sendRequest:(id)arg1;
- (void)recognizeWithConfig:(id)arg1;
- (void)primeConnectionWithConfig:(id)arg1;
- (void)primeEndpointerWithAudioData:(id)arg1;
- (void)setSession:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAudioCapture:(id)arg1 endpointer:(id)arg2 encoder:(id)arg3 minimumCaptureDuration:(double)arg4 endpointingGracePeriod:(id)arg5;
- (id)initWithAudioCapture:(id)arg1 endpointingGracePeriod:(id)arg2;
- (id)initWithAudioCapture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
