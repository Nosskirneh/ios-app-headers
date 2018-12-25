//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXScreenSessionObserver-Protocol.h"
#import "MDXVideoProgressObserver-Protocol.h"
#import "MLCaptionControllerDelegate-Protocol.h"
#import "YTSingleVideoData-Protocol.h"
#import "YTSingleVideoObservable-Protocol.h"

@class MDXScreenSession, MDXVideoProgressController, MLFormat, MLNerdStatsPlaybackData, NSArray, NSString, YTAdInterrupt, YTCPN, YTCaptionViewController, YTPlaybackData, YTPlayerResponse, YTSingleVideoEventCenter;
@protocol MLAudioFormatConstraint, MLCaptionConfig, MLCaptionController, MLCaptionDisplaySettingsProvider, MLCaptionTrack, MLPlayerConfig, MLVideoFormatConstraint, YTSingleVideoData;

@interface MDXSingleVideoController : NSObject <MDXScreenSessionObserver, MDXVideoProgressObserver, MLCaptionControllerDelegate, YTSingleVideoData, YTSingleVideoObservable>
{
    MDXScreenSession *_screenSession;
    id <MLCaptionController> _captionController;
    _Bool _shouldSetCaptionTrackOnVideoLoad;
    id <MLCaptionConfig> _captionConfig;
    id <MLCaptionDisplaySettingsProvider> _captionDisplaySettingsProvider;
    _Bool _lastReportedIsPeggedToLive;
    double _lastReportedMinimumSeekableMediaTime;
    double _lastReportedMaximumSeekableMediaTime;
    MDXVideoProgressController *_videoProgressController;
    double _accumulatedMediaTime;
    id <MLCaptionTrack> _activeCaptionTrack;
    YTAdInterrupt *_adInterrupt;
    YTSingleVideoEventCenter *_eventCenter;
    long long _lifecycleState;
    long long _mediaState;
    long long _videoType;
    YTPlayerResponse *_playerResponse;
}

@property(readonly, nonatomic) YTPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(readonly, nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(readonly, nonatomic) long long mediaState; // @synthesize mediaState=_mediaState;
@property(readonly, nonatomic) long long lifecycleState; // @synthesize lifecycleState=_lifecycleState;
@property(readonly, nonatomic) YTSingleVideoEventCenter *eventCenter; // @synthesize eventCenter=_eventCenter;
@property(readonly, nonatomic) YTAdInterrupt *adInterrupt; // @synthesize adInterrupt=_adInterrupt;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack; // @synthesize activeCaptionTrack=_activeCaptionTrack;
@property(readonly, nonatomic) double accumulatedMediaTime; // @synthesize accumulatedMediaTime=_accumulatedMediaTime;
- (void).cxx_destruct;
- (_Bool)isContentVideoLoadedOnScreen;
- (id)captionTrackWithVSSID:(id)arg1;
- (void)updateLifecycleState:(long long)arg1;
- (long long)mediaStateForMDXPlayerState:(long long)arg1;
- (void)videoDidProgressToTime:(double)arg1;
- (void)didLoadFormat3Captions:(id)arg1;
- (void)captionControllerDidFailWithError:(id)arg1;
- (void)availableCaptionTracksDidChange:(id)arg1;
- (void)activeCaptionTrackDidChange:(id)arg1;
- (void)segmentAtMediaTime:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)productionTimeFromMediaTime:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)mediaTimeFromProductionTime:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) MLNerdStatsPlaybackData *nerdStatsPlaybackData;
@property(readonly, nonatomic) YTCaptionViewController *captionViewController;
@property(readonly, nonatomic) id <MLVideoFormatConstraint> videoFormatConstraint;
@property(readonly, nonatomic) MLFormat *selectedVideoFormat;
@property(readonly, nonatomic) _Bool isCurrentAspectRatioVertical;
@property(readonly, nonatomic) double currentAspectRatio;
@property(readonly, nonatomic) double bufferedMediaTime;
@property(readonly, nonatomic) _Bool supportsChangingPlaybackRate;
@property(readonly, nonatomic) float playbackRate;
@property(readonly, nonatomic) _Bool attemptingToPlay;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) id <MLAudioFormatConstraint> audioFormatConstraint;
@property(readonly, nonatomic) MLFormat *selectedAudioFormat;
@property(readonly, nonatomic) NSArray *selectableVideoFormats;
@property(readonly, nonatomic) NSArray *selectableAudioFormats;
@property(readonly, nonatomic) int mediaPlayerType;
@property(readonly, nonatomic) _Bool isAtLiveHead;
@property(readonly, nonatomic) _Bool isPeggedToLive;
@property(readonly, nonatomic) _Bool isCurrentlyBackgroundable;
@property(readonly, nonatomic) _Bool isExternalPlaybackActive;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic) double maximumSeekableMediaTime;
@property(readonly, nonatomic) double minimumSeekableMediaTime;
@property(readonly, nonatomic) double totalMediaTime;
@property(readonly, nonatomic) CDStruct_d60ef703 currentTime;
@property(readonly, nonatomic) long long rawMediaState;
@property(readonly, nonatomic) id <YTSingleVideoData> videoData;
@property(readonly, nonatomic) YTPlaybackData *playbackData;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) _Bool isMuted;
@property(readonly, nonatomic) id <MLPlayerConfig> playerConfig;
@property(readonly, nonatomic) int interstitialReplayPolicy;
@property(readonly, nonatomic) long long playbackPlacement;
@property(readonly, nonatomic) _Bool isPlayableInPictureInPicture;
@property(readonly, nonatomic) _Bool isLivePlayback;
@property(readonly, nonatomic) NSString *videoId;
@property(readonly, nonatomic) YTCPN *CPN;
- (void)screenSession:(id)arg1 subtitlesTrackDidChangeWithVSSID:(id)arg2;
- (void)screenSession:(id)arg1 audioTrackDidChange:(id)arg2;
- (void)screenSession:(id)arg1 audioTrackListDidChange:(id)arg2;
- (void)screenSession:(id)arg1 playerStateDidChange:(long long)arg2;
- (void)startAdOverlay;
- (void)setActiveCaptionTrack:(id)arg1;
- (void)activate;
- (void)suspend;
- (id)initWithScreenSession:(id)arg1 playerResponse:(id)arg2 videoProgressController:(id)arg3 ad:(id)arg4 adOverlay:(id)arg5;
- (id)init;
- (id)initWithScreenSession:(id)arg1 playerResponse:(id)arg2 videoProgressController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
