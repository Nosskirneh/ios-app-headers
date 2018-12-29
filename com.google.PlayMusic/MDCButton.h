//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MDCInkView, MDCShapedShadowLayer, NSMutableDictionary, NSString, UIColor;
@protocol MDCShapeGenerating;

@interface MDCButton : UIButton
{
    NSMutableDictionary *_userElevations;
    NSMutableDictionary *_backgroundColors;
    NSMutableDictionary *_borderColors;
    NSMutableDictionary *_borderWidths;
    NSMutableDictionary *_shadowColors;
    NSMutableDictionary *_imageTintColors;
    NSMutableDictionary *_fonts;
    double _enabledAlpha;
    _Bool _hasCustomDisabledTitleColor;
    _Bool _imageTintStatefulAPIEnabled;
    NSMutableDictionary *_nontransformedTitles;
    NSString *_accessibilityLabelExplicitValue;
    _Bool _mdc_adjustsFontForContentSizeCategory;
    _Bool _uppercaseTitle;
    _Bool _shouldRaiseOnTouch;
    double _disabledAlpha;
    UIColor *_underlyingColorHint;
    MDCInkView *_inkView;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
    struct UIEdgeInsets _hitAreaInsets;
}

+ (Class)layerClass;
+ (id)gmdc_filledButton;
+ (id)gmdc_hairlineButton;
+ (id)gmdc_protectedButton;
+ (id)gmdc_textButton;
@property(retain, nonatomic) MDCInkView *inkView; // @synthesize inkView=_inkView;
@property(nonatomic) _Bool shouldRaiseOnTouch; // @synthesize shouldRaiseOnTouch=_shouldRaiseOnTouch;
@property(retain, nonatomic) UIColor *underlyingColorHint; // @synthesize underlyingColorHint=_underlyingColorHint;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) struct UIEdgeInsets hitAreaInsets; // @synthesize hitAreaInsets=_hitAreaInsets;
@property(nonatomic, getter=isUppercaseTitle) _Bool uppercaseTitle; // @synthesize uppercaseTitle=_uppercaseTitle;
@property(nonatomic) double disabledAlpha; // @synthesize disabledAlpha=_disabledAlpha;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *underlyingColor;
@property(nonatomic) _Bool shouldCapitalizeTitle;
@property(retain, nonatomic) UIColor *customTitleColor;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory;
- (void)updateInkForShape;
@property(retain, nonatomic) id <MDCShapeGenerating> shapeGenerator;
- (void)updateTitleFont;
- (void)updateBorderColor;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateDisabledTitleColor;
- (void)updateBackgroundColor;
- (void)updateAlphaAndBackgroundColorAnimated:(_Bool)arg1;
- (_Bool)shouldHaveOpaqueBackground;
- (struct UIEdgeInsets)defaultContentEdgeInsets;
- (id)boundingPath;
- (void)evaporateInkToPoint:(struct CGPoint)arg1;
- (struct CGPoint)locationFromTouches:(id)arg1;
- (void)handleBeginTouches:(id)arg1;
- (void)touchDragExit:(id)arg1 forEvent:(id)arg2;
- (void)touchDragEnter:(id)arg1 forEvent:(id)arg2;
- (_Bool)isTransparentColor:(id)arg1;
- (_Bool)isDarkColor:(id)arg1;
- (id)effectiveBackgroundColor;
- (id)currentBackgroundColor;
- (void)setTitleFont:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleFontForState:(unsigned long long)arg1;
- (void)updateBorderWidth;
- (void)setBorderWidth:(double)arg1 forState:(unsigned long long)arg2;
- (double)borderWidthForState:(unsigned long long)arg1;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)borderColorForState:(unsigned long long)arg1;
- (void)setElevation:(double)arg1 forState:(unsigned long long)arg2;
- (double)elevationForState:(unsigned long long)arg1;
- (void)updateImageTintColor;
- (void)setImageTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageTintColorForState:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundColorForState:(unsigned long long)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)animateButtonToHeightForState:(unsigned long long)arg1;
@property(nonatomic) double inkMaxRippleRadius;
@property(retain, nonatomic) UIColor *inkColor;
@property(nonatomic) long long inkStyle;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)shadowColorForState:(unsigned long long)arg1;
- (void)setShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateShadowColor;
- (void)updateTitleCase;
- (void)updateAfterStateChange:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (void)dealloc;
- (void)commonMDCButtonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) MDCShapedShadowLayer *layer; // @dynamic layer;

@end
