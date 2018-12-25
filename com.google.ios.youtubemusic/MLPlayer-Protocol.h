//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLPlayerCaptionProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class MLFormat, MLQOEPingController, MLSegmentTimeline, MLVideo, NSArray, NSData, NSDictionary, NSError;
@protocol MLAudioFormatConstraint, MLCaptionDisplayController, MLCaptionTrack, MLCuepointCollector, MLPlayerConfig, MLPlayerDelegate, MLVideoFormatConstraint, MLVideoSplicer, MLViewportSizeProvider;

@protocol MLPlayer <NSObject, MLPlayerCaptionProtocol>
@property(readonly, nonatomic) MLSegmentTimeline *segmentTimeline;
@property(readonly, nonatomic) _Bool peggedToLive;
@property(readonly, nonatomic) id <MLVideoSplicer> videoSplicer;
@property(readonly, nonatomic) id <MLCuepointCollector> cuepointCollector;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic) int playerType;
@property(readonly, nonatomic) id <MLPlayerConfig> config;
@property(readonly, nonatomic) MLVideo *video;
@property(readonly, nonatomic) id <MLCaptionDisplayController> captionDisplayController;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack;
@property(retain, nonatomic) id <MLViewportSizeProvider> viewportSizeProvider;
@property(retain, nonatomic) id <MLAudioFormatConstraint> audioFormatConstraint;
@property(retain, nonatomic) id <MLVideoFormatConstraint> videoFormatConstraint;
@property(readonly, nonatomic) MLFormat *selectedVideoFormat;
@property(readonly, nonatomic) MLFormat *selectedAudioFormat;
@property(readonly, nonatomic) NSArray *selectableVideoFormats;
@property(readonly, nonatomic) NSArray *selectableAudioFormats;
@property(nonatomic) float rate;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) float volume;
@property(nonatomic) _Bool externalPlaybackFullscreen;
@property(nonatomic) _Bool externalPlaybackAllowed;
@property(nonatomic) _Bool backgroundPlaybackAllowed;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) double maximumSeekableTime;
@property(readonly, nonatomic) double minimumSeekableTime;
@property(readonly, nonatomic) double bufferedMediaTime;
@property(readonly, nonatomic) double totalMediaTime;
@property(readonly, nonatomic) CDStruct_d60ef703 currentTime;
@property(readonly, nonatomic) long long state;
@property(nonatomic) __weak id <MLPlayerDelegate> delegate;
- (void)registerQOEController:(MLQOEPingController *)arg1;
- (void)setPeakBitrateFraction:(float)arg1;
- (void)setPreferredMaxReadahead:(double)arg1;
- (NSDictionary *)debugParameters;
- (NSData *)debugLogs;
- (_Bool)isExternalPlaybackActive;
- (void)setLiveCaptionsVerticalRatio:(double)arg1;
- (void)enableCaptionsIfAvailable;
- (void)setActiveCaptionTrack:(id <MLCaptionTrack>)arg1;
- (void)seekToEnd;
- (void)seekToProductionTime:(double)arg1;
- (void)seekToTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)replay;
- (void)pause;
- (void)playASAP;
- (void)play;
- (void)load;
@end
