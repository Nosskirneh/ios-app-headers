//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "CAAnimationDelegate-Protocol.h"

@class BEMAnimationManager, BEMCheckBoxGroup, BEMPathManager, CAShapeLayer, NSString, UIColor;
@protocol BEMCheckBoxDelegate;

@interface BEMCheckBox : UIControl <CAAnimationDelegate>
{
    _Bool _on;
    _Bool _hideBox;
    id <BEMCheckBoxDelegate> _delegate;
    double _lineWidth;
    double _cornerRadius;
    double _animationDuration;
    UIColor *_onTintColor;
    UIColor *_onFillColor;
    UIColor *_offFillColor;
    UIColor *_onCheckColor;
    UIColor *_tintColor;
    BEMCheckBoxGroup *_group;
    long long _boxType;
    long long _onAnimationType;
    long long _offAnimationType;
    CAShapeLayer *_onBoxLayer;
    CAShapeLayer *_offBoxLayer;
    CAShapeLayer *_checkMarkLayer;
    BEMAnimationManager *_animationManager;
    BEMPathManager *_pathManager;
    struct CGSize _minimumTouchSize;
}

@property(retain, nonatomic) BEMPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(retain, nonatomic) BEMAnimationManager *animationManager; // @synthesize animationManager=_animationManager;
@property(retain, nonatomic) CAShapeLayer *checkMarkLayer; // @synthesize checkMarkLayer=_checkMarkLayer;
@property(retain, nonatomic) CAShapeLayer *offBoxLayer; // @synthesize offBoxLayer=_offBoxLayer;
@property(retain, nonatomic) CAShapeLayer *onBoxLayer; // @synthesize onBoxLayer=_onBoxLayer;
@property(nonatomic) struct CGSize minimumTouchSize; // @synthesize minimumTouchSize=_minimumTouchSize;
@property(nonatomic) long long offAnimationType; // @synthesize offAnimationType=_offAnimationType;
@property(nonatomic) long long onAnimationType; // @synthesize onAnimationType=_onAnimationType;
@property(nonatomic) long long boxType; // @synthesize boxType=_boxType;
@property(retain, nonatomic) BEMCheckBoxGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *onCheckColor; // @synthesize onCheckColor=_onCheckColor;
@property(retain, nonatomic) UIColor *offFillColor; // @synthesize offFillColor=_offFillColor;
@property(retain, nonatomic) UIColor *onFillColor; // @synthesize onFillColor=_onFillColor;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
@property(nonatomic) _Bool hideBox; // @synthesize hideBox=_hideBox;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(nonatomic) __weak id <BEMCheckBoxDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)addOffAnimation;
- (void)addOnAnimation;
- (void)drawCheckMark;
- (void)drawOnBox;
- (void)drawOffBox;
- (void)drawEntireCheckBox;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleTapCheckBox:(id)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setOn:(_Bool)arg1 animated:(_Bool)arg2 notifyGroup:(_Bool)arg3;
- (void)reload;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)initAnimationManager;
- (void)initPathManager;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

