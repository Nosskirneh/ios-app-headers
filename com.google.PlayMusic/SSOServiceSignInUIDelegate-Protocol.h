//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SSOAuthAdvice;
@protocol SSOService;

@protocol SSOServiceSignInUIDelegate <NSObject>
- (void)service:(id <SSOService>)arg1 showDialogWithTitle:(NSString *)arg2 error:(NSError *)arg3 callback:(void (^)(void))arg4;
- (void)service:(id <SSOService>)arg1 dismissSafariSignInUIWithCompletion:(void (^)(void))arg2;
- (void)service:(id <SSOService>)arg1 startSignInWithAuthAdvice:(SSOAuthAdvice *)arg2 callback:(void (^)(SSOIdentity *, NSError *))arg3;
- (void)serviceWillBeginSignIn:(id <SSOService>)arg1;
@end

