//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGoogleAppFlipAuthorizer-Protocol.h"

@class NSString;
@protocol SPTAuthController, SPTGoogleAppFlipURIManager;

@interface SPTGoogleAppFlipAuthorizerImplementation : NSObject <SPTGoogleAppFlipAuthorizer>
{
    id <SPTAuthController> _authController;
    id <SPTGoogleAppFlipURIManager> _uriManager;
}

@property(readonly, nonatomic) __weak id <SPTGoogleAppFlipURIManager> uriManager; // @synthesize uriManager=_uriManager;
@property(readonly, nonatomic) __weak id <SPTAuthController> authController; // @synthesize authController=_authController;
- (void).cxx_destruct;
- (_Bool)handleAuthResponse:(id)arg1 withAuthenticationResult:(_Bool)arg2 redirectURI:(id)arg3 state:(id)arg4;
- (void)performAuthenticationWithClientID:(id)arg1 scopes:(id)arg2 sourceApplication:(id)arg3 redirectURL:(id)arg4 state:(id)arg5;
- (id)initWithAuthController:(id)arg1 uriManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

