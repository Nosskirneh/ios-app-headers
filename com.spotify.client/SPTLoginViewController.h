//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTLoginViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginInputAccessoryView, SPTLoginView, SPTLoginViewModel, SPTProgressView, UITapGestureRecognizer;
@protocol SPTPageContainer;

@interface SPTLoginViewController : UIViewController <SPTNavigationControllerNavigationBarState, UITextFieldDelegate, SPTLoginViewModelDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTLoginViewModel *_viewModel;
    UITapGestureRecognizer *_forgotPasswordTapRecognizer;
    UITapGestureRecognizer *_magicLinkTapRecognizer;
    SPTProgressView *_progressView;
    SPTLoginInputAccessoryView *_loginInputAccessoryView;
}

@property(retain, nonatomic) SPTLoginInputAccessoryView *loginInputAccessoryView; // @synthesize loginInputAccessoryView=_loginInputAccessoryView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITapGestureRecognizer *magicLinkTapRecognizer; // @synthesize magicLinkTapRecognizer=_magicLinkTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *forgotPasswordTapRecognizer; // @synthesize forgotPasswordTapRecognizer=_forgotPasswordTapRecognizer;
@property(readonly, nonatomic) SPTLoginViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (id)inputAccessoryView;
- (id)loginButton;
- (void)hideProgressView;
- (void)showProgressView;
- (void)loginWithoutPasswordButtonTap:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)viewModelDidSucceedRequestMagicLink:(id)arg1;
- (void)viewModel:(id)arg1 didFailRequestMagicLinkWithError:(id)arg2;
- (void)viewModelDidStartRequestMagicLink:(id)arg1;
- (void)viewModelDidCompleteLoginWithSuccess:(id)arg1;
- (void)viewModel:(id)arg1 didCompleteLoginWithError:(id)arg2;
- (void)viewModelDidCompleteLoginWithNetworkDisabledError:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)enableLoginButtonIfNeeded;
- (_Bool)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)hideLoadingState;
- (void)login;
- (void)updateLoginFormWithUserName:(id)arg1 password:(id)arg2;
- (void)onePasswordLoginButtonTapped:(id)arg1;
- (void)userDidTapForgotPasswordLabel:(id)arg1;
- (void)userDidTouchUpInsideLoginButton:(id)arg1;
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
@property(retain, nonatomic) SPTLoginView *view; // @dynamic view;

@end

