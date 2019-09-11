//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginDelayedSignupDialogFactoryDelegate-Protocol.h"
#import "SPTMetaViewControllerObserver-Protocol.h"

@class NSString, SPTDelayedSignupExperimentController, SPTLoginDelayedSignupDialogFactory, SPTLoginDelayedSignupDialogLogger, SPTLoginSlideUpModalPresenter, UIViewController;
@protocol SPTLoginDelayedSignupDialogPresenterDelegate, SPTMetaViewController;

@interface SPTLoginDelayedSignupDialogPresenter : NSObject <SPTMetaViewControllerObserver, SPTLoginDelayedSignupDialogFactoryDelegate>
{
    _Bool _presentDialogWhenMainViewAppears;
    id <SPTLoginDelayedSignupDialogPresenterDelegate> _delegate;
    id <SPTMetaViewController> _metaViewController;
    SPTLoginSlideUpModalPresenter *_modalPresenter;
    SPTLoginDelayedSignupDialogFactory *_dialogFactory;
    SPTLoginDelayedSignupDialogLogger *_logger;
    SPTDelayedSignupExperimentController *_experimentController;
}

@property(retain, nonatomic) SPTDelayedSignupExperimentController *experimentController; // @synthesize experimentController=_experimentController;
@property(retain, nonatomic) SPTLoginDelayedSignupDialogLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTLoginDelayedSignupDialogFactory *dialogFactory; // @synthesize dialogFactory=_dialogFactory;
@property(nonatomic) _Bool presentDialogWhenMainViewAppears; // @synthesize presentDialogWhenMainViewAppears=_presentDialogWhenMainViewAppears;
@property(retain, nonatomic) SPTLoginSlideUpModalPresenter *modalPresenter; // @synthesize modalPresenter=_modalPresenter;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic) __weak id <SPTLoginDelayedSignupDialogPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentShutDownDialogIfNeeded;
@property(readonly, nonatomic) UIViewController *presentingController;
- (void)didChangeRootViewOfMetaViewController:(id)arg1;
- (void)facebookButtonTapped:(id)arg1;
- (void)guestButtonTapped:(id)arg1;
- (void)signupButtonTapped:(id)arg1;
- (void)loginButtonTapped:(id)arg1;
- (void)showShutDownDialog;
- (id)welcomeDialogSecondCellContentView;
- (id)welcomeDialogFirstCellContentView;
- (void)showWelcomeDialog;
- (void)presentWelcomeGuestModeDialog;
- (id)initWithMetaViewController:(id)arg1 modalPresenter:(id)arg2 dialogFactory:(id)arg3 dialogLogger:(id)arg4 experimentController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

