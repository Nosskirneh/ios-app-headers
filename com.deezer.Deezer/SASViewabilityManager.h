//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, UIView;
@protocol SASViewabilityManagerDelegate;

@interface SASViewabilityManager : NSObject
{
    NSTimer *_viewabilityTimer;
    double _keyboardYPosition;
    double _previousTimestamp;
    _Bool _viewable;
    _Bool _shouldSwitchKeyboardOriginInLandscape;
    _Bool _keyboardIsVisible;
    _Bool _viewabilityMonitoringHasBeenPaused;
    _Bool _forcedViewability;
    NSMutableArray *_viewabilityPixels;
    UIView *_view;
    id <SASViewabilityManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SASViewabilityManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool viewable; // @synthesize viewable=_viewable;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSMutableArray *viewabilityPixels; // @synthesize viewabilityPixels=_viewabilityPixels;
- (void).cxx_destruct;
- (void)forceViewable:(_Bool)arg1;
- (double)timestampInterval;
- (double)percentageOfVisibility;
- (void)callAllViewabilityPixels;
- (void)updatePixelVisibilityStatus:(id)arg1 withPercentageOfVisibility:(double)arg2 timestampInterval:(double)arg3;
- (void)fireOrPostponeViewabilityPixels:(double)arg1 viewable:(_Bool)arg2;
- (_Bool)isOneParentViewHiddenOrAlphaSetToZero;
- (_Bool)viewableConditionsAreSatisfiedWithVisibility:(double)arg1;
- (void)updateViewabilityValue:(_Bool)arg1;
- (void)fireViewabilityTimer;
- (void)switchViewableViewToView:(id)arg1;
- (void)restartViewabilityTracking;
- (void)pauseViewabilityTracking;
- (void)stopViewabilityTimer;
- (void)startViewabilityTimer;
- (void)updateKeyboardYPositionFromInfo:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)removeKeyboardObserver;
- (void)registerKeyboardObserver;
- (void)stopViewabilityTracking;
- (void)startViewabilityTracking;
- (id)initWithView:(id)arg1 viewabilityPixels:(id)arg2;
- (void)dealloc;

@end

