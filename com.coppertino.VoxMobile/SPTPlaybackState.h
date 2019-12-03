//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SPTPlaybackState : NSObject
{
    _Bool _isPlaying;
    _Bool _isRepeating;
    _Bool _isShuffling;
    _Bool _isActiveDevice;
    double _position;
}

@property(readonly, nonatomic) double position; // @synthesize position=_position;
@property(readonly, nonatomic) _Bool isActiveDevice; // @synthesize isActiveDevice=_isActiveDevice;
@property(readonly, nonatomic) _Bool isShuffling; // @synthesize isShuffling=_isShuffling;
@property(readonly, nonatomic) _Bool isRepeating; // @synthesize isRepeating=_isRepeating;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (id)initWithIsPlaying:(_Bool)arg1 isRepeating:(_Bool)arg2 isShuffling:(_Bool)arg3 isActiveDevice:(_Bool)arg4 position:(double)arg5;

@end
