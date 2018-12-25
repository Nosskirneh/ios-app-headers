//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LDActiveViewVideoMetadata : NSObject
{
    _Bool _fullscreen;
    _Bool _miniplayer;
    _Bool _playing;
    double _duration;
    double _currentTime;
}

@property(readonly, nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(readonly, nonatomic) _Bool miniplayer; // @synthesize miniplayer=_miniplayer;
@property(readonly, nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(readonly, nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)initWithCurrentTime:(double)arg1 duration:(double)arg2 fullscreen:(_Bool)arg3 miniplayer:(_Bool)arg4 playing:(_Bool)arg5;
- (id)init;

@end

