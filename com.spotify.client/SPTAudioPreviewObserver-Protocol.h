//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTAudioPreview;

@protocol SPTAudioPreviewObserver <NSObject>

@optional
- (void)audioSampleDidChangeVolume:(SPTAudioPreview *)arg1;
- (void)audioSampleDidStopPlaying:(SPTAudioPreview *)arg1;
- (void)audioSampleDidStartPlaying:(SPTAudioPreview *)arg1;
- (void)audioSampleWillStartPlaying:(SPTAudioPreview *)arg1;
@end

