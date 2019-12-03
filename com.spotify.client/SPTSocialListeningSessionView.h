//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, NSString, SPTSocialListeningSessionScannableView, UIActivityIndicatorView, UIStackView;

@interface SPTSocialListeningSessionView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_descriptionLabel;
    SPTSocialListeningSessionScannableView *_scannableView;
    GLUELabel *_tryAgainLabel;
    GLUEButton *_tryAgainButton;
    GLUEButton *_scanCodeButton;
    GLUELabel *_privacyDisclaimerLabel;
    GLUEButton *_leaveSessionButton;
    UIActivityIndicatorView *_activityIndicatorView;
    UIStackView *_facepileStackView;
    UIStackView *_stackView;
}

@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UIStackView *facepileStackView; // @synthesize facepileStackView=_facepileStackView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) GLUEButton *leaveSessionButton; // @synthesize leaveSessionButton=_leaveSessionButton;
@property(readonly, nonatomic) GLUELabel *privacyDisclaimerLabel; // @synthesize privacyDisclaimerLabel=_privacyDisclaimerLabel;
@property(readonly, nonatomic) GLUEButton *scanCodeButton; // @synthesize scanCodeButton=_scanCodeButton;
@property(readonly, nonatomic) GLUEButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
@property(readonly, nonatomic) GLUELabel *tryAgainLabel; // @synthesize tryAgainLabel=_tryAgainLabel;
@property(readonly, nonatomic) SPTSocialListeningSessionScannableView *scannableView; // @synthesize scannableView=_scannableView;
@property(readonly, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)addViewConstraints;
- (void)setupLeaveSessionButton;
- (void)setupScanCodeButton;
- (void)setupPrivacyDisclaimerLabel;
- (void)setupTryAgainButton;
- (void)setupTryAgainLabel;
- (void)setupFacepileStackView;
- (void)setupActivityIndicatorView;
- (void)setupScannableView;
- (void)setupDescriptionLabel;
- (void)setupTitleLabel;
- (void)setupStackView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

