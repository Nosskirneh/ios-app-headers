//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class GLUEButton, GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, SPTLoginFormScrollView, SPTLoginInputFormView;

@interface SPTRecoverAccountFormView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    SPTLoginInputFormView *_formView;
    GLUEButton *_submitButton;
    UIView *_contentView;
    SPTLoginFormScrollView *_scrollView;
    GLUEGradientView *_backgroundGradientView;
    NSLayoutConstraint *_titleLabelTopMargin;
    NSLayoutConstraint *_subtitleLabelTopMargin;
    NSLayoutConstraint *_formViewTopMargin;
    NSLayoutConstraint *_formViewHorizontalMargin;
    NSLayoutConstraint *_textHorizontalMargin;
    NSLayoutConstraint *_submitButtonTopMargin;
    NSLayoutConstraint *_submitButtonBottomMargin;
}

@property(retain, nonatomic) NSLayoutConstraint *submitButtonBottomMargin; // @synthesize submitButtonBottomMargin=_submitButtonBottomMargin;
@property(retain, nonatomic) NSLayoutConstraint *submitButtonTopMargin; // @synthesize submitButtonTopMargin=_submitButtonTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *textHorizontalMargin; // @synthesize textHorizontalMargin=_textHorizontalMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewHorizontalMargin; // @synthesize formViewHorizontalMargin=_formViewHorizontalMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewTopMargin; // @synthesize formViewTopMargin=_formViewTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelTopMargin; // @synthesize subtitleLabelTopMargin=_subtitleLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) SPTLoginFormScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) GLUEButton *submitButton; // @synthesize submitButton=_submitButton;
@property(readonly, nonatomic) SPTLoginInputFormView *formView; // @synthesize formView=_formView;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

