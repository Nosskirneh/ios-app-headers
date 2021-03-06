//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEButton.h"

#import "SPTConnectAccessButtonViewModelDelegate-Protocol.h"

@class GLUELabel, GLUELabelStyle, NSLayoutConstraint, NSString, SPTConnectAccessButtonViewModel, SPTTheme, UIImageView, UIView;
@protocol GLUETheme;

@interface SPTConnectAccessButton : GLUEButton <SPTConnectAccessButtonViewModelDelegate>
{
    _Bool _usingCompactMode;
    SPTConnectAccessButtonViewModel *_viewModel;
    GLUELabel *_textLabel;
    UIView *_iconContainerView;
    UIImageView *_iconView;
    SPTTheme *_theme;
    id <GLUETheme> _glueTheme;
    GLUELabelStyle *_titleLabelStyle;
    NSLayoutConstraint *_labelTrailingConstraint;
    NSLayoutConstraint *_iconTrailingConstraint;
}

@property(nonatomic) _Bool usingCompactMode; // @synthesize usingCompactMode=_usingCompactMode;
@property(retain, nonatomic) NSLayoutConstraint *iconTrailingConstraint; // @synthesize iconTrailingConstraint=_iconTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelTrailingConstraint; // @synthesize labelTrailingConstraint=_labelTrailingConstraint;
@property(retain, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) GLUELabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) SPTConnectAccessButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)connectAccessButtonViewModelShouldAnimate:(long long)arg1;
- (void)connectAccessButtonViewModelDidChange;
- (void)compactWithoutAnimation;
- (void)animateAppearToCompactMode:(_Bool)arg1;
- (void)makeDisappearUnanimated;
- (void)setupInitialVisibilityState;
- (void)performLayoutAnimation;
- (void)performCompactModeAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateModeChangeToCompact:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)defaultAnimationOptions;
- (void)updateContent;
- (id)backgroundColorForConnectedIndicator:(_Bool)arg1;
- (void)layoutSubviews;
- (void)buttonPressed;
- (void)setupAccessibility;
- (void)setupTouch;
- (void)setupDropShadow;
- (void)updateIndicatorCornerRadius;
- (void)updateConstraintsForCompactMode:(_Bool)arg1;
- (void)setupConstraints;
- (void)setupButton;
- (void)setupIconView;
- (void)setupConnectedIndicator;
- (void)setupLabel;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

