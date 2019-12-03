//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTSignupFacebookConfirmationViewModelDelegate-Protocol.h"
#import "SPTSignupTermsAndPolicyViewModelDelegate-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginTheme, SPTSignupFacebookConfirmationView, SPTSignupFacebookConfirmationViewModel;
@protocol SPTPageContainer;

@interface SPTSignupFacebookConfirmationViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTSignupFacebookConfirmationViewModelDelegate, SPTSignupTermsAndPolicyViewModelDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTLoginTheme *_theme;
    SPTSignupFacebookConfirmationViewModel *_viewModel;
}

@property(retain, nonatomic) SPTSignupFacebookConfirmationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)userDidAcceptAllLicences:(id)arg1;
@property(readonly, nonatomic) NSString *presentingControllerAdjustIdentifier;
@property(readonly, nonatomic) UIViewController *presentingController;
- (void)createUserRequestDidFinishWithError:(id)arg1;
- (void)createUserRequestDidStart;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (unsigned long long)preferredNavigationBarState;
- (void)loginButtonTapped:(id)arg1;
- (void)createButtonTapped:(id)arg1;
- (double)minTermsViewVisibilityOffset;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTSignupFacebookConfirmationView *view; // @dynamic view;

@end

