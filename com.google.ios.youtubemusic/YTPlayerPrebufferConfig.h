//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTPlayerPrebufferConfig : NSObject
{
    _Bool _onlyPrebufferAudioTrack;
    double _targetPrebufferDuration;
}

+ (id)prebufferingDisabledConfig;
+ (id)defaultConfig;
@property(readonly, nonatomic) _Bool onlyPrebufferAudioTrack; // @synthesize onlyPrebufferAudioTrack=_onlyPrebufferAudioTrack;
@property(readonly, nonatomic) double targetPrebufferDuration; // @synthesize targetPrebufferDuration=_targetPrebufferDuration;
- (unsigned long long)hash;
- (_Bool)isEqualToPrebufferConfig:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTargetPrebufferDuration:(double)arg1 onlyPrebufferAudioTrack:(_Bool)arg2;

@end

