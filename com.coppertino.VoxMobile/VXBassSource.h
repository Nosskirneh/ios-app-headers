//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, VXBassHistogramBuilder, VXMatrix;
@protocol VXBassSourceDelegate;

@interface VXBassSource : NSObject
{
    unsigned int _sourceHandle;
    NSString *_trackMetaInfoString;
    unsigned int _fileEndSync;
    NSURL *_url;
    unsigned long long _bitrate;
    unsigned int fx_volume;
    unsigned int fx_eq_preamp;
    unsigned int fx_eq_gains;
    unsigned int dsp_bs2b;
    unsigned int dsp_bs2b_level;
    int fx_bs2b_priority;
    double _totalTimePlayed;
    double _lastPositionSetter;
    unsigned int crossFadeSync;
    CDStruct_d4a7b4c6 *dsp_bs2b_dp;
    _Bool playingWhenPossitionChanges;
    _Bool _tempoEnabled;
    _Bool _tempoIsTurntableStyle;
    _Bool _allowsParallelLoad;
    _Bool _isEndlessStream;
    _Bool _BS2BLastPriority;
    float _tempo;
    unsigned int _outputMixerStream;
    float _crossFadeTime;
    float _volume;
    float _getNextInterval;
    id <VXBassSourceDelegate> _delegate;
    NSURL *_originalUrl;
    VXMatrix *_mixerMatrix;
    double _downloadProgress;
    double _downloadStart;
    NSArray *_histogram;
    id _userInfo;
    double _startPosition;
    unsigned long long _BS2BPreset;
    VXBassHistogramBuilder *_histogramBuilder;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) VXBassHistogramBuilder *histogramBuilder; // @synthesize histogramBuilder=_histogramBuilder;
@property(nonatomic) _Bool BS2BLastPriority; // @synthesize BS2BLastPriority=_BS2BLastPriority;
@property(nonatomic) unsigned long long BS2BPreset; // @synthesize BS2BPreset=_BS2BPreset;
@property(nonatomic) double startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) _Bool isEndlessStream; // @synthesize isEndlessStream=_isEndlessStream;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) NSArray *histogram; // @synthesize histogram=_histogram;
@property(nonatomic) float getNextInterval; // @synthesize getNextInterval=_getNextInterval;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float crossFadeTime; // @synthesize crossFadeTime=_crossFadeTime;
@property(readonly, nonatomic) double downloadStart; // @synthesize downloadStart=_downloadStart;
@property(readonly, nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) VXMatrix *mixerMatrix; // @synthesize mixerMatrix=_mixerMatrix;
@property(nonatomic) unsigned int outputMixerStream; // @synthesize outputMixerStream=_outputMixerStream;
@property(retain, nonatomic) NSURL *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(nonatomic) _Bool allowsParallelLoad; // @synthesize allowsParallelLoad=_allowsParallelLoad;
@property(nonatomic) _Bool tempoIsTurntableStyle; // @synthesize tempoIsTurntableStyle=_tempoIsTurntableStyle;
@property(nonatomic) _Bool tempoEnabled; // @synthesize tempoEnabled=_tempoEnabled;
@property(nonatomic) float tempo; // @synthesize tempo=_tempo;
@property(nonatomic) __weak id <VXBassSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int sourceHandle; // @synthesize sourceHandle=_sourceHandle;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)fadeOutWithDuration:(float)arg1;
- (void)startHistogram;
- (id)_stringFromCTYPE:(unsigned int)arg1;
- (id)_coreAudioCodecString;
- (void)updateCrossFadeSync;
- (void)updateTempo;
- (void)destroyTempoStream;
- (void)createTempoStream;
- (void)disableBS2B;
- (void)enableBS2B;
- (float)dBToLinear:(float)arg1;
- (void)setEQGain:(float)arg1 band:(unsigned long long)arg2;
- (void)setEQPreamp:(float)arg1;
- (void)disableEQ;
- (void)enableEQWithPreamp:(float)arg1 Gains:(id)arg2;
- (void)setChannelsPan:(float)arg1;
- (void)updateVolume;
- (void)_updatePositionUnpause;
- (void)_updatePositionPause;
- (void)restartTotalTimeCalculation;
- (double)totalTimePlayed;
- (float)totalPercentPlayed;
@property(nonatomic) double currentPosition;
- (void)didChangePositionInMixer:(double)arg1;
- (void)willChangePositionInMixer:(double)arg1;
- (id)musicName;
- (id)getTagsArrayInformationForTag:(unsigned int)arg1;
- (id)getTagInformationForTag:(unsigned int)arg1;
- (void)stop;
- (void)stopWithFadeOut:(double)arg1;
- (void)stopWithNotification:(_Bool)arg1;
- (void)onPlaybackStateChanged:(_Bool)arg1;
- (void)stopWithNotification:(_Bool)arg1 withFadeOut:(double)arg2;
- (_Bool)isFading;
- (void)play;
- (void)playWithFadeIn:(double)arg1;
@property(readonly, nonatomic) double totalLength;
@property(readonly, nonatomic) long long numberOfChannels;
- (long long)bitDepth;
- (unsigned long long)sampleRate;
- (unsigned long long)averageBitrate;
@property(nonatomic) unsigned long long bitrate;
- (_Bool)isVBR;
- (_Bool)isLossless;
- (_Bool)isHD;
- (id)trackCodec;
@property(readonly, nonatomic) NSDictionary *tags;
@property(readonly, nonatomic) NSString *trackMetaInfoString;
- (id)trackInfo;
- (id)pluginString;
- (id)advancedDescription;
- (void)generateEndSync;
- (void)removeEndSyncs;
- (void)deallocateSourceHandler;
- (void)generateSourceHandler;
@property(readonly, nonatomic) unsigned int mainHandler;
- (void)abortConnections;
- (void)dealloc;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3;

@end

