//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC14VoiceUIFeature26VoiceLibrarySessionHandler.h"

#import "SPTVoiceLibrarySessionObserver-Protocol.h"

@interface _TtC14VoiceUIFeature26VoiceLibrarySessionHandler (VoiceUIFeature) <SPTVoiceLibrarySessionObserver>
- (void)voiceSession:(id)arg1 didUpdateMeanAudioLevel:(float)arg2 rmsAudioLevel:(float)arg3;
- (void)voiceSession:(id)arg1 didReceiveFinalResponse:(id)arg2;
- (void)voiceSession:(id)arg1 didUpdateIntermediateResponse:(id)arg2;
- (void)voiceSession:(id)arg1 didFailWithError:(id)arg2;
- (void)voiceSessionDidStartListening:(id)arg1;
@end

