//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIActivityIndicatorView, UIColor, UILabel, UIView;

@interface GoBoardingButton : UIButton
{
    _Bool _loading;
    UIColor *_buttonBorderColor;
    UIColor *_spinnerColor;
    UIActivityIndicatorView *_activityIndicatorView;
    UIView *_highlightOverlayView;
    UILabel *_customLabel;
}

@property(readonly, nonatomic) UILabel *customLabel; // @synthesize customLabel=_customLabel;
@property(readonly, nonatomic) UIView *highlightOverlayView; // @synthesize highlightOverlayView=_highlightOverlayView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic, setter=setIsLoading:) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIColor *spinnerColor; // @synthesize spinnerColor=_spinnerColor;
@property(retain, nonatomic) UIColor *buttonBorderColor; // @synthesize buttonBorderColor=_buttonBorderColor;
- (void).cxx_destruct;
- (void)updateActivityIndicatorViewFrame;
- (void)updateHighlighOverlayViewFrame;
- (void)updateCustomLabelFrame;
- (void)updateSpinnerTintColor;
- (void)updateBorderColor;
- (void)updateHighlightOverlayViewVisibility;
- (void)updateActivityIndicatorViewVisibility;
- (void)initializeViews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
