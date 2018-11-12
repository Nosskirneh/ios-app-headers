//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulView.h"

@class GLUELabel, GLUEShuffleBadgeLabelViewStateStyle, NSLayoutConstraint, NSString, UIImageView, UIView;

@interface GLUEShuffleBadgeLabelView : GLUEStatefulView
{
    NSString *_text;
    long long _icon;
    GLUEShuffleBadgeLabelViewStateStyle *_currentStyle;
    UIImageView *_iconImageView;
    UIView *_iconBackgroundView;
    UIView *_shadowView;
    GLUELabel *_label;
    NSLayoutConstraint *_iconLabelSpacingConstraint;
    NSLayoutConstraint *_iconBackgroundViewLeadingEdgeConstraint;
    NSLayoutConstraint *_iconBackgroundViewTrailingEdgeConstraint;
    NSLayoutConstraint *_strokeWidthConstraint;
    NSLayoutConstraint *_strokeHeightConstraint;
}

+ (id)shuffleBadgeForHeaderSmall;
+ (id)shuffleBadge;
@property(readonly, nonatomic) NSLayoutConstraint *strokeHeightConstraint; // @synthesize strokeHeightConstraint=_strokeHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *strokeWidthConstraint; // @synthesize strokeWidthConstraint=_strokeWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconBackgroundViewTrailingEdgeConstraint; // @synthesize iconBackgroundViewTrailingEdgeConstraint=_iconBackgroundViewTrailingEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconBackgroundViewLeadingEdgeConstraint; // @synthesize iconBackgroundViewLeadingEdgeConstraint=_iconBackgroundViewLeadingEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconLabelSpacingConstraint; // @synthesize iconLabelSpacingConstraint=_iconLabelSpacingConstraint;
@property(readonly, nonatomic) GLUELabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UIView *iconBackgroundView; // @synthesize iconBackgroundView=_iconBackgroundView;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) GLUEShuffleBadgeLabelViewStateStyle *currentStyle; // @synthesize currentStyle=_currentStyle;
@property(readonly, nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)updateAccessibility;
- (double)badgeRadius;
- (double)iconLabelSpacing;
- (double)iconBackgroundInset;
- (double)edgeInset;
- (struct CGSize)iconSizeForStyle:(id)arg1;
- (void)updateIconWithStyle:(id)arg1;
- (void)applyStateStyle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

