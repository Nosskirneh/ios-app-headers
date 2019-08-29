//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, IMAdCloseButton, IMRenderView, IMUISlider, NSString, UIView;
@protocol IMAVPlayerDelegate;

@interface IMAVPlayer : NSObject
{
    _Bool _notificationsRegistered;
    _Bool _frameObserverAdded;
    _Bool _statusObserverAdded;
    id <IMAVPlayerDelegate> _delegate;
    NSString *_mediaURL;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    UIView *_playerView;
    UIView *_parentView;
    IMRenderView *_renderView;
    AVPlayerLayer *_layer;
    IMAdCloseButton *_closeButton;
    IMUISlider *_progressSlider;
    id _timeObserver;
    struct CGRect _mediaFrame;
}

@property(nonatomic) _Bool statusObserverAdded; // @synthesize statusObserverAdded=_statusObserverAdded;
@property(nonatomic) _Bool frameObserverAdded; // @synthesize frameObserverAdded=_frameObserverAdded;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) IMUISlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) IMAdCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) AVPlayerLayer *layer; // @synthesize layer=_layer;
@property(nonatomic) __weak IMRenderView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) _Bool notificationsRegistered; // @synthesize notificationsRegistered=_notificationsRegistered;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) struct CGRect mediaFrame; // @synthesize mediaFrame=_mediaFrame;
@property(retain, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(nonatomic) __weak id <IMAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appBecameInactive;
- (void)appBecameActive;
- (void)addSeekBarToMediaPlayer;
- (void)addCloseButtonToMediaPlayer;
- (void)removeAllControls;
- (void)refreshPlayerControls;
- (id)getRenderView;
- (id)getParentViewForPlayer;
- (void)mediaEndNotification:(id)arg1;
- (void)deregisterNotifications;
- (void)registerNotifications;
- (struct CGRect)getFullScreenBounds;
- (void)addPlayerToView;
- (void)deinit;
- (void)removePlayerTimeObserver;
- (void)close;
- (void)closeButtonAction;
- (void)play;
- (void)dealloc;
- (void)readyToPlay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareAndPlayMedia;
- (id)initWithMediaURL:(id)arg1 delegate:(id)arg2 renderView:(id)arg3;

@end

