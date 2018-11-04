//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTLoginViewControllerProtocol.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"
#import "SPTSignupStepOneViewModelDelegate.h"
#import "UITextFieldDelegate.h"

@class NSDictionary, NSError, NSMutableDictionary, NSString, NSURL, SPTSignupStepOneView, SPTSignupStepOneViewModel;

@interface SPTSignupStepOneViewController : UIViewController <SPTNavigationControllerNavigationBarState, UITextFieldDelegate, SPTSignupStepOneViewModelDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTSignupStepOneViewModel *_viewModel;
    NSDictionary *_textFields;
    NSMutableDictionary *_fieldsErrors;
}

@property(retain, nonatomic) NSMutableDictionary *fieldsErrors; // @synthesize fieldsErrors=_fieldsErrors;
@property(retain, nonatomic) NSDictionary *textFields; // @synthesize textFields=_textFields;
@property(retain, nonatomic) SPTSignupStepOneViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)logUserExperiencedErrorOnFieldWithIdentifier:(id)arg1;
- (_Bool)isTextFieldWithIdentifierShowingError:(id)arg1;
- (_Bool)isTextFieldWithIdentifierValid:(id)arg1;
- (void)showDisclosureLabel:(_Bool)arg1 forTextFieldWithIdentifier:(id)arg2;
- (void)updateSubmitButtonState:(_Bool)arg1;
- (void)updateTextFieldWithIdentifier:(id)arg1 state:(unsigned long long)arg2;
- (void)signupViewModelDidValidateFieldWithIdentifier:(id)arg1 error:(id)arg2;
- (id)disclosureLabelForIdentifier:(id)arg1;
- (void)userDidTouchUpInsideNextButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTSignupStepOneView *view; // @dynamic view;

@end

