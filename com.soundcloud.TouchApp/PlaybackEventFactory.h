//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CheckpointEventCreating-Protocol.h"

@class PlaybackInfoProvider, _TtC10SoundCloud7Version, _TtC8Playback17AudioPortProvider;

@interface PlaybackEventFactory : NSObject <CheckpointEventCreating>
{
    PlaybackInfoProvider *_infoProvider;
    _TtC10SoundCloud7Version *_version;
    _TtC8Playback17AudioPortProvider *_audioPortProvider;
}

@property(readonly, nonatomic) _TtC8Playback17AudioPortProvider *audioPortProvider; // @synthesize audioPortProvider=_audioPortProvider;
@property(readonly, nonatomic) _TtC10SoundCloud7Version *version; // @synthesize version=_version;
@property(readonly, nonatomic) PlaybackInfoProvider *infoProvider; // @synthesize infoProvider=_infoProvider;
- (void).cxx_destruct;
- (id)triggerForReason:(unsigned long long)arg1;
- (id)reasonStringForReason:(unsigned long long)arg1;
- (id)defaultEventBuilderForItem:(id)arg1;
- (id)eventBuilderForTrack:(id)arg1;
- (id)eventBuilderForItem:(id)arg1;
- (id)checkpointEventForItem:(id)arg1;
- (id)pauseEventForItem:(id)arg1 withReason:(unsigned long long)arg2;
- (id)playEventForItem:(id)arg1 withUUID:(id)arg2;
- (id)init;
- (id)initWithInfoProvider:(id)arg1 version:(id)arg2 audioPortProvider:(id)arg3;

@end

