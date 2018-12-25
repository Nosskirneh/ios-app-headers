//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class GRWFeatureHighlightLayer, MDCButton, NSString, UIColor, UILabel;

@interface GRWFeatureHighlightView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _forceConcentricLayout;
    _Bool _layoutAppearing;
    UIColor *_outerHighlightColor;
    UIColor *_innerHighlightColor;
    UILabel *_titleLabel;
    UIColor *_titleColor;
    UILabel *_bodyLabel;
    UIColor *_bodyColor;
    UIColor *_actionTextColor;
    UIView *_displayedView;
    CDUnknownBlockType _interactionBlock;
    double _outerRadius;
    double _innerRadius;
    double _outerRadiusScale;
    GRWFeatureHighlightLayer *_outerLayer;
    GRWFeatureHighlightLayer *_innerLayer;
    GRWFeatureHighlightLayer *_pulseLayer;
    GRWFeatureHighlightLayer *_elementMaskLayer;
    GRWFeatureHighlightLayer *_maskLayer;
    UIView *_maskingContainer;
    UIView *_dummyAnimatedView;
    MDCButton *_actionButton;
    struct CGPoint _highlightPoint;
    struct CGPoint _highlightCenter;
    struct CGPoint _outerCenter;
}

@property(retain, nonatomic) MDCButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *dummyAnimatedView; // @synthesize dummyAnimatedView=_dummyAnimatedView;
@property(retain, nonatomic) UIView *maskingContainer; // @synthesize maskingContainer=_maskingContainer;
@property(retain, nonatomic) GRWFeatureHighlightLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) GRWFeatureHighlightLayer *elementMaskLayer; // @synthesize elementMaskLayer=_elementMaskLayer;
@property(retain, nonatomic) GRWFeatureHighlightLayer *pulseLayer; // @synthesize pulseLayer=_pulseLayer;
@property(retain, nonatomic) GRWFeatureHighlightLayer *innerLayer; // @synthesize innerLayer=_innerLayer;
@property(retain, nonatomic) GRWFeatureHighlightLayer *outerLayer; // @synthesize outerLayer=_outerLayer;
@property(nonatomic) double outerRadiusScale; // @synthesize outerRadiusScale=_outerRadiusScale;
@property(nonatomic) struct CGPoint outerCenter; // @synthesize outerCenter=_outerCenter;
@property(nonatomic) double innerRadius; // @synthesize innerRadius=_innerRadius;
@property(nonatomic, getter=isLayoutAppearing) _Bool layoutAppearing; // @synthesize layoutAppearing=_layoutAppearing;
@property(nonatomic) _Bool forceConcentricLayout; // @synthesize forceConcentricLayout=_forceConcentricLayout;
@property(nonatomic) double outerRadius; // @synthesize outerRadius=_outerRadius;
@property(readonly, nonatomic) struct CGPoint highlightCenter; // @synthesize highlightCenter=_highlightCenter;
@property(copy, nonatomic) CDUnknownBlockType interactionBlock; // @synthesize interactionBlock=_interactionBlock;
@property(retain, nonatomic) UIView *displayedView; // @synthesize displayedView=_displayedView;
@property(nonatomic) struct CGPoint highlightPoint; // @synthesize highlightPoint=_highlightPoint;
@property(retain, nonatomic) UIColor *actionTextColor; // @synthesize actionTextColor=_actionTextColor;
@property(retain, nonatomic) UIColor *bodyColor; // @synthesize bodyColor=_bodyColor;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateFonts;
- (void)updateOuterHighlight;
- (void)animateRejectedWithDuration:(double)arg1;
- (void)animateAcceptedWithDuration:(double)arg1;
- (void)animatePulse;
- (void)updateSublayersAnimated:(_Bool)arg1;
- (void)animateDiscoverWithDuration:(double)arg1;
- (void)animateDismissalCancelled;
- (void)layoutInProgressDismissal:(double)arg1;
- (void)handleActionButtonTap;
- (void)didGestureDismiss:(id)arg1;
- (void)didTapView:(id)arg1;
- (double)actionXPositionForSize:(struct CGSize)arg1 underTextFrame:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)layoutDisappearing;
- (void)layoutAppearing;
- (void)configureGestureRecognizersIfNeeded;
- (void)configureViewHierarchyIfNeeded;
@property(retain, nonatomic) NSString *actionText;
@property(retain, nonatomic) UIColor *innerHighlightColor; // @synthesize innerHighlightColor=_innerHighlightColor;
@property(retain, nonatomic) UIColor *outerHighlightColor; // @synthesize outerHighlightColor=_outerHighlightColor;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

