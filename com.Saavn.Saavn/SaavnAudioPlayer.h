//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioFile, AVAudioPlayerNode, SaavnAudioEngine;

@interface SaavnAudioPlayer : NSObject
{
    SaavnAudioEngine *_engine;
    AVAudioFile *_file;
    _Bool _finishedPlaying;
    long long songLengthInSamples;
    double songSampleRate;
    double songPositionInSeconds;
    double songLengthInSeconds;
    double lastPlayedTimestamp;
    _Bool _playing;
    _Bool _prefetchedFile;
    float _rate;
    AVAudioPlayerNode *_player;
    AVAudioFile *_audioFile;
    double _duration;
}

@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic, getter=hasPrefetchedFile) _Bool prefetchedFile; // @synthesize prefetchedFile=_prefetchedFile;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) AVAudioFile *audioFile; // @synthesize audioFile=_audioFile;
@property(retain) AVAudioPlayerNode *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)updateFilePosition:(double)arg1 continuePlaying:(_Bool)arg2;
- (void)setVolume:(double)arg1;
@property(nonatomic) double currentPlayerTime;
- (void)pause;
- (void)stop;
- (void)play;
- (void)reset;
- (id)playFile:(id)arg1;
- (void)scheduleFile:(id)arg1;
- (id)initWithEngine:(id)arg1;

@end
