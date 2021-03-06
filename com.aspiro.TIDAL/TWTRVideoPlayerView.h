//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, NSURL, TWTRVideoMetaData, TWTRVideoPlayerViewLayer, UIActivityIndicatorView, UIImageView;
@protocol TWTRVideoPlayerScribeDelegate, TWTRVideoPlayerViewDelegate;

@interface TWTRVideoPlayerView : UIView
{
    _Bool _didRegisterForNotifications;
    _Bool _playerHasBecomeReady;
    _Bool _shouldAutoPlay;
    _Bool _shouldAutoLoop;
    TWTRVideoMetaData *_videoEntity;
    id <TWTRVideoPlayerViewDelegate> _delegate;
    id <TWTRVideoPlayerScribeDelegate> _scribeDelegate;
    long long _playbackState;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    id _playerObserver;
    TWTRVideoPlayerViewLayer *_playerLayerView;
    NSURL *_videoURL;
    UIActivityIndicatorView *_loadingView;
    UIImageView *_previewImageView;
}

@property(readonly, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, nonatomic) TWTRVideoPlayerViewLayer *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(retain, nonatomic) id playerObserver; // @synthesize playerObserver=_playerObserver;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) __weak id <TWTRVideoPlayerScribeDelegate> scribeDelegate; // @synthesize scribeDelegate=_scribeDelegate;
@property(nonatomic) __weak id <TWTRVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldAutoLoop; // @synthesize shouldAutoLoop=_shouldAutoLoop;
@property(nonatomic) _Bool shouldAutoPlay; // @synthesize shouldAutoPlay=_shouldAutoPlay;
@property(readonly, nonatomic) TWTRVideoMetaData *videoEntity; // @synthesize videoEntity=_videoEntity;
- (void).cxx_destruct;
- (double)timeIntervalFromTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) double videoDuration;
- (double)elapsedTime;
- (void)seekToPosition:(double)arg1;
- (void)proceedToNextPlaybackState;
- (void)pause;
- (void)play;
- (void)restart;
- (_Bool)isVideoReadyToPlay;
- (void)playerDidBecomeReady;
- (void)handlePlayerDidReachEndNotification:(id)arg1;
- (void)handlePlayerStatusChange:(id)arg1;
- (void)unregisterAnalyticsObservers;
- (void)registerAnalyticsObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)loadVideo;
- (void)performOnMain:(CDUnknownBlockType)arg1;
- (void)configureVideoPlayer;
- (id)lowestBitrateVariant:(id)arg1;
- (void)setPropertiesFromVideoEntity:(id)arg1;
- (void)prepareSubviewsWithPreviewImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 videoEntity:(id)arg2 previewImage:(id)arg3 shouldLoadVideo:(_Bool)arg4;

@end

