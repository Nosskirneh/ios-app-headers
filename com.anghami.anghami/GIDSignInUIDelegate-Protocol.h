//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GIDSignIn, NSError, UIViewController;

@protocol GIDSignInUIDelegate <NSObject>

@optional
- (void)signIn:(GIDSignIn *)arg1 dismissViewController:(UIViewController *)arg2;
- (void)signIn:(GIDSignIn *)arg1 presentViewController:(UIViewController *)arg2;
- (void)signInWillDispatch:(GIDSignIn *)arg1 error:(NSError *)arg2;
@end

