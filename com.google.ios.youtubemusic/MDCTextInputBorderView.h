//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCopying-Protocol.h"

@class CAShapeLayer, UIBezierPath, UIColor;

@interface MDCTextInputBorderView : UIView <NSCopying>
{
    UIColor *_borderFillColor;
    UIBezierPath *_borderPath;
    UIColor *_borderStrokeColor;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIColor *borderStrokeColor; // @synthesize borderStrokeColor=_borderStrokeColor;
@property(retain, nonatomic) UIBezierPath *borderPath; // @synthesize borderPath=_borderPath;
@property(retain, nonatomic) UIColor *borderFillColor; // @synthesize borderFillColor=_borderFillColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAShapeLayer *borderLayer;
- (void)layoutSubviews;
- (void)updateBorder;
- (void)commonMDCTextInputBorderViewInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
