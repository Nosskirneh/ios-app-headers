//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTAuthCodeChallenge, SPTAuthSignupInfo;

@protocol SPTLoginPhoneNumberLoginStateDelegate <NSObject>
- (void)coreDidFailLoginWithError:(NSError *)arg1 legacyError:(NSError *)arg2;
- (void)coreDidReceiveSignupInformation:(SPTAuthSignupInfo *)arg1;
- (void)coreDidReceiveChallenge:(SPTAuthCodeChallenge *)arg1;
- (void)coreDidLogin;
@end

