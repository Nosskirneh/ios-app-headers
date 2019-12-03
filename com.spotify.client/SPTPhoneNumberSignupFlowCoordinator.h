//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginPhoneNumberLoginStateDelegate-Protocol.h"
#import "SPTPhoneNumberSignupCallingCodeViewControllerDelegate-Protocol.h"
#import "SPTPhoneNumberSignupPhoneNumberEntryViewControllerDelegate-Protocol.h"
#import "SPTPhoneNumberSignupValidateOtpViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString, SPTPhoneNumberSignupPhoneNumberEntryViewController, SPTPhoneNumberSignupPhoneNumberEntryViewModel, SPTPhoneNumberSignupTheme, SPTPhoneNumberSignupUtils, SPTPhoneNumberSignupValidateOtpViewController;
@protocol SPTDialogController, SPTLoginLoggingService, SPTLoginNavigationCoordinator, SPTLoginService, SPTLoginStateController;

@interface SPTPhoneNumberSignupFlowCoordinator : NSObject <SPTPhoneNumberSignupValidateOtpViewControllerDelegate, SPTPhoneNumberSignupPhoneNumberEntryViewControllerDelegate, SPTPhoneNumberSignupCallingCodeViewControllerDelegate, SPTLoginPhoneNumberLoginStateDelegate>
{
    SPTPhoneNumberSignupTheme *_theme;
    SPTPhoneNumberSignupPhoneNumberEntryViewController *_phoneNumberEntryViewController;
    SPTPhoneNumberSignupValidateOtpViewController *_otpViewController;
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
    id <SPTLoginService> _loginService;
    id <SPTDialogController> _dialogController;
    NSDictionary *_allowedCallingCodes;
    id <SPTLoginLoggingService> _loggingService;
    SPTPhoneNumberSignupPhoneNumberEntryViewModel *_phoneNumberEntryViewModel;
    SPTPhoneNumberSignupUtils *_phoneNumberSignupUtils;
    id <SPTLoginStateController> _loginStateController;
}

@property(readonly, nonatomic) __weak id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(readonly, nonatomic) SPTPhoneNumberSignupUtils *phoneNumberSignupUtils; // @synthesize phoneNumberSignupUtils=_phoneNumberSignupUtils;
@property(retain, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryViewModel *phoneNumberEntryViewModel; // @synthesize phoneNumberEntryViewModel=_phoneNumberEntryViewModel;
@property(readonly, nonatomic) __weak id <SPTLoginLoggingService> loggingService; // @synthesize loggingService=_loggingService;
@property(copy, nonatomic) NSDictionary *allowedCallingCodes; // @synthesize allowedCallingCodes=_allowedCallingCodes;
@property(readonly, nonatomic) id <SPTDialogController> dialogController; // @synthesize dialogController=_dialogController;
@property(readonly, nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(readonly, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(retain, nonatomic) SPTPhoneNumberSignupValidateOtpViewController *otpViewController; // @synthesize otpViewController=_otpViewController;
@property(retain, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryViewController *phoneNumberEntryViewController; // @synthesize phoneNumberEntryViewController=_phoneNumberEntryViewController;
@property(readonly, nonatomic) SPTPhoneNumberSignupTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)removeOtpViewControllerFromNavigationStack;
- (id)selectedCountryCode;
- (id)currentNavigationController;
- (void)viewControllerDidPressCountrySelector:(id)arg1;
- (void)didPhoneNumberSignupLoginCancel;
- (void)coreDidFailLoginWithError:(id)arg1 legacyError:(id)arg2;
- (void)coreDidLogin;
- (void)coreDidReceiveSignupInformation:(id)arg1;
- (void)coreDidReceiveChallenge:(id)arg1;
- (void)viewController:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)validateOtpViewControllerShouldRestartFlow:(id)arg1;
- (void)validateOtpViewControllerEditPhoneNumberRequested:(id)arg1;
- (id)provideOtpViewLogger;
- (id)providePhoneNumberEntryLogger;
- (id)providePhoneNumberEntryViewModel;
- (id)provideNewValidateOtpViewControllerWithChallengeInfo:(id)arg1;
- (id)provideNewCallingCodeViewController;
- (id)providePhoneNumberEntryViewController;
- (id)initWithTheme:(id)arg1 navigationCoordinator:(id)arg2 loginService:(id)arg3 dialogController:(id)arg4 loggingService:(id)arg5 allowedCallingCodes:(id)arg6 phoneNumberSignupUtils:(id)arg7 loginStateController:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

