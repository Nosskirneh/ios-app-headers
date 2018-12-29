//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSOSafariSignInHandler-Protocol.h"

@class NSString, SSOAuthenticationSession, SSOBackgroundSafariController, UIViewController;
@protocol SSOSafariSignInHandlerDelegate, SSOService;

@interface SSOSafariSignIn : NSObject <SSOSafariSignInHandler>
{
    id <SSOService> _service;
    SSOBackgroundSafariController *_backgroundSafariController;
    SSOAuthenticationSession *_authSession;
    UIViewController *_safariViewController;
    id <SSOSafariSignInHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SSOSafariSignInHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scheduleReleaseBackgroundSafariViewController;
- (void)startBackgroundSafariViewController;
- (id)safariViewControllerWithURL:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;
- (id)SSOErrorFromAuthSessionError:(id)arg1;
- (_Bool)dismissSafariViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissAuthSession;
- (void)signInWithURL:(id)arg1 useAuthSession:(_Bool)arg2 presentBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)internalSSOService;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
