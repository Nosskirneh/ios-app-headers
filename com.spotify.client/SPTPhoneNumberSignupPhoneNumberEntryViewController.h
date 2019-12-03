//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPhoneNumberSignupCoreErrorDelegate-Protocol.h"
#import "SPTPhoneNumberSignupPhoneNumberEntryContainerViewDelegate-Protocol.h"

@class NSString, NSURL, SPTPhoneNumberSignupPhoneNumberEntryContainerView, SPTPhoneNumberSignupPhoneNumberEntryViewModel, SPTPhoneNumberSignupTheme;
@protocol SPTDialogController, SPTPageContainer, SPTPhoneNumberSignupPhoneNumberEntryViewControllerDelegate;

@interface SPTPhoneNumberSignupPhoneNumberEntryViewController : UIViewController <SPTPhoneNumberSignupPhoneNumberEntryContainerViewDelegate, SPTNavigationControllerNavigationBarState, SPTPageController, SPTPhoneNumberSignupCoreErrorDelegate>
{
    SPTPhoneNumberSignupPhoneNumberEntryContainerView *_containerView;
    SPTPhoneNumberSignupPhoneNumberEntryViewModel *_viewModel;
    SPTPhoneNumberSignupTheme *_theme;
    id <SPTDialogController> _dialogController;
    id <SPTPhoneNumberSignupPhoneNumberEntryViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SPTPhoneNumberSignupPhoneNumberEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SPTDialogController> dialogController; // @synthesize dialogController=_dialogController;
@property(readonly, nonatomic) SPTPhoneNumberSignupTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)textFieldDidChange:(id)arg1;
- (void)countrySelectorCellPressed;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)nextButtonPressed:(id)arg1;
- (void)dialogButtonPressed;
- (void)showDialogWithTitle:(id)arg1 message:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeModelBindings;
- (void)configureModelBindings;
- (void)showErrorDialog:(unsigned long long)arg1;
- (void)didReceivePhoneNumberSignupErrorFromCore:(unsigned long long)arg1;
- (void)otpRequestDidSucceed;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupCallingCode;
- (void)setupCountrySelector;
- (void)setupNextButton;
- (void)setupPhoneNumberTextField;
- (void)setupTitle;
- (void)configureViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 dialogController:(id)arg2 viewModel:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

