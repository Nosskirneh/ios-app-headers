//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EqualizerDelegate-Protocol.h"

@class AVAudioEngine, AVAudioMixerNode, AVAudioPlayerNode, AVAudioUnitEQ, CTCallCenter, EqualizerManager, NSString, SaavnAudioPlayer;
@protocol SaavnAudioEngineDelegate;

@interface SaavnAudioEngine : NSObject <EqualizerDelegate>
{
    AVAudioEngine *_engine;
    AVAudioMixerNode *_mixer;
    SaavnAudioPlayer *_playerOne;
    SaavnAudioPlayer *_playerTwo;
    SaavnAudioPlayer *_currentPlayer;
    SaavnAudioPlayer *_crossFadePlayer;
    AVAudioUnitEQ *_equalizerOne;
    AVAudioUnitEQ *_equalizerTwo;
    AVAudioUnitEQ *_currentEqualizer;
    AVAudioUnitEQ *_crossFadeEqualizer;
    EqualizerManager *_eqManager;
    _Bool _crossFadeEnabled;
    float gainDelta;
    long long _currentCrossFadeType;
    int _crossFadeDuration;
    int _crossFadeGainChange;
    double _gainStep;
    CTCallCenter *callCenter;
    _Bool _equalizerOn;
    _Bool _audioSessionInterrupted;
    _Bool _ongoingCall;
    _Bool _audioPlayingBeforeInterruption;
    _Bool _crossFadeInProgress;
    _Bool _configChangePending;
    _Bool _isPlaying;
    float _playerRate;
    AVAudioPlayerNode *_player;
    id <SaavnAudioEngineDelegate> _delegate;
    double _duration;
}

+ (id)engine;
@property(nonatomic) float playerRate; // @synthesize playerRate=_playerRate;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <SaavnAudioEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVAudioPlayerNode *player; // @synthesize player=_player;
@property(nonatomic, getter=isConfigChangePending) _Bool configChangePending; // @synthesize configChangePending=_configChangePending;
- (void).cxx_destruct;
- (void)dealloc;
- (void)changeGainValuesForDelegate:(id)arg1;
- (void)enableEqualizerForDelegate:(_Bool)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (float)getGainForEqualizer:(id)arg1 band:(unsigned long long)arg2;
- (void)setGain:(float)arg1 forEqualizer:(id)arg2 band:(unsigned long long)arg3;
- (void)stopEngineIfNecessary;
- (void)stopPlayback;
- (void)pausePlayback;
- (void)startPlayback;
- (void)setVolume:(double)arg1;
- (void)updatePlayerRoles;
- (void)resetCrossFadeProgress;
- (void)updateCrossFadeGainForEqualizer:(id)arg1;
- (void)updateCrossFadeProgressWithType:(long long)arg1 progress:(double)arg2 duration:(double)arg3;
@property(nonatomic) double currentPlayerTime;
- (id)playFile:(id)arg1;
- (void)schedulePrefetchedFile:(id)arg1;
- (void)clearPrefetchedSongIfAny;
- (void)makeEngineConnections;
- (void)createEngineAndAttachNodes;
- (void)updateEQSettingsForEqualizer:(id)arg1;
- (void)initAndCreateNodes;
- (void)startEngine;
- (void)setSessionInterruptState:(_Bool)arg1;
- (void)toggleCrossFade:(id)arg1;
- (void)setCrossFadeState:(_Bool)arg1;
- (void)initNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

