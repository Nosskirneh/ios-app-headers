//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, NSIndexPath, NSMutableSet, NSString, UILongPressGestureRecognizer, UIView;
@protocol VOXReorderTableViewDelegate;

@interface VOXReorderTableView : UITableView <UIGestureRecognizerDelegate>
{
    _Bool _isReorderingCells;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSIndexPath *_movingIndexPath;
    UIView *_placeholderView;
    double _touchOriginY;
    CADisplayLink *_timerToAutoscroll;
    double _autoscrollAmount;
    NSMutableSet *_hiddenCells;
}

@property(retain, nonatomic) NSMutableSet *hiddenCells; // @synthesize hiddenCells=_hiddenCells;
@property(nonatomic) double autoscrollAmount; // @synthesize autoscrollAmount=_autoscrollAmount;
@property(retain, nonatomic) CADisplayLink *timerToAutoscroll; // @synthesize timerToAutoscroll=_timerToAutoscroll;
@property(nonatomic) double touchOriginY; // @synthesize touchOriginY=_touchOriginY;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) NSIndexPath *movingIndexPath; // @synthesize movingIndexPath=_movingIndexPath;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) _Bool isReorderingCells; // @synthesize isReorderingCells=_isReorderingCells;
- (void).cxx_destruct;
- (void)autoscrollTimerFired:(id)arg1;
- (float)autoscrollAmountForDistanceToEdge:(float)arg1;
- (void)autoScrollIfNeeded;
- (id)targetIndexPath;
- (void)movingCellDidMove;
- (void)cancelMovingCell;
- (void)finishMovingCell;
- (void)keepMovingCellAtLocation:(struct CGPoint)arg1;
- (void)startMovingCellAtLocation:(struct CGPoint)arg1;
- (void)longPressGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <VOXReorderTableViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

