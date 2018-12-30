//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, WYPopoverBackgroundInnerView;
@protocol WYPopoverBackgroundViewDelegate;

@interface WYPopoverBackgroundView : UIView
{
    WYPopoverBackgroundInnerView *innerView;
    struct CGSize contentSize;
    _Bool wantsDefaultContentAppearance;
    UIColor *tintColor;
    UIColor *fillTopColor;
    UIColor *fillBottomColor;
    UIColor *glossShadowColor;
    double glossShadowBlurRadius;
    double borderWidth;
    double arrowBase;
    double arrowHeight;
    UIColor *outerShadowColor;
    UIColor *outerStrokeColor;
    double outerShadowBlurRadius;
    double outerCornerRadius;
    double minOuterCornerRadius;
    UIColor *innerShadowColor;
    UIColor *innerStrokeColor;
    double innerShadowBlurRadius;
    double innerCornerRadius;
    unsigned long long arrowDirection;
    UIView *contentView;
    double arrowOffset;
    double navigationBarHeight;
    UIColor *_overlayColor;
    id <WYPopoverBackgroundViewDelegate> _delegate;
    struct CGSize glossShadowOffset;
    struct CGSize outerShadowOffset;
    struct CGSize innerShadowOffset;
    struct UIEdgeInsets viewContentInsets;
    struct UIEdgeInsets outerShadowInsets;
}

@property(nonatomic) id <WYPopoverBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(nonatomic) _Bool wantsDefaultContentAppearance; // @synthesize wantsDefaultContentAppearance;
@property(readonly, nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection;
@property(nonatomic) struct UIEdgeInsets viewContentInsets; // @synthesize viewContentInsets;
@property(nonatomic) double innerCornerRadius; // @synthesize innerCornerRadius;
@property(nonatomic) struct CGSize innerShadowOffset; // @synthesize innerShadowOffset;
@property(nonatomic) double innerShadowBlurRadius; // @synthesize innerShadowBlurRadius;
@property(retain, nonatomic) UIColor *innerStrokeColor; // @synthesize innerStrokeColor;
@property(retain, nonatomic) UIColor *innerShadowColor; // @synthesize innerShadowColor;
@property(nonatomic) double minOuterCornerRadius; // @synthesize minOuterCornerRadius;
@property(nonatomic) double outerCornerRadius; // @synthesize outerCornerRadius;
@property(nonatomic) struct CGSize outerShadowOffset; // @synthesize outerShadowOffset;
@property(nonatomic) double outerShadowBlurRadius; // @synthesize outerShadowBlurRadius;
@property(retain, nonatomic) UIColor *outerStrokeColor; // @synthesize outerStrokeColor;
@property(retain, nonatomic) UIColor *outerShadowColor; // @synthesize outerShadowColor;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight;
@property(nonatomic) double arrowBase; // @synthesize arrowBase;
@property(nonatomic) double borderWidth; // @synthesize borderWidth;
@property(nonatomic) double glossShadowBlurRadius; // @synthesize glossShadowBlurRadius;
@property(nonatomic) struct CGSize glossShadowOffset; // @synthesize glossShadowOffset;
@property(retain, nonatomic) UIColor *glossShadowColor; // @synthesize glossShadowColor;
@property(retain, nonatomic) UIColor *fillBottomColor; // @synthesize fillBottomColor;
@property(retain, nonatomic) UIColor *fillTopColor; // @synthesize fillTopColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isTouchedAtPoint:(struct CGPoint)arg1;
- (struct CGRect)arrowRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;
- (struct CGRect)innerRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;
- (struct CGRect)outerRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;
- (struct CGRect)arrowRect;
- (struct CGRect)innerRect;
- (struct CGRect)outerRect;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplay;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setViewController:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets outerShadowInsets; // @synthesize outerShadowInsets;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithContentSize:(struct CGSize)arg1;

@end
