//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDCTextInputBorderView, MDCTextInputUnderlineView, NSAttributedString, NSString, UIBezierPath, UIButton, UIColor, UIFont, UILabel, UIView;
@protocol MDCTextInputPositioningDelegate;

@protocol MDCTextInput <NSObject>
@property(readonly, nonatomic) MDCTextInputUnderlineView *underline;
@property(nonatomic) long long trailingViewMode;
@property(retain, nonatomic) UIView *trailingView;
@property(readonly, nonatomic) UILabel *trailingUnderlineLabel;
@property(nonatomic) unsigned long long textInsetsMode;
@property(readonly, nonatomic) struct UIEdgeInsets textInsets;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) __weak id <MDCTextInputPositioningDelegate> positioningDelegate;
@property(readonly, nonatomic) UILabel *placeholderLabel;
@property(copy, nonatomic) NSString *placeholder;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory;
@property(readonly, nonatomic) UILabel *leadingUnderlineLabel;
@property(nonatomic) _Bool hidesPlaceholderOnInput;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(retain, nonatomic) UIColor *cursorColor;
@property(nonatomic) long long clearButtonMode;
@property(readonly, nonatomic) UIButton *clearButton;
@property(retain, nonatomic) MDCTextInputBorderView *borderView;
@property(copy, nonatomic) UIBezierPath *borderPath;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
@end

