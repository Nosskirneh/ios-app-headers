//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTLoginWelcomeViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginNoContentWelcomeView, SPTLoginTheme, SPTLoginWelcomeViewModel, SPTProgressView;
@protocol SPTPageContainer;

@interface SPTLoginNoContentWelcomeViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTLoginWelcomeViewModelDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTLoginWelcomeViewModel *_viewModel;
    SPTLoginTheme *_theme;
    SPTProgressView *_progressIndicator;
}

@property(retain, nonatomic) SPTProgressView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLoginWelcomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)didCompleteFacebookLoginWithError:(id)arg1;
- (void)userDidTouchUpInsideSignupButton:(id)arg1;
- (void)userDidTouchUpInsideLoginButton:(id)arg1;
- (void)userDidTouchUpInsideFacebookButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLoginNoContentWelcomeView *view; // @dynamic view;

@end

