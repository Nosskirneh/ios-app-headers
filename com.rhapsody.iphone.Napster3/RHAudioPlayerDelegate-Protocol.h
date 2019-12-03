//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, NSURL, RHAudioPlayer;
@protocol RHAudioDataSource;

@protocol RHAudioPlayerDelegate <NSObject>
- (void)audioPlayerInterAppDisconnected:(RHAudioPlayer *)arg1;
- (void)audioPlayer:(RHAudioPlayer *)arg1 interAppConnectedWith:(NSURL *)arg2;
- (_Bool)audioPlayerIgnoreHandlingRemoteControlEvents:(RHAudioPlayer *)arg1;
- (void)audioPlayer:(RHAudioPlayer *)arg1 currentAudioRouteChangedFrom:(NSString *)arg2 toRoute:(NSString *)arg3 because:(int)arg4;
- (void)audioPlayerAudioInterruptionEnded:(RHAudioPlayer *)arg1 shouldResume:(_Bool)arg2;
- (void)audioPlayerAudioInterruptionStarted:(RHAudioPlayer *)arg1;
- (void)audioPlayer:(RHAudioPlayer *)arg1 provider:(NSObject<RHAudioDataSource> *)arg2 timeChanged:(double)arg3;
- (void)audioPlayer:(RHAudioPlayer *)arg1 providerAtEnd:(NSObject<RHAudioDataSource> *)arg2;
- (void)audioPlayerPlaybackPaused:(RHAudioPlayer *)arg1;
- (void)audioPlayerPlaybackStarted:(RHAudioPlayer *)arg1;
- (void)audioPlayer:(RHAudioPlayer *)arg1 uniqueProviderChangedFrom:(NSObject<RHAudioDataSource> *)arg2 to:(NSObject<RHAudioDataSource> *)arg3;
- (void)audioPlayer:(RHAudioPlayer *)arg1 providerChangedFrom:(NSObject<RHAudioDataSource> *)arg2 to:(NSObject<RHAudioDataSource> *)arg3;
@end
