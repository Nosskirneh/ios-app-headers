//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AKFContentViewController.h"

@class AKFButton, UITextView;
@protocol AKFPhoneResendCodeViewControllerDelegate;

@interface AKFPhoneResendCodeViewController : AKFContentViewController
{
    AKFButton *_resendSMSButton;
    AKFButton *_sendToFacebookButton;
    UITextView *_instructionView;
    id <AKFPhoneResendCodeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <AKFPhoneResendCodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendToFacebook:(id)arg1;
- (void)_resendSMS:(id)arg1;
- (void)applyTheme:(id)arg1;
- (void)addViewConstraints;
- (void)viewDidLoad;
- (unsigned long long)loginFlowState;
- (id)appEventViewName;

@end

