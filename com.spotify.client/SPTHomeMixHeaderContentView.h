//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEGradientView, GLUEImageView, GLUELabel, NSLayoutConstraint, NSString, SPTHomeMixHeaderContentViewStyle, UILayoutGuide, UIStackView;

@interface SPTHomeMixHeaderContentView : UIView <GLUEStyleable>
{
    UIView *_contentView;
    GLUEImageView *_entityImageView;
    GLUELabel *_subtitleLabel;
    GLUEGradientView *_backgroundView;
    UIView *_containerView;
    UIView *_gradientView;
    UIStackView *_mainVerticalStackView;
    UIView *_labelContainer;
    NSLayoutConstraint *_containerTopMarginLayoutConstraint;
    NSLayoutConstraint *_containerHeightLayoutConstraint;
    NSLayoutConstraint *_contentViewHeightToParentHeightLayoutConstraint;
    NSLayoutConstraint *_contentViewLessThanSafeAreaLayoutConstraint;
    SPTHomeMixHeaderContentViewStyle *_currentStyle;
    NSLayoutConstraint *_subtitleMarginLayoutConstraint;
    NSLayoutConstraint *_bottomMarginLayoutConstraint;
    NSLayoutConstraint *_contentViewButtonLayoutConstraint;
    NSLayoutConstraint *_topMarginLayoutConstraint;
    UILayoutGuide *_parentSafeAreaLayoutGuide;
    double _currentSafeAreaMinY;
}

@property(nonatomic) double currentSafeAreaMinY; // @synthesize currentSafeAreaMinY=_currentSafeAreaMinY;
@property(retain, nonatomic) UILayoutGuide *parentSafeAreaLayoutGuide; // @synthesize parentSafeAreaLayoutGuide=_parentSafeAreaLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *topMarginLayoutConstraint; // @synthesize topMarginLayoutConstraint=_topMarginLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewButtonLayoutConstraint; // @synthesize contentViewButtonLayoutConstraint=_contentViewButtonLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginLayoutConstraint; // @synthesize bottomMarginLayoutConstraint=_bottomMarginLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleMarginLayoutConstraint; // @synthesize subtitleMarginLayoutConstraint=_subtitleMarginLayoutConstraint;
@property(copy, nonatomic) SPTHomeMixHeaderContentViewStyle *currentStyle; // @synthesize currentStyle=_currentStyle;
@property(retain, nonatomic) NSLayoutConstraint *contentViewLessThanSafeAreaLayoutConstraint; // @synthesize contentViewLessThanSafeAreaLayoutConstraint=_contentViewLessThanSafeAreaLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightToParentHeightLayoutConstraint; // @synthesize contentViewHeightToParentHeightLayoutConstraint=_contentViewHeightToParentHeightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerHeightLayoutConstraint; // @synthesize containerHeightLayoutConstraint=_containerHeightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerTopMarginLayoutConstraint; // @synthesize containerTopMarginLayoutConstraint=_containerTopMarginLayoutConstraint;
@property(nonatomic) __weak UIView *labelContainer; // @synthesize labelContainer=_labelContainer;
@property(nonatomic) __weak UIStackView *mainVerticalStackView; // @synthesize mainVerticalStackView=_mainVerticalStackView;
@property(nonatomic) __weak UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) __weak GLUEGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) __weak GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) __weak GLUEImageView *entityImageView; // @synthesize entityImageView=_entityImageView;
@property(readonly, nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)enableImageShaddowIfNeeded;
- (void)entityHeaderViewControllerDidUpdateBounceOffsets:(struct UIEdgeInsets)arg1;
- (void)entityHeaderViewControllerDidUpdateVisibleRect:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)glue_applyStyle:(id)arg1;
- (void)establishConstraintsFromSafeAreaLayoutGuide:(id)arg1;
@property(readonly, nonatomic) double minimumHeight;
- (void)addSubtitleIfNeeded;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

