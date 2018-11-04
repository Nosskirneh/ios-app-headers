//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaSilentAudioPlayer.h"

@class AVAudioPlayer, NSString;

@interface SPTGaiaSilentAudioPlayerImplementation : NSObject <SPTGaiaSilentAudioPlayer>
{
    AVAudioPlayer *_player;
}

@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
@property(nonatomic) long long numberOfLoops;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stop;
- (void)pause;
- (void)play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

