//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AKFContentViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class AKFInputView, NSString, UIImageView;
@protocol AKFEmailLoginViewControllerDelegate;

@interface AKFEmailLoginViewController : AKFContentViewController <UITextFieldDelegate>
{
    unsigned long long _buttonType;
    AKFInputView *_emailView;
    UIImageView *_errorImageView;
    _Bool _hasInputError;
    NSString *_initialEmail;
    struct UIEdgeInsets _initialEmailContentInsets;
    unsigned long long _responseType;
    _Bool _retry;
    id <AKFEmailLoginViewControllerDelegate> _delegate;
}

@property(nonatomic, getter=isRetrying) _Bool retry; // @synthesize retry=_retry;
@property(nonatomic) __weak id <AKFEmailLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateStrings;
- (void)_updateEmailText:(id)arg1;
- (void)_updateNextButtonForText:(id)arg1;
- (void)_setHasInputError:(_Bool)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)next:(id)arg1;
- (void)applyTheme:(id)arg1;
- (void)loadAdvancedUI;
- (id)defaultBodyView;
- (void)addViewConstraints;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)loginFlowState;
- (id)appEventViewName;
- (id)appEventNextButtonType;
- (id)appEventExtras;
- (void)setInitialEmail:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

