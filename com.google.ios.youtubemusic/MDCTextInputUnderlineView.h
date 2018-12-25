//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCopying-Protocol.h"

@class CAShapeLayer, UIColor;

@interface MDCTextInputUnderlineView : UIView <NSCopying>
{
    _Bool _enabled;
    UIColor *_color;
    UIColor *_disabledColor;
    double _lineHeight;
    CAShapeLayer *_disabledUnderline;
    CAShapeLayer *_underline;
}

@property(retain, nonatomic) CAShapeLayer *underline; // @synthesize underline=_underline;
@property(retain, nonatomic) CAShapeLayer *disabledUnderline; // @synthesize disabledUnderline=_disabledUnderline;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIColor *disabledColor; // @synthesize disabledColor=_disabledColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)updateColor;
- (void)updateUnderline;
- (void)updateUnderlinePath;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)commonMDCUnderlineViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

