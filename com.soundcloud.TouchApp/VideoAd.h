//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlayableAd.h"

#import "_TtP3Ads9AdTimable_-Protocol.h"

@class NSArray, NSString, VideoAdSelector, VideoAdSource, _TtC3Ads21AnalyticsVideoAdState;
@protocol _TtP8Features18PlayQueueItemTrack_;

@interface VideoAd : PlayableAd <_TtP3Ads9AdTimable_>
{
    _Bool _firedBufferingError;
    _Bool _firedImpression;
    id <_TtP8Features18PlayQueueItemTrack_> _monetizableTrack;
    NSArray *_videoAdSources;
    NSString *_ctaButtonText;
    NSString *_videoTitle;
    double _adTimerDuration;
    VideoAdSelector *_videoAdSelector;
    VideoAdSource *_optimalSource;
}

@property(nonatomic) _Bool firedImpression; // @synthesize firedImpression=_firedImpression;
@property(readonly, nonatomic) VideoAdSource *optimalSource; // @synthesize optimalSource=_optimalSource;
@property(readonly, nonatomic) VideoAdSelector *videoAdSelector; // @synthesize videoAdSelector=_videoAdSelector;
@property(readonly, nonatomic) double adTimerDuration; // @synthesize adTimerDuration=_adTimerDuration;
@property(nonatomic) _Bool firedBufferingError; // @synthesize firedBufferingError=_firedBufferingError;
@property(readonly, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(readonly, nonatomic) NSString *ctaButtonText; // @synthesize ctaButtonText=_ctaButtonText;
@property(readonly, nonatomic) NSArray *videoAdSources; // @synthesize videoAdSources=_videoAdSources;
- (id)monetizableTrack;
- (void).cxx_destruct;
@property(readonly, nonatomic) VideoAdSource *firstSource;
- (void)defineOptimalSource;
- (id)clickthroughUrl;
- (void)didFireImpression;
- (_Bool)hasFiredImpression;
- (unsigned long long)adType;
- (id)impressionName;
- (id)title;
- (id)artistName;
- (id)artworkURL;
- (id)artworkUrn;
- (long long)itemType;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) _Bool isVerticalVideo;
- (id)bitrate;
@property(readonly, nonatomic) _TtC3Ads21AnalyticsVideoAdState *videoTrackingState;
@property(readonly, nonatomic) NSString *creativeId;
@property(readonly, nonatomic) NSString *lineItemId;
@property(readonly, nonatomic) double videoDuration;
- (_Bool)shouldTapViewActionOnScreen:(long long)arg1;
- (id)streamURL;
- (id)initWithUrn:(id)arg1 duration:(double)arg2 skippable:(_Bool)arg3 videoAdSources:(id)arg4 trackingState:(id)arg5 videoAdSelector:(id)arg6 adTagger:(id)arg7 ctaText:(id)arg8 videoTitle:(id)arg9 monetizableTrack:(id)arg10 adTimerDuration:(double)arg11 priority:(double)arg12 errorTrackingUrlStrings:(id)arg13;

@end

