//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTVoiceAudioRecorder;

@protocol SPTVoiceAudioRecorderDelegate <NSObject>
- (void)audioRecorder:(id <SPTVoiceAudioRecorder>)arg1 didFailWithError:(NSError *)arg2;
- (void)audioRecorder:(id <SPTVoiceAudioRecorder>)arg1 didRecordAudioChunk:(void *)arg2 ofSize:(unsigned int)arg3;
- (void)audioRecorderDidStartRecording:(id <SPTVoiceAudioRecorder>)arg1;

@optional
- (void)audioRecorder:(id <SPTVoiceAudioRecorder>)arg1 didChangeMeanAudioLevel:(float)arg2 peakLevel:(float)arg3;
@end

