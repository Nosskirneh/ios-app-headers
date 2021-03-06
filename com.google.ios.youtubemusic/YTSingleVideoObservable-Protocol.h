//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLFormat, MLNerdStatsPlaybackData, NSArray, YTCaptionViewController, YTSingleVideoEventCenter;
@protocol MLAudioFormatConstraint, MLCaptionTrack, MLVideoFormatConstraint, YTSingleVideoData;

@protocol YTSingleVideoObservable <NSObject>
@property(readonly, nonatomic) double accumulatedMediaTime;
@property(readonly, nonatomic) _Bool attemptingToPlay;
@property(readonly, nonatomic) MLNerdStatsPlaybackData *nerdStatsPlaybackData;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) YTCaptionViewController *captionViewController;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack;
@property(readonly, nonatomic) id <MLVideoFormatConstraint> videoFormatConstraint;
@property(readonly, nonatomic) id <MLAudioFormatConstraint> audioFormatConstraint;
@property(readonly, nonatomic) MLFormat *selectedVideoFormat;
@property(readonly, nonatomic) MLFormat *selectedAudioFormat;
@property(readonly, nonatomic) NSArray *selectableVideoFormats;
@property(readonly, nonatomic) NSArray *selectableAudioFormats;
@property(readonly, nonatomic) int mediaPlayerType;
@property(readonly, nonatomic) _Bool supportsChangingPlaybackRate;
@property(readonly, nonatomic) float playbackRate;
@property(readonly, nonatomic) _Bool isCurrentAspectRatioVertical;
@property(readonly, nonatomic) double currentAspectRatio;
@property(readonly, nonatomic) _Bool isAtLiveHead;
@property(readonly, nonatomic) _Bool isPeggedToLive;
@property(readonly, nonatomic) _Bool isCurrentlyBackgroundable;
@property(readonly, nonatomic) _Bool isExternalPlaybackActive;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic) _Bool isMuted;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) double maximumSeekableMediaTime;
@property(readonly, nonatomic) double minimumSeekableMediaTime;
@property(readonly, nonatomic) double totalMediaTime;
@property(readonly, nonatomic) double bufferedMediaTime;
@property(readonly, nonatomic) CDStruct_d60ef703 currentTime;
@property(readonly, nonatomic) long long rawMediaState;
@property(readonly, nonatomic) long long mediaState;
@property(readonly, nonatomic) long long lifecycleState;
@property(readonly, nonatomic) YTSingleVideoEventCenter *eventCenter;
@property(readonly, nonatomic) id <YTSingleVideoData> videoData;
- (void)segmentAtMediaTime:(double)arg1 completionBlock:(void (^)(struct, NSError *))arg2;
- (void)productionTimeFromMediaTime:(double)arg1 completionBlock:(void (^)(double, NSError *))arg2;
- (void)mediaTimeFromProductionTime:(double)arg1 completionBlock:(void (^)(double, NSError *))arg2;
@end

