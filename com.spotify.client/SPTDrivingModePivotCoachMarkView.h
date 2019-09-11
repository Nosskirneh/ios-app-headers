//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface SPTDrivingModePivotCoachMarkView : UIView
{
    CDUnknownBlockType _dismissHandler;
    UIView *_containerView;
    UIView *_contentView;
    CAShapeLayer *_arrowLayer;
    CAShapeLayer *_contentViewLayer;
}

@property(retain, nonatomic) CAShapeLayer *contentViewLayer; // @synthesize contentViewLayer=_contentViewLayer;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void).cxx_destruct;
- (void)arrangeLayers;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)handleCoachMarkTap:(id)arg1;
- (void)setupGestureControl;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 dismissHandler:(CDUnknownBlockType)arg2;

@end

