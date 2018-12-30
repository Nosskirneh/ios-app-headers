//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVAsset, AVPlayer, AVPlayerItem, NSString, PBJVideoView;
@protocol NSObject, PBJVideoPlayerControllerDelegate;

@interface PBJVideoPlayerController : UIViewController
{
    AVPlayer *_player;
    AVAsset *_asset;
    AVPlayerItem *_playerItem;
    NSString *_videoPath;
    PBJVideoView *_videoView;
    long long _playbackState;
    long long _bufferingState;
    struct {
        unsigned int playbackLoops:1;
        unsigned int playbackFreezesAtEnd:1;
    } _flags;
    float _volume;
    id <NSObject> _timeObserver;
    id <PBJVideoPlayerControllerDelegate> _delegate;
    NSString *_videoFillMode;
}

@property(copy, nonatomic, setter=setVideoFillMode:) NSString *videoFillMode; // @synthesize videoFillMode=_videoFillMode;
@property(readonly, nonatomic) long long bufferingState; // @synthesize bufferingState=_bufferingState;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) __weak id <PBJVideoPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_playerItemFailedToPlayToEndTime:(id)arg1;
- (void)_playerItemDidPlayToEndTime:(id)arg1;
- (void)_enqueueBlockOnMainQueue:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)pause;
- (void)playFromCurrentTime;
- (void)playFromBeginning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (void)_setPlayerItem:(id)arg1;
- (void)_setAsset:(id)arg1;
@property(nonatomic, getter=isMuted) _Bool muted; // @dynamic muted;
@property(nonatomic) float volume;
@property(readonly, nonatomic) double maxDuration;
@property(nonatomic) _Bool playbackFreezesAtEnd;
@property(nonatomic) _Bool playbackLoops;
@property(copy, nonatomic) AVAsset *asset;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;

@end

