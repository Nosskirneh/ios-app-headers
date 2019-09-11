//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginLoadingView.h"

#import "GLUEStyleable-Protocol.h"

@class GLUEGradientStyle, GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, SPTLoginFormScrollView, SPTLoginLoadingActionButton, SPTLoginTextField, UIView;

@interface SPTLoginRecoverAccountView : SPTLoginLoadingView <GLUEStyleable>
{
    SPTLoginLoadingActionButton *_submitButton;
    GLUELabel *_titleLabel;
    GLUELabel *_messageLabel;
    GLUELabel *_inputFieldLabel;
    GLUELabel *_errorLabel;
    SPTLoginTextField *_inputField;
    GLUELabel *_stillNeedHelpLabel;
    UIView *_contentView;
    SPTLoginFormScrollView *_scrollView;
    GLUEGradientView *_backgroundGradientView;
    GLUEGradientStyle *_backgroundGradientStyle;
    NSLayoutConstraint *_titleLabelTopMargin;
    NSLayoutConstraint *_messageLabelTopMargin;
    NSLayoutConstraint *_messageLabelEdgeMargin;
    NSLayoutConstraint *_titleLabelEdgeMargin;
    NSLayoutConstraint *_inputFieldLabelTopMargin;
    NSLayoutConstraint *_inputFieldLabelEdgeMargin;
    NSLayoutConstraint *_inputFieldTopMargin;
    NSLayoutConstraint *_errorLabelTopMargin;
    NSLayoutConstraint *_errorLabelMinHeight;
    NSLayoutConstraint *_sendButtonTopMargin;
    NSLayoutConstraint *_inputFieldHorizontalMargin;
    NSLayoutConstraint *_inputFieldHeight;
    NSLayoutConstraint *_stillNeedHelpLabelTopMargin;
    NSLayoutConstraint *_stillNeedHelpLabelEdgeMargin;
}

@property(retain, nonatomic) NSLayoutConstraint *stillNeedHelpLabelEdgeMargin; // @synthesize stillNeedHelpLabelEdgeMargin=_stillNeedHelpLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *stillNeedHelpLabelTopMargin; // @synthesize stillNeedHelpLabelTopMargin=_stillNeedHelpLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *inputFieldHeight; // @synthesize inputFieldHeight=_inputFieldHeight;
@property(retain, nonatomic) NSLayoutConstraint *inputFieldHorizontalMargin; // @synthesize inputFieldHorizontalMargin=_inputFieldHorizontalMargin;
@property(retain, nonatomic) NSLayoutConstraint *sendButtonTopMargin; // @synthesize sendButtonTopMargin=_sendButtonTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *errorLabelMinHeight; // @synthesize errorLabelMinHeight=_errorLabelMinHeight;
@property(retain, nonatomic) NSLayoutConstraint *errorLabelTopMargin; // @synthesize errorLabelTopMargin=_errorLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *inputFieldTopMargin; // @synthesize inputFieldTopMargin=_inputFieldTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *inputFieldLabelEdgeMargin; // @synthesize inputFieldLabelEdgeMargin=_inputFieldLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *inputFieldLabelTopMargin; // @synthesize inputFieldLabelTopMargin=_inputFieldLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelEdgeMargin; // @synthesize titleLabelEdgeMargin=_titleLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *messageLabelEdgeMargin; // @synthesize messageLabelEdgeMargin=_messageLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *messageLabelTopMargin; // @synthesize messageLabelTopMargin=_messageLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(retain, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) SPTLoginFormScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) GLUELabel *stillNeedHelpLabel; // @synthesize stillNeedHelpLabel=_stillNeedHelpLabel;
@property(readonly, nonatomic) SPTLoginTextField *inputField; // @synthesize inputField=_inputField;
@property(readonly, nonatomic) GLUELabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(readonly, nonatomic) GLUELabel *inputFieldLabel; // @synthesize inputFieldLabel=_inputFieldLabel;
@property(readonly, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)submitButton;
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

