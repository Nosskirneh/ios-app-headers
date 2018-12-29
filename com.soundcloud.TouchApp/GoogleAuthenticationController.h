//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIDSignInDelegate-Protocol.h"
#import "GIDSignInUIDelegate-Protocol.h"

@class AppNavigation, Environment, GIDSignIn, NSString, RACSubject;

@interface GoogleAuthenticationController : NSObject <GIDSignInDelegate, GIDSignInUIDelegate>
{
    GIDSignIn *_googleSignIn;
    Environment *_environment;
    RACSubject *_signUpSubject;
    AppNavigation *_appNavigation;
}

@property(readonly, nonatomic) AppNavigation *appNavigation; // @synthesize appNavigation=_appNavigation;
@property(readonly, nonatomic) RACSubject *signUpSubject; // @synthesize signUpSubject=_signUpSubject;
@property(readonly, nonatomic) Environment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) GIDSignIn *googleSignIn; // @synthesize googleSignIn=_googleSignIn;
- (void).cxx_destruct;
- (void)setupGooglePlus;
- (void)signIn:(id)arg1 dismissViewController:(id)arg2;
- (void)signIn:(id)arg1 presentViewController:(id)arg2;
- (void)signIn:(id)arg1 didSignInForUser:(id)arg2 withError:(id)arg3;
- (id)signUp;
- (id)initWithGoogleSignIn:(id)arg1 environment:(id)arg2 appNavigation:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
