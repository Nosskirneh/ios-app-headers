//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SPTSearchUISearchBarStyle, SPTSearchUITintView, UIButton, UIImageView, UIStackView, UITextField, UIVisualEffectView;
@protocol SPTSearchUISearchBarDelegate;

@interface SPTSearchUISearchBar : UIView <UITextFieldDelegate, GLUEStyleable>
{
    NSString *_text;
    NSString *_placeholderText;
    id <SPTSearchUISearchBarDelegate> _delegate;
    SPTSearchUISearchBarStyle *_style;
    UIStackView *_stackView;
    UIView *_leadingContainerView;
    UIImageView *_searchIconImageView;
    UITextField *_textField;
    UIView *_trailingContainerView;
    UIButton *_clearButton;
    UIVisualEffectView *_vibrancyView;
    SPTSearchUITintView *_tintView;
}

@property(readonly, nonatomic) SPTSearchUITintView *tintView; // @synthesize tintView=_tintView;
@property(readonly, nonatomic) UIVisualEffectView *vibrancyView; // @synthesize vibrancyView=_vibrancyView;
@property(readonly, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(readonly, nonatomic) UIView *trailingContainerView; // @synthesize trailingContainerView=_trailingContainerView;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) UIImageView *searchIconImageView; // @synthesize searchIconImageView=_searchIconImageView;
@property(readonly, nonatomic) UIView *leadingContainerView; // @synthesize leadingContainerView=_leadingContainerView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) SPTSearchUISearchBarStyle *style; // @synthesize style=_style;
@property(nonatomic) __weak id <SPTSearchUISearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)clearButtonPressed;
- (void)textChanged;
- (void)setText:(id)arg1 updatingTextField:(_Bool)arg2;
- (void)setUpConstraints;
- (id)makeAttributedPlaceholder;
- (struct CGSize)iconSize;
- (id)makeImageForIcon:(long long)arg1;
- (void)updateStackViewAppearance;
- (void)updateAppearance;
- (void)setUpViewHierarchy;
- (void)setUpViews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (_Bool)becomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)viewForFirstBaselineLayout;
@property(copy, nonatomic) NSString *clearButtonAccessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

