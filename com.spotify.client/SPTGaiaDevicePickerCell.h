//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEEntityRowTableViewCell.h"

@class GLUEImageView, NSString, SPTGaiaDevicePickerGLUETheme, UIColor;
@protocol SPTGaiaDevicePickerCellDelegate;

@interface SPTGaiaDevicePickerCell : GLUEEntityRowTableViewCell
{
    _Bool _animating;
    _Bool _loggedIn;
    _Bool _usesSecondaryDisplayStyle;
    _Bool _subtitleUsesSecondaryDisplayStyle;
    long long _subtitleAccessoryIcon;
    long long _imageViewIcon;
    id <SPTGaiaDevicePickerCellDelegate> _delegate;
    NSString *_subtitle;
    SPTGaiaDevicePickerGLUETheme *_theme;
    UIColor *_mainIconColour;
    UIColor *_subtitleIconColour;
    GLUEImageView *_mainImageView;
    GLUEImageView *_subtitleImageView;
}

@property(retain, nonatomic) GLUEImageView *subtitleImageView; // @synthesize subtitleImageView=_subtitleImageView;
@property(retain, nonatomic) GLUEImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(readonly, nonatomic) UIColor *subtitleIconColour; // @synthesize subtitleIconColour=_subtitleIconColour;
@property(readonly, nonatomic) UIColor *mainIconColour; // @synthesize mainIconColour=_mainIconColour;
@property(retain, nonatomic) SPTGaiaDevicePickerGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) __weak id <SPTGaiaDevicePickerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool subtitleUsesSecondaryDisplayStyle; // @synthesize subtitleUsesSecondaryDisplayStyle=_subtitleUsesSecondaryDisplayStyle;
@property(nonatomic) _Bool usesSecondaryDisplayStyle; // @synthesize usesSecondaryDisplayStyle=_usesSecondaryDisplayStyle;
@property(nonatomic) _Bool loggedIn; // @synthesize loggedIn=_loggedIn;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) long long imageViewIcon; // @synthesize imageViewIcon=_imageViewIcon;
@property(nonatomic) long long subtitleAccessoryIcon; // @synthesize subtitleAccessoryIcon=_subtitleAccessoryIcon;
- (void).cxx_destruct;
- (void)calculateSubtitleAccessoryIconImage;
@property(readonly, nonatomic) long long visualState;
- (void)didTapAccessoryButton:(id)arg1;
- (void)prepareForReuse;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
@property(retain, nonatomic) NSString *title;
- (void)updateSubtitleLabelContent;
- (id)accessibilityElements;
- (void)applyThemeLayout;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

