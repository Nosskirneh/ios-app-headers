//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaLockScreenControlsStateObserver-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTNowPlayingInfoCenterManagerProtocol-Protocol.h"
#import "SPTNowPlayingTrackMetadataQueueObserver-Protocol.h"
#import "SPTNowPlayingTrackPositionObserver-Protocol.h"
#import "SPTPlaybackQueueInitializer-Protocol.h"

@class MPMediaItemArtwork, MPNowPlayingInfoCenter, NSHashTable, NSString, NSURL, SPTNowPlayingPlaybackController, SPTNowPlayingTrackMetadataQueue, UIImage;
@protocol SPTGaiaDeviceStateManager, SPTGaiaLockScreenControlsStateProvider, SPTImageLoader, SPTLocalSettings, SPTPlayer;

@interface SPTNowPlayingInfoCenterManager : NSObject <SPTImageLoaderDelegate, SPTNowPlayingTrackMetadataQueueObserver, SPTNowPlayingTrackPositionObserver, SPTGaiaLockScreenControlsStateObserver, SPTNowPlayingInfoCenterManagerProtocol, SPTPlaybackQueueInitializer>
{
    UIImage *_currentLockScreenImage;
    SPTNowPlayingPlaybackController *_playbackController;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    id <SPTGaiaDeviceStateManager> _deviceStateManager;
    id <SPTLocalSettings> _localSettings;
    MPNowPlayingInfoCenter *_infoCenter;
    id <SPTImageLoader> _imageLoader;
    id <SPTGaiaLockScreenControlsStateProvider> _lockScreenControlsStateProvider;
    id <SPTPlayer> _player;
    NSHashTable *_artworkDecorators;
    NSURL *_imageURL;
    NSURL *_requestedImageURL;
    MPMediaItemArtwork *_artwork;
}

@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @synthesize artwork=_artwork;
@property(retain, nonatomic) NSURL *requestedImageURL; // @synthesize requestedImageURL=_requestedImageURL;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSHashTable *artworkDecorators; // @synthesize artworkDecorators=_artworkDecorators;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTGaiaLockScreenControlsStateProvider> lockScreenControlsStateProvider; // @synthesize lockScreenControlsStateProvider=_lockScreenControlsStateProvider;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTGaiaDeviceStateManager> deviceStateManager; // @synthesize deviceStateManager=_deviceStateManager;
@property(readonly, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(readonly, nonatomic) SPTNowPlayingPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
@property(retain, nonatomic) UIImage *currentLockScreenImage; // @synthesize currentLockScreenImage=_currentLockScreenImage;
- (void).cxx_destruct;
- (void)lockScreenControlsEnabledChanged:(_Bool)arg1;
- (void)initializePlaybackQueueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)trackMetadataQueueDidFinishUpdating:(id)arg1;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)removeNowPlayingInfoCenterArtworkDecorator:(id)arg1;
- (void)addNowPlayingInfoCenterArtworkDecorator:(id)arg1;
- (id)infoDictionaryFromTrack:(id)arg1;
- (id)minimumAcceptableInfoDictonary;
- (unsigned long long)persistentIdForTrackURL:(id)arg1;
- (void)updateNowPlayingInfoCenterWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateNowPlayingInfoCenter;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)setLoadedImage:(id)arg1 forURL:(id)arg2 playerTrack:(id)arg3 playerState:(id)arg4;
- (void)setImageWithURL:(id)arg1;
- (void)setImage:(id)arg1 withURL:(id)arg2;
- (id)placeholderImage;
- (void)dealloc;
- (id)initWithPlaybackController:(id)arg1 trackMetadataQueue:(id)arg2 gaiaDeviceStateManager:(id)arg3 localSettings:(id)arg4 infoCenter:(id)arg5 imageLoader:(id)arg6 lockScreenControlsStateProvider:(id)arg7 player:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

