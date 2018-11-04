//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, SPTVoiceCommand;

@protocol SPTVoiceSessionObserver <NSObject>

@optional
- (void)voiceSessionDidSendFirstAudioData:(id <SPTVoiceSession>)arg1;
- (void)voiceSession:(id <SPTVoiceSession>)arg1 didUpdateQuerySuggestion:(NSString *)arg2;
- (void)voiceSession:(id <SPTVoiceSession>)arg1 didUpdateMeanAudioLevel:(double)arg2 peakAudioLevel:(double)arg3;
- (void)voiceSession:(id <SPTVoiceSession>)arg1 didFailVoiceCommand:(SPTVoiceCommand *)arg2 withError:(NSError *)arg3;
- (void)voiceSession:(id <SPTVoiceSession>)arg1 didHandleVoiceCommand:(SPTVoiceCommand *)arg2;
- (void)voiceSession:(id <SPTVoiceSession>)arg1 didReceiveVoiceCommand:(SPTVoiceCommand *)arg2;
- (void)voiceSessionDidReceiveFinalTranscription:(id <SPTVoiceSession>)arg1;
- (void)voiceSessionDidReceiveEndOfSpeech:(id <SPTVoiceSession>)arg1;
- (void)voiceSession:(id <SPTVoiceSession>)arg1 didUpdateTranscriptText:(NSString *)arg2;
- (void)voiceSessionDidStopListening:(id <SPTVoiceSession>)arg1;
- (void)voiceSessionDidStartListening:(id <SPTVoiceSession>)arg1;
- (void)voiceSessionWillStartListening:(id <SPTVoiceSession>)arg1;
@end

