//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, UIColor;

@interface GWAUnderlineView : UIView
{
    _Bool _enabled;
    _Bool _erroneous;
    _Bool _focusBorderHidden;
    _Bool _normalBorderHidden;
    UIColor *_focusedColor;
    UIColor *_unfocusedColor;
    UIColor *_errorColor;
    CAShapeLayer *_disabledBorder;
    CALayer *_focusedBorder;
}

@property(retain, nonatomic) CALayer *focusedBorder; // @synthesize focusedBorder=_focusedBorder;
@property(retain, nonatomic) CAShapeLayer *disabledBorder; // @synthesize disabledBorder=_disabledBorder;
@property(nonatomic) _Bool normalBorderHidden; // @synthesize normalBorderHidden=_normalBorderHidden;
@property(nonatomic) _Bool focusBorderHidden; // @synthesize focusBorderHidden=_focusBorderHidden;
@property(nonatomic) _Bool erroneous; // @synthesize erroneous=_erroneous;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIColor *errorColor; // @synthesize errorColor=_errorColor;
@property(retain, nonatomic) UIColor *unfocusedColor; // @synthesize unfocusedColor=_unfocusedColor;
@property(retain, nonatomic) UIColor *focusedColor; // @synthesize focusedColor=_focusedColor;
- (void).cxx_destruct;
- (void)animateFocusBorderOut;
- (void)animateFocusBorderIn;
- (void)updateForegroundColor;
- (void)updateBackgroundColor;
- (void)updateBorder;
- (void)updateBorderPath;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

