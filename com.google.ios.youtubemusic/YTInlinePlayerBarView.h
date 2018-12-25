//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPlayerScrubberProtocol-Protocol.h"

@class NSString, YTPlayerBarMarkerView;
@protocol YTInlinePlayerBarAccessibilityDelegate, YTInlinePlayerBarViewDelegate;

@interface YTInlinePlayerBarView : UIView <YTPlayerScrubberProtocol>
{
    _Bool _userIsScrubbing;
    _Bool _storyboardEnabled;
    UIView *_playingProgress;
    UIView *_downloadingProgress;
    UIView *_unbufferedProgress;
    double _minimumSeekableTime;
    double _maximumSeekableTime;
    double _downloadedTime;
    double _scrubberTime;
    int _mode;
    YTPlayerBarMarkerView *_adMarkerView;
    double _lastLayoutDownloadedTime;
    double _lastLayoutMediaTime;
    double _maxTimeChangeForLayout;
    id <YTInlinePlayerBarViewDelegate> _inlinePlayerBarViewDelegate;
    id <YTInlinePlayerBarAccessibilityDelegate> _accessibilityDelegate;
    UIView *_scrubberCircle;
    double _mediaTime;
    double _totalTime;
    struct CGRect _barFrame;
}

@property(readonly, nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(readonly, nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(readonly, nonatomic) UIView *scrubberCircle; // @synthesize scrubberCircle=_scrubberCircle;
@property(nonatomic) __weak id <YTInlinePlayerBarAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(nonatomic) __weak id <YTInlinePlayerBarViewDelegate> inlinePlayerBarViewDelegate; // @synthesize inlinePlayerBarViewDelegate=_inlinePlayerBarViewDelegate;
@property(readonly, nonatomic) struct CGRect barFrame; // @synthesize barFrame=_barFrame;
- (void).cxx_destruct;
- (void)transformScrubberScale:(double)arg1;
- (id)accessibilityValue;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setAirPlayAllowed:(_Bool)arg1;
- (void)setScrubberTime:(double)arg1;
- (void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2;
- (void)setMediaTime:(double)arg1;
- (void)setDownloadedTime:(double)arg1;
- (void)setTotalTime:(double)arg1;
- (void)setMarkers:(id)arg1;
- (void)didEndScrubbing;
- (void)didStartScrubbing;
- (void)setStoryboardEnabled:(_Bool)arg1;
- (void)setMode:(int)arg1;
- (void)setPausable:(_Bool)arg1;
- (void)setScrubberEnlarged:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

