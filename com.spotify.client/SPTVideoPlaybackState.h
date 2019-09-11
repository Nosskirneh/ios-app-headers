//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString;

@interface SPTVideoPlaybackState : SPTVideoPlayerMessage
{
    _Bool _paused;
    _Bool _buffering;
    NSString *_playbackId;
    double _timestamp;
    double _position;
    double _duration;
    double _playbackSpeed;
}

@property(readonly, nonatomic, getter=isBuffering) _Bool buffering; // @synthesize buffering=_buffering;
@property(readonly, nonatomic) double playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double position; // @synthesize position=_position;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *playbackId; // @synthesize playbackId=_playbackId;
- (void).cxx_destruct;
- (id)stateBySettingTimestamp:(double)arg1;
- (id)stateBySettingDuration:(double)arg1;
- (id)stateBySettingPosition:(double)arg1;
- (id)stateBySettingPlaybackSpeed:(double)arg1;
- (id)stateBySettingBuffering:(_Bool)arg1;
- (id)stateBySettingPaused:(_Bool)arg1;
- (_Bool)isEqual:(id)arg1 delta:(double)arg2;
- (_Bool)isEqualExcludingTimestamp:(id)arg1;
- (_Bool)isEqualExcludingTimestampAndPosition:(id)arg1;
- (id)serializedDictionary;
- (double)realPlaybackSpeed;
- (id)initWithPlaybackId:(id)arg1 timestamp:(double)arg2 position:(double)arg3 duration:(double)arg4 paused:(_Bool)arg5 playbackSpeed:(double)arg6 buffering:(_Bool)arg7;

@end

