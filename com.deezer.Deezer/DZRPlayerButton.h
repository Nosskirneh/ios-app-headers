//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, UIColor, UIImage;

@interface DZRPlayerButton : UIButton
{
    _Bool _strikethrough;
    _Bool _iconDisplayed;
    UIImage *_image;
    double _borderWidth;
    double _cornerRadius;
    CALayer *_outlineLayer;
    UIColor *_defaultTintColor;
    UIColor *_highlightedTintColor;
    UIColor *_selectedTintColor;
    CALayer *_strikethroughLayer;
    CALayer *_strikethroughMaskLayer;
}

+ (double)defaultSize;
@property(retain, nonatomic) CALayer *strikethroughMaskLayer; // @synthesize strikethroughMaskLayer=_strikethroughMaskLayer;
@property(retain, nonatomic) CALayer *strikethroughLayer; // @synthesize strikethroughLayer=_strikethroughLayer;
@property(nonatomic) _Bool iconDisplayed; // @synthesize iconDisplayed=_iconDisplayed;
@property(retain, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=_selectedTintColor;
@property(retain, nonatomic) UIColor *highlightedTintColor; // @synthesize highlightedTintColor=_highlightedTintColor;
@property(retain, nonatomic) UIColor *defaultTintColor; // @synthesize defaultTintColor=_defaultTintColor;
@property(retain, nonatomic) CALayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
@property(nonatomic, getter=isStrikethrough) _Bool strikethrough; // @synthesize strikethrough=_strikethrough;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)updateTintColor;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setUp;
- (void)awakeFromNib;
- (id)initWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 borderWidth:(double)arg4;

@end

