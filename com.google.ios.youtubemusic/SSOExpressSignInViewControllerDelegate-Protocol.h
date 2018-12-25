//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, SSOExpressSignInViewController;
@protocol SSOIdentity;

@protocol SSOExpressSignInViewControllerDelegate <NSObject>

@optional
- (void)expressSignInViewControllerDidSkipSignIn:(SSOExpressSignInViewController *)arg1;
- (void)expressSignInViewController:(SSOExpressSignInViewController *)arg1 didSignInIdentities:(NSArray *)arg2 error:(NSError *)arg3;
- (void)expressSignInViewController:(SSOExpressSignInViewController *)arg1 didSignInIdentity:(id <SSOIdentity>)arg2 error:(NSError *)arg3;
@end
