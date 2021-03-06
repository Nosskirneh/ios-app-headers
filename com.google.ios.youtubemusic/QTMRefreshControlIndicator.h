//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMActivityIndicator.h"

@class CALayer, CAShapeLayer, QTMColorGroup;

@interface QTMRefreshControlIndicator : QTMActivityIndicator
{
    double _refreshIndicatorPercent;
    double _overdrivePercent;
    CALayer *_refreshArrowContainer;
    CAShapeLayer *_refreshArrowPoint;
    CAShapeLayer *_refreshStrokeLayer;
    _Bool _pendingFirstRefreshCycle;
    CDUnknownBlockType _animateOutCompletionBlock;
    double _outerRotationAngle;
    _Bool _refreshing;
    _Bool _hideOnCompletion;
    QTMColorGroup *_iconColorGroup;
    long long _arrowColor;
}

@property(nonatomic) long long arrowColor; // @synthesize arrowColor=_arrowColor;
@property(retain, nonatomic) QTMColorGroup *iconColorGroup; // @synthesize iconColorGroup=_iconColorGroup;
@property(nonatomic) _Bool hideOnCompletion; // @synthesize hideOnCompletion=_hideOnCompletion;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
- (void).cxx_destruct;
- (void)animateToRefreshIcon;
- (void)updateRefreshIndicator;
- (_Bool)isAccessibilityElement;
- (void)strokeRotationCycleFinishedFromState:(long long)arg1;
- (void)resetStrokeColor;
- (void)updateRefreshIndicatorPercent:(double)arg1 overdrivePercent:(double)arg2;
- (void)stopRefreshing:(CDUnknownBlockType)arg1;
- (void)startRefreshing;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

