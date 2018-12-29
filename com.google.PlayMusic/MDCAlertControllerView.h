//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIFont, UIImage, UIImageView, UILabel, UIScrollView;

@interface MDCAlertControllerView : UIView
{
    NSMutableArray *_actionButtons;
    _Bool _mdc_adjustsFontForContentSizeCategory;
    _Bool _verticalActionsLayout;
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIColor *_titleIconTintColor;
    UIFont *_messageFont;
    UIColor *_messageColor;
    UIFont *_buttonFont;
    UIColor *_buttonColor;
    UIColor *_buttonInkColor;
    UIScrollView *_contentScrollView;
    UIScrollView *_actionsScrollView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_titleIconImageView;
}

+ (id)buttonFontDefault;
+ (id)messageFontDefault;
+ (id)titleFontDefault;
@property(retain, nonatomic) UIImageView *titleIconImageView; // @synthesize titleIconImageView=_titleIconImageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isVerticalActionsLayout) _Bool verticalActionsLayout; // @synthesize verticalActionsLayout=_verticalActionsLayout;
@property(retain, nonatomic) UIScrollView *actionsScrollView; // @synthesize actionsScrollView=_actionsScrollView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) UIColor *buttonInkColor; // @synthesize buttonInkColor=_buttonInkColor;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(retain, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(retain, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain, nonatomic) UIColor *titleIconTintColor; // @synthesize titleIconTintColor=_titleIconTintColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void).cxx_destruct;
- (void)updateFonts;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory;
- (void)layoutSubviews;
- (struct CGSize)calculateActionsSizeThatFitsWidth:(double)arg1;
- (struct CGSize)calculateContentSizeThatFitsWidth:(double)arg1;
- (struct CGSize)calculatePreferredContentSizeForBounds:(struct CGSize)arg1;
- (struct CGSize)actionButtonsSizeInVericalLayout;
- (struct CGSize)actionButtonsSizeInHorizontalLayout;
@property(nonatomic) double cornerRadius;
- (void)updateButtonFont;
- (void)updateMessageFont;
- (void)setMessage:(id)arg1;
- (id)message;
@property(retain, nonatomic) UIImage *titleIcon; // @dynamic titleIcon;
@property(nonatomic) long long titleAlignment; // @dynamic titleAlignment;
- (void)updateTitleFont;
- (id)addActionButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setTitle:(id)arg1;
- (id)title;
@property(readonly, nonatomic) NSArray *actionButtons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
