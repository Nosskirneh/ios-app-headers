//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEPressedAnimatorStyle, NSString, UIColor, UIFont;

@interface GLUEButtonStyle : NSObject <GLUEStyle>
{
    double _height;
    UIFont *_textfont;
    long long _lineBreakMode;
    UIColor *_normalTextColor;
    UIColor *_highlightedTextColor;
    UIColor *_disabledTextColor;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_disabledBackgroundColor;
    double _borderWidth;
    UIColor *_normalBorderColor;
    UIColor *_highlightedBorderColor;
    UIColor *_disabledBorderColor;
    GLUEPressedAnimatorStyle *_pressedAnimatorStyle;
}

@property(copy, nonatomic) GLUEPressedAnimatorStyle *pressedAnimatorStyle; // @synthesize pressedAnimatorStyle=_pressedAnimatorStyle;
@property(copy, nonatomic) UIColor *disabledBorderColor; // @synthesize disabledBorderColor=_disabledBorderColor;
@property(copy, nonatomic) UIColor *highlightedBorderColor; // @synthesize highlightedBorderColor=_highlightedBorderColor;
@property(copy, nonatomic) UIColor *normalBorderColor; // @synthesize normalBorderColor=_normalBorderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) UIColor *disabledBackgroundColor; // @synthesize disabledBackgroundColor=_disabledBackgroundColor;
@property(copy, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(copy, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(copy, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
@property(copy, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(copy, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(copy, nonatomic) UIFont *textfont; // @synthesize textfont=_textfont;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)borderColorForState:(unsigned long long)arg1;
- (id)backgroundColorForState:(unsigned long long)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToButtonStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

