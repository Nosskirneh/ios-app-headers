//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MusicQueueFeeder, NSDate;

@interface MusicQueueInfo : NSObject
{
    long long _settingsCloudQueueVersion;
    MusicQueueFeeder *_musicQueueFeeder;
    _Bool _inCloudQueueMode;
}

@property(nonatomic, getter=isInCloudQueueMode) _Bool inCloudQueueMode; // @synthesize inCloudQueueMode=_inCloudQueueMode;
- (void).cxx_destruct;
- (void)notifyShuffleStateChanged;
- (void)notifyRepeatStateChanged;
- (void)notifyPlaybackModeChanged;
- (void)clearSettingsToDefault;
- (void)copyCloudQueueSettingsToLocalQueue;
- (void)copyLocalQueueSettingsToCloudQueue;
- (id)musicQueueSyncPlaySettingsForMinCloudQueueVersion:(long long)arg1;
- (void)setMusicQueueSyncPlaySettings:(id)arg1;
@property(nonatomic) long long cloudQueueVersion;
@property(nonatomic) double currentTrackProgress;
@property(nonatomic) unsigned long long currentTrackIndex;
@property(nonatomic) long long shuffleState;
@property(nonatomic) long long repeatState;
@property(nonatomic) long long playbackMode;
@property(retain, nonatomic) NSDate *lastPlayDate;
@property(retain, nonatomic) NSDate *lastPauseDate;
- (id)initWithMusicQueueFeeder:(id)arg1;
- (id)init;

@end

