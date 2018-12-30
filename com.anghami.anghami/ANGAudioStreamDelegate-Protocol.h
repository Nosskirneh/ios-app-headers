//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANGAudioStream, ANGSong;

@protocol ANGAudioStreamDelegate <NSObject>
- (void)audioStream:(ANGAudioStream *)arg1 acquiredNewSongFromServer:(ANGSong *)arg2 oldSong:(ANGSong *)arg3;
- (void)audioStreamEnded:(ANGAudioStream *)arg1;
- (void)audioStream:(ANGAudioStream *)arg1 willEndIn:(double)arg2;
- (void)audioStream:(ANGAudioStream *)arg1 positionChanged:(double)arg2;
- (void)audioStream:(ANGAudioStream *)arg1 statusChangedFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
@end

