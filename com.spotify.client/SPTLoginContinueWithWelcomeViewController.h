//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginContinueWithWelcomeContainerViewDelegate-Protocol.h"
#import "SPTLoginContinueWithWelcomeViewModelDelegate-Protocol.h"
#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginContinueWithWelcomeContainerView, SPTLoginContinueWithWelcomeViewModel, SPTLoginTheme, SPTProgressView;
@protocol SPTPageContainer;

@interface SPTLoginContinueWithWelcomeViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTLoginContinueWithWelcomeContainerViewDelegate, SPTLoginContinueWithWelcomeViewModelDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTLoginTheme *_theme;
    SPTLoginContinueWithWelcomeViewModel *_viewModel;
    SPTLoginContinueWithWelcomeContainerView *_containerView;
    SPTProgressView *_progressIndicator;
}

@property(retain, nonatomic) SPTProgressView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) SPTLoginContinueWithWelcomeContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SPTLoginContinueWithWelcomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (void)didCompleteFacebookLoginWithError:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)continueWithEmailPressed:(id)arg1;
- (void)continueWithFacebookPressed:(id)arg1;
- (void)continueWithPhonePressed:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)setupContinueWithFacebookButton;
- (void)setupContinueWithEmailButton;
- (void)setupContinueWithPhoneButton;
- (void)setupContinueWithLabel;
- (void)configureViews;
- (void)hideProgressView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

