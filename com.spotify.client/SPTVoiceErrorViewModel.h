//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceSessionObserver-Protocol.h"

@class NSString, NSTimer, SPTVoiceSessionPresentationOptions;
@protocol SPTVoiceCommandAudioCuePlayer, SPTVoiceErrorViewModelDelegate, SPTVoiceErrorViewModelPresentationDelegate, SPTVoiceLoggerProtocol, SPTVoiceSession;

@interface SPTVoiceErrorViewModel : NSObject <SPTVoiceSessionObserver>
{
    _Bool _okButtonHidden;
    _Bool _automaticDismissal;
    _Bool _microphoneButtonHidden;
    id <SPTVoiceErrorViewModelDelegate> _delegate;
    id <SPTVoiceErrorViewModelPresentationDelegate> _presentationDelegate;
    NSString *_headerLabelText;
    NSString *_bodyLabelText;
    NSString *_okButtonText;
    id <SPTVoiceSession> _voiceSession;
    SPTVoiceSessionPresentationOptions *_options;
    id <SPTVoiceCommandAudioCuePlayer> _audioCuePlayer;
    id <SPTVoiceLoggerProtocol> _logger;
    NSTimer *_automaticDismissalTimer;
    double _dismissalTime;
}

@property(nonatomic, setter=setDismissalTime:) double dismissalTime; // @synthesize dismissalTime=_dismissalTime;
@property(retain, nonatomic) NSTimer *automaticDismissalTimer; // @synthesize automaticDismissalTimer=_automaticDismissalTimer;
@property(readonly, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTVoiceCommandAudioCuePlayer> audioCuePlayer; // @synthesize audioCuePlayer=_audioCuePlayer;
@property(readonly, nonatomic) SPTVoiceSessionPresentationOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <SPTVoiceSession> voiceSession; // @synthesize voiceSession=_voiceSession;
@property(readonly, nonatomic) _Bool microphoneButtonHidden; // @synthesize microphoneButtonHidden=_microphoneButtonHidden;
@property(readonly, nonatomic) _Bool automaticDismissal; // @synthesize automaticDismissal=_automaticDismissal;
@property(readonly, nonatomic) NSString *okButtonText; // @synthesize okButtonText=_okButtonText;
@property(readonly, nonatomic) _Bool okButtonHidden; // @synthesize okButtonHidden=_okButtonHidden;
@property(readonly, nonatomic) NSString *bodyLabelText; // @synthesize bodyLabelText=_bodyLabelText;
@property(readonly, nonatomic) NSString *headerLabelText; // @synthesize headerLabelText=_headerLabelText;
@property(nonatomic) __weak id <SPTVoiceErrorViewModelPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) __weak id <SPTVoiceErrorViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logError:(id)arg1 utteranceId:(id)arg2;
- (void)voiceSession:(id)arg1 didFailVoiceCommand:(id)arg2 withError:(id)arg3;
- (void)voiceSessionWillStartListening:(id)arg1;
- (void)dismissalTimeoutFired;
- (void)cancelAutomaticDismissalTimer;
- (void)startAutomaticDismissalTimer;
- (void)updateWithErrorType:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)didTapCloseButton;
- (void)didTapOkButton;
- (void)didTapMicButton;
- (void)startListening;
- (void)didDisappear;
- (void)didAppear;
- (id)initWithSession:(id)arg1 audioCuePlayer:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

