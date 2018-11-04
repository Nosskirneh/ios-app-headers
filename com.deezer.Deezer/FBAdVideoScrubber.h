//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIView;

@interface FBAdVideoScrubber : UISlider
{
    UIView *_trackView;
    UIView *_trackMinView;
    UIView *_trackLoadingView;
    UIView *_trackMaxView;
    double _currentScrubberHeight;
    double _currentInset;
    double _playableDuration;
    double _trackInsetWhileScrubbing;
    double _hitAreaBelowScrubber;
}

+ (void)initialize;
@property(nonatomic) double hitAreaBelowScrubber; // @synthesize hitAreaBelowScrubber=_hitAreaBelowScrubber;
@property(nonatomic) double trackInsetWhileScrubbing; // @synthesize trackInsetWhileScrubbing=_trackInsetWhileScrubbing;
@property(nonatomic) double playableDuration; // @synthesize playableDuration=_playableDuration;
- (void).cxx_destruct;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_scrubberIsNotBeingUsed:(id)arg1;
- (void)_scrubberIsBeingUsed:(id)arg1;
- (id)_imageWithColor:(id)arg1;
- (id)_imageWithColor:(id)arg1 andSize:(struct CGRect)arg2;
- (void)_updateTrackLoadingViewFrame;
- (void)setPlayableDuration:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

