//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKFAccountKitPhoneLoginDelegate-Protocol.h"
#import "AKFConfirmationCodeViewControllerDelegate-Protocol.h"
#import "AKFErrorViewControllerDelegate-Protocol.h"
#import "AKFLoginController-Protocol.h"
#import "AKFPhoneLoginViewControllerDelegate-Protocol.h"
#import "AKFPhoneResendCodeViewControllerDelegate-Protocol.h"

@class AKFAccountKit, AKFNavigationController, AKFPhoneLoginFlowManager, AKFSupportedCountries, NSString;

@interface AKFPhoneLoginController : NSObject <AKFErrorViewControllerDelegate, AKFPhoneResendCodeViewControllerDelegate, AKFAccountKitPhoneLoginDelegate, AKFPhoneLoginViewControllerDelegate, AKFConfirmationCodeViewControllerDelegate, AKFLoginController>
{
    AKFAccountKit *_accountKit;
    NSString *_initialAuthState;
    AKFNavigationController *_navigationController;
    AKFPhoneLoginFlowManager *_phoneLoginFlowManager;
    AKFSupportedCountries *_supportedCountries;
}

- (void).cxx_destruct;
- (void)_resetPhoneFlowManagerIfNecessary;
- (id)_buildConfirmationCodeViewController:(id)arg1;
@property(readonly, nonatomic) unsigned long long loginType;
- (void)cancelLogin;
- (void)errorViewControllerDidTapSendToFacebook:(id)arg1;
- (void)confirmationCodeViewControllerDidRetry:(id)arg1;
- (void)confirmationCodeViewController:(id)arg1 didCompleteWithConfirmationCode:(id)arg2;
- (void)phoneResendCodeViewControllerDidCompleteWithSMS:(id)arg1;
- (void)phoneResendCodeViewControllerDidCompleteWithSendToFacebook:(id)arg1;
- (void)phoneLoginViewController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2;
- (void)accountKitPhoneLoginDidStart:(id)arg1;
- (void)accountKit:(id)arg1 phoneLoginDidFailWithError:(id)arg2;
- (void)accountKit:(id)arg1 phoneLoginDidCompleteWithAuthorizationCode:(id)arg2 state:(id)arg3;
- (void)accountKit:(id)arg1 phoneLoginDidCompleteWithToken:(id)arg2 state:(id)arg3;
- (id)startWithPhoneNumber:(id)arg1 state:(id)arg2;
- (id)resumeWithPhoneNumber:(id)arg1;
- (id)initWithAccountKit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
