//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIScrollView, UITapGestureRecognizer, VOXHistogramAnimator, VOXHistogramView;
@protocol VOXHistogramControlViewDelegate;

@interface VOXHistogramControlView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _monochromaticMode;
    _Bool _tracking;
    id <VOXHistogramControlViewDelegate> _delegate;
    double _histogramHeightRatio;
    double _collapseRatio;
    double _progressPosition;
    double _downloadPosition;
    double _trackedPosition;
    UIScrollView *_scrollView;
    VOXHistogramView *_histogramView;
    VOXHistogramView *_reflectedHistogramView;
    VOXHistogramAnimator *_animator;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) VOXHistogramAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) __weak VOXHistogramView *reflectedHistogramView; // @synthesize reflectedHistogramView=_reflectedHistogramView;
@property(nonatomic) __weak VOXHistogramView *histogramView; // @synthesize histogramView=_histogramView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double trackedPosition; // @synthesize trackedPosition=_trackedPosition;
@property(nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) double downloadPosition; // @synthesize downloadPosition=_downloadPosition;
@property(nonatomic) double progressPosition; // @synthesize progressPosition=_progressPosition;
@property(nonatomic) _Bool monochromaticMode; // @synthesize monochromaticMode=_monochromaticMode;
@property(nonatomic) double collapseRatio; // @synthesize collapseRatio=_collapseRatio;
@property(nonatomic) double histogramHeightRatio; // @synthesize histogramHeightRatio=_histogramHeightRatio;
@property(nonatomic) __weak id <VOXHistogramControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateScrollViewParameters;
- (void)didFinishTracking;
- (void)updateProgress:(double)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateHistogramLevels:(id)arg1 forDuration:(float)arg2;
- (void)hideHistogramViewAnimated:(_Bool)arg1;
- (void)showHistogramViewAnimated:(_Bool)arg1;
- (void)refreshHistogramColors;
- (void)refreshHistogramFrames;
- (void)setupAnimator;
- (void)setupScrollView;
- (id)createHistogramView;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 histogramHeightRatio:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)notCompleteColor;
- (id)downloadedColor;
- (id)completeColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
