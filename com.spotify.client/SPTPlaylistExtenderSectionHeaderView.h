//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTTableViewSectionHeaderView.h"

@class CAGradientLayer, CALayer, GLUELabel, NSLayoutConstraint, NSString, SPTActivityIndicatorView, UIButton, UITapGestureRecognizer;
@protocol SPTPlaylistExtenderSectionHeaderViewDelegate;

@interface SPTPlaylistExtenderSectionHeaderView : SPTTableViewSectionHeaderView
{
    id <SPTPlaylistExtenderSectionHeaderViewDelegate> _delegate;
    NSString *_detailedDescription;
    unsigned long long _currentDisplayMode;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUELabel *_detailedDescriptionLabel;
    SPTActivityIndicatorView *_activityIndicator;
    UIButton *_expandButton;
    CAGradientLayer *_gradientLayer;
    CALayer *_backgroundLayer;
    UITapGestureRecognizer *_tapGesture;
    NSLayoutConstraint *_activityVerticalConstraint;
}

+ (id)styleForStyle:(long long)arg1 theme:(id)arg2;
+ (double)preferredHeightForStyle:(long long)arg1;
@property(retain, nonatomic) NSLayoutConstraint *activityVerticalConstraint; // @synthesize activityVerticalConstraint=_activityVerticalConstraint;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) SPTActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) GLUELabel *detailedDescriptionLabel; // @synthesize detailedDescriptionLabel=_detailedDescriptionLabel;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
@property(copy, nonatomic) NSString *detailedDescription; // @synthesize detailedDescription=_detailedDescription;
@property(nonatomic) __weak id <SPTPlaylistExtenderSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTableViewThemeStyle:(long long)arg1;
- (void)applyGlue2StyleWithTheme:(id)arg1;
- (void)layoutSubviews;
- (void)stopExpandAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopRefreshAnimation;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)startRefreshAnimation;
@property(readonly, nonatomic) double subtitleBaseline;
@property(copy, nonatomic) NSString *subtitle;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)applyStyling;
- (void)expandCollapseAction:(id)arg1;
- (void)tapGestureEvent:(id)arg1;
- (void)displayWithSubtitle:(id)arg1;
- (void)displayWithDetailedDescription:(id)arg1;
- (void)displayWithLoadingAnimation;
- (double)preferredHeight;
- (void)updateConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

@end

