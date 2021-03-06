//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTVoiceLibraryAudioRecorder;

@protocol SPTVoiceLibraryAudioRecorderDelegate <NSObject>
- (void)audioRecorder:(id <SPTVoiceLibraryAudioRecorder>)arg1 didFailWithError:(NSError *)arg2;
- (void)audioRecorder:(id <SPTVoiceLibraryAudioRecorder>)arg1 didRecordAudioChunk:(short **)arg2 ofSize:(unsigned int)arg3;
- (void)audioRecorderDidStartRecording:(id <SPTVoiceLibraryAudioRecorder>)arg1;

@optional
- (void)audioRecorder:(id <SPTVoiceLibraryAudioRecorder>)arg1 didChangeMeanAudioLevel:(float)arg2 rmsAudioLevel:(float)arg3;
@end

