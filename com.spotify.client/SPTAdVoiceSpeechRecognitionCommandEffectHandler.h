//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceSessionObserver-Protocol.h"

@class NSString;
@protocol SPTPlayer, SPTVoiceSession;

@interface SPTAdVoiceSpeechRecognitionCommandEffectHandler : NSObject <SPTVoiceSessionObserver>
{
    id <SPTVoiceSession> _voiceSession;
    id <SPTPlayer> _player;
    long long _intent;
    CDUnknownBlockType _eventSink;
}

@property(copy, nonatomic) CDUnknownBlockType eventSink; // @synthesize eventSink=_eventSink;
@property(nonatomic) long long intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTVoiceSession> voiceSession; // @synthesize voiceSession=_voiceSession;
- (void).cxx_destruct;
- (void)voiceSession:(id)arg1 didUpdateTranscriptText:(id)arg2;
- (void)voiceSession:(id)arg1 didFailVoiceCommand:(id)arg2 withError:(id)arg3;
- (void)voiceSession:(id)arg1 didReceiveVoiceCommand:(id)arg2;
- (void)voiceSessionWillStartListening:(id)arg1;
- (void)voiceSessionDidStopListening:(id)arg1;
- (void)handleEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)stopSpeechRecognition;
- (void)startSpeechRecognition;
- (void)dealloc;
- (id)initWithVoiceSession:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

