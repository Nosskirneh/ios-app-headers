//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UIColor, UILabel;

@interface MDCNumericValueLabel : UIView
{
    CAShapeLayer *_marker;
    UILabel *_label;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) double fontSize;
@property(retain, nonatomic) UIColor *textColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
