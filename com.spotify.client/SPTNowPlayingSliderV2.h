//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTSliderWithLabel.h"

@class CADisplayLink, NSArray, UIColor;
@protocol SPTNowPlayingSliderV2DataSource;

@interface SPTNowPlayingSliderV2 : SPTSliderWithLabel
{
    _Bool _trackingState;
    float _trackingSpeed;
    float _uncompensatedTrackingValue;
    id <SPTNowPlayingSliderV2DataSource> _dataSource;
    UIColor *_trackingMinimumColour;
    long long _appearance;
    CADisplayLink *_displayLink;
    NSArray *_trackingSpeeds;
    NSArray *_trackingSpeedChangeThresholds;
    double _animationSpeed;
    struct CGPoint _thumbPosition;
    struct CGPoint _startTrackingPoint;
}

+ (id)spt_imageWithEllipseSize:(struct CGSize)arg1 color:(id)arg2;
@property(nonatomic) float uncompensatedTrackingValue; // @synthesize uncompensatedTrackingValue=_uncompensatedTrackingValue;
@property(nonatomic) struct CGPoint startTrackingPoint; // @synthesize startTrackingPoint=_startTrackingPoint;
@property(nonatomic) double animationSpeed; // @synthesize animationSpeed=_animationSpeed;
@property(nonatomic) float trackingSpeed; // @synthesize trackingSpeed=_trackingSpeed;
@property(retain, nonatomic) NSArray *trackingSpeedChangeThresholds; // @synthesize trackingSpeedChangeThresholds=_trackingSpeedChangeThresholds;
@property(retain, nonatomic) NSArray *trackingSpeeds; // @synthesize trackingSpeeds=_trackingSpeeds;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool trackingState; // @synthesize trackingState=_trackingState;
@property(nonatomic) struct CGPoint thumbPosition; // @synthesize thumbPosition=_thumbPosition;
@property(retain, nonatomic) UIColor *trackingMinimumColour; // @synthesize trackingMinimumColour=_trackingMinimumColour;
@property(nonatomic) __weak id <SPTNowPlayingSliderV2DataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)timeIntervalToAccessibilityString:(double)arg1;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (double)trackingSpeedForDistance:(double)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)stopAnimating;
- (void)startAnimatingWithSpeed:(double)arg1;
- (void)animateFrom:(float)arg1 withSpeed:(double)arg2;
- (void)resetValueTo:(float)arg1;
- (double)pointsForValue:(float)arg1;
- (float)positionToValue:(double)arg1;
@property(readonly, nonatomic) double currentDuration;
@property(readonly, nonatomic) double currentPosition;
- (void)onDisplayLink:(id)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)reloadData;
- (void)applyThemeLayout;
- (void)invalidateDisplayLink;
- (id)trackImageWithSize:(struct CGSize)arg1 color:(id)arg2;
- (void)modifySliderAppearance;
- (id)initWithFrame:(struct CGRect)arg1 animationView:(id)arg2;

@end

