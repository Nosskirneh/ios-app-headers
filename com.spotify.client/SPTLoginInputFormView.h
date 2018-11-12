//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTLoginTextField, UIStackView;

@interface SPTLoginInputFormView : UIView <GLUEStyleable>
{
    GLUELabel *_firstFieldTitleLabel;
    GLUELabel *_secondFieldTitleLabel;
    GLUELabel *_secondFieldTitleExtraLabel;
    SPTLoginTextField *_firstField;
    SPTLoginTextField *_secondField;
    GLUELabel *_firstFieldDisclosureLabel;
    GLUELabel *_secondFieldDisclosureLabel;
    NSLayoutConstraint *_inputFieldHeight;
    NSLayoutConstraint *_firstFieldTopMargin;
    NSLayoutConstraint *_secondFieldTopMargin;
    NSLayoutConstraint *_secondFieldTitleLabelTopMargin;
    NSLayoutConstraint *_firstFieldDisclosureLabelTopMargin;
    NSLayoutConstraint *_secondFieldDisclosureLabelTopMargin;
    NSLayoutConstraint *_secondFieldDisclosureLabelBottomMargin;
    NSLayoutConstraint *_firstFieldDisclosureLabelBottomMargin;
    NSLayoutConstraint *_secondFieldDisclosureLabelHeight;
    NSLayoutConstraint *_firstFieldDisclosureLabelHeight;
    UIStackView *_titleStackView;
}

@property(retain, nonatomic) UIStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(retain, nonatomic) NSLayoutConstraint *firstFieldDisclosureLabelHeight; // @synthesize firstFieldDisclosureLabelHeight=_firstFieldDisclosureLabelHeight;
@property(retain, nonatomic) NSLayoutConstraint *secondFieldDisclosureLabelHeight; // @synthesize secondFieldDisclosureLabelHeight=_secondFieldDisclosureLabelHeight;
@property(retain, nonatomic) NSLayoutConstraint *firstFieldDisclosureLabelBottomMargin; // @synthesize firstFieldDisclosureLabelBottomMargin=_firstFieldDisclosureLabelBottomMargin;
@property(retain, nonatomic) NSLayoutConstraint *secondFieldDisclosureLabelBottomMargin; // @synthesize secondFieldDisclosureLabelBottomMargin=_secondFieldDisclosureLabelBottomMargin;
@property(retain, nonatomic) NSLayoutConstraint *secondFieldDisclosureLabelTopMargin; // @synthesize secondFieldDisclosureLabelTopMargin=_secondFieldDisclosureLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *firstFieldDisclosureLabelTopMargin; // @synthesize firstFieldDisclosureLabelTopMargin=_firstFieldDisclosureLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *secondFieldTitleLabelTopMargin; // @synthesize secondFieldTitleLabelTopMargin=_secondFieldTitleLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *secondFieldTopMargin; // @synthesize secondFieldTopMargin=_secondFieldTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *firstFieldTopMargin; // @synthesize firstFieldTopMargin=_firstFieldTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *inputFieldHeight; // @synthesize inputFieldHeight=_inputFieldHeight;
@property(readonly, nonatomic) GLUELabel *secondFieldDisclosureLabel; // @synthesize secondFieldDisclosureLabel=_secondFieldDisclosureLabel;
@property(readonly, nonatomic) GLUELabel *firstFieldDisclosureLabel; // @synthesize firstFieldDisclosureLabel=_firstFieldDisclosureLabel;
@property(readonly, nonatomic) SPTLoginTextField *secondField; // @synthesize secondField=_secondField;
@property(readonly, nonatomic) SPTLoginTextField *firstField; // @synthesize firstField=_firstField;
@property(readonly, nonatomic) GLUELabel *secondFieldTitleExtraLabel; // @synthesize secondFieldTitleExtraLabel=_secondFieldTitleExtraLabel;
@property(readonly, nonatomic) GLUELabel *secondFieldTitleLabel; // @synthesize secondFieldTitleLabel=_secondFieldTitleLabel;
@property(readonly, nonatomic) GLUELabel *firstFieldTitleLabel; // @synthesize firstFieldTitleLabel=_firstFieldTitleLabel;
- (void).cxx_destruct;
- (void)hideSecondTextField;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

