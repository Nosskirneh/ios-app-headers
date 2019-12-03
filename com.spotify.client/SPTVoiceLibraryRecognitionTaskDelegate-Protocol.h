//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SPTVoiceLibraryFinalResponse, SPTVoiceLibraryIntermediateResponse, SPTVoiceLibraryRecognitionTask;

@protocol SPTVoiceLibraryRecognitionTaskDelegate <NSObject>
- (void)voiceRecognitionTask:(SPTVoiceLibraryRecognitionTask *)arg1 didUpdateMeanAudioLevel:(float)arg2 rmsAudioLevel:(float)arg3;
- (void)voiceRecognitionTask:(SPTVoiceLibraryRecognitionTask *)arg1 didUpdateIntermediateResponse:(SPTVoiceLibraryIntermediateResponse *)arg2;
- (void)voiceRecognitionTask:(SPTVoiceLibraryRecognitionTask *)arg1 didFailWithError:(NSError *)arg2;
- (void)voiceRecognitionTask:(SPTVoiceLibraryRecognitionTask *)arg1 didReceiveFinalResponse:(SPTVoiceLibraryFinalResponse *)arg2;
- (void)voiceRecognitionTaskDidStartListening:(SPTVoiceLibraryRecognitionTask *)arg1;
- (NSString *)provideUtteranceId;
@end

