//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTPlaybackControllerEventsDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSError, NSMutableArray, NSString, UIImage, YTIMusicTunederSwipeableCardRenderer, YTImageService, YTMTunederPlayerPool, YTPlayerTransition;
@protocol YTMTunederItemControllerDelegate, YTPlaybackController, YTResponder;

@interface YTMTunederItemController : NSObject <YTResponder, YTPlaybackControllerEventsDelegate>
{
    YTImageService *_imageService;
    YTMTunederPlayerPool *_playerPool;
    id <YTPlaybackController> _playerViewController;
    NSError *_lastPlaybackError;
    _Bool _isActive;
    _Bool _isPendingImageRequest;
    _Bool _pausePlaybackWhenReady;
    unsigned long long _tunederItemState;
    NSMutableArray *_imageFetchCompletionHandlers;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTMTunederItemControllerDelegate> _delegate;
    YTIMusicTunederSwipeableCardRenderer *_tunederCard;
    UIImage *_albumArtImage;
    YTPlayerTransition *_playerTransition;
}

+ (struct CGSize)targetImageSize;
@property(retain, nonatomic) YTPlayerTransition *playerTransition; // @synthesize playerTransition=_playerTransition;
@property(readonly, nonatomic) UIImage *albumArtImage; // @synthesize albumArtImage=_albumArtImage;
@property(readonly, nonatomic) YTIMusicTunederSwipeableCardRenderer *tunederCard; // @synthesize tunederCard=_tunederCard;
@property(nonatomic) __weak id <YTMTunederItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)loadAudioAndPlayImmediately:(_Bool)arg1;
- (void)playbackControllerWillFailWithError:(id)arg1;
- (void)relinquishPlayerViewController;
- (void)acquirePlayerViewController;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)clearAssets;
- (void)startPlayback;
- (void)resumePlayback;
- (void)pausePlayback;
- (void)preloadAudio;
- (_Bool)canPreload;
- (double)currentSongProgress;
- (void)fetchAlbumArtWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithTunederCard:(id)arg1 playerPool:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
