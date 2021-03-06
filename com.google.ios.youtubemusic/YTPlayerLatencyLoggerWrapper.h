//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTPlaybackData;
@protocol YTLatencyTickLoggerProtocol;

@interface YTPlayerLatencyLoggerWrapper : NSObject
{
    YTPlaybackData *_contentPlaybackData;
    NSString *_adFormat;
    id <YTLatencyTickLoggerProtocol> _latencyLogger;
}

@property(readonly, nonatomic) id <YTLatencyTickLoggerProtocol> latencyLogger; // @synthesize latencyLogger=_latencyLogger;
- (void).cxx_destruct;
- (_Bool)adBreakLoaded;
- (void)playbackControllerDidReset;
- (void)playbackControllerDidLoadMediaPlayerWithPlayerType:(int)arg1;
- (void)playbackControllerWillLoadMediaPlayer;
- (void)playbackControllerWillStartPrerollBreakWithVideoID:(id)arg1;
- (void)playbackControllerWillPlayAdInterrupt:(id)arg1;
- (void)playbackControllerMediaStateDidChangeToPlaying;
- (void)playbackControllerMediaStateDidChangeToLoadingContent;
- (void)playbackControllerPlayerDidSelectVideoFormat:(id)arg1 audioFormat:(id)arg2;
- (void)playbackControllerWillSendPlayerRequest;
- (void)playbackControllerWillSendEarlyPlayerRequest;
- (void)playbackControllerDidFinishRestrictedContentFlow;
- (void)playbackControllerDidReceiveContentPlaybackData:(id)arg1;
- (id)initWithLogger:(id)arg1;

@end

