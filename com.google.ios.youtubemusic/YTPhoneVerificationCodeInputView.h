//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIScrollView, YTFormattedStringLabel, YTIPhoneVerificationCodeInputScreenRenderer, YTQTMButton;
@protocol YTPhoneVerificationCodeInputViewDelegate;

@interface YTPhoneVerificationCodeInputView : UIView <UITextFieldDelegate>
{
    YTIPhoneVerificationCodeInputScreenRenderer *_renderer;
    UIScrollView *_scrollView;
    YTFormattedStringLabel *_instructionLabel;
    YTFormattedStringLabel *_incorrectTitleLabel;
    YTFormattedStringLabel *_incorrectDescriptionLabel;
    YTQTMButton *_resendCodeButton;
    UIButton *_backButton;
    NSMutableArray *_textFields;
    NSMutableArray *_textFieldUnderscores;
    id <YTPhoneVerificationCodeInputViewDelegate> _delegate;
}

@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)updateWithErrorMode:(_Bool)arg1;
- (id)incorrectDescriptionLabelAttributes;
- (id)incorrectTitleLabelAttributes;
- (id)instructionLabelAttributes;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateScrollingWithKeyboardHeight:(double)arg1;
- (void)updateWithErrorRenderer:(id)arg1;
- (id)initWithRenderer:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

