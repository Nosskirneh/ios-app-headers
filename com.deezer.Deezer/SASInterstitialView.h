//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASAdView.h"

@class NSTimer, UIPanGestureRecognizer;
@protocol SASInterstitialViewSwipeDelegate;

@interface SASInterstitialView : SASAdView
{
    _Bool _timerHasBeenSuspended;
    _Bool _swipeToClose;
    double _firstY;
    double _timeRemaining;
    double _currentTimerInterval;
    NSTimer *_swipeActivationTimer;
    UIPanGestureRecognizer *_panGesture;
    id <SASInterstitialViewSwipeDelegate> _swipeDelegate;
}

+ (void)clearPrefetchCache;
@property(nonatomic) __weak id <SASInterstitialViewSwipeDelegate> swipeDelegate; // @synthesize swipeDelegate=_swipeDelegate;
@property(nonatomic) _Bool swipeToClose; // @synthesize swipeToClose=_swipeToClose;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) _Bool timerHasBeenSuspended; // @synthesize timerHasBeenSuspended=_timerHasBeenSuspended;
@property(retain, nonatomic) NSTimer *swipeActivationTimer; // @synthesize swipeActivationTimer=_swipeActivationTimer;
@property(nonatomic) double currentTimerInterval; // @synthesize currentTimerInterval=_currentTimerInterval;
@property(nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(nonatomic) double firstY; // @synthesize firstY=_firstY;
- (void).cxx_destruct;
- (void)panMoved:(id)arg1;
- (void)activateSwipeToClose;
- (void)swipeActivationTimerFired:(id)arg1;
- (double)computeNextTimerInterval;
- (void)startSwipeActivationTimer;
- (_Bool)isSwipeActivationTimerRunning;
- (void)resetSwipeActivationTimer;
- (void)interstitialEnteredForeground;
- (void)interstitialEnteredBackground;
- (void)activateSwipeToCloseWithDelegate:(id)arg1 afterDelay:(float)arg2;
- (void)prefetchFormatId:(long long)arg1 pageId:(id)arg2 master:(_Bool)arg3 target:(id)arg4;
- (void)loadFormatId:(long long)arg1 pageId:(id)arg2 master:(_Bool)arg3 target:(id)arg4 timeout:(float)arg5;
- (void)loadFormatId:(long long)arg1 pageId:(id)arg2 master:(_Bool)arg3 target:(id)arg4;
- (void)configureInterstitial:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 loader:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

