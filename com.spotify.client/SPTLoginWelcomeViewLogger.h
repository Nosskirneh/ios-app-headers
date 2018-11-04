//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTLoginErrorLogger;

@interface SPTLoginWelcomeViewLogger : NSObject
{
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
    SPTLoginErrorLogger *_errorLogger;
}

@property(retain, nonatomic) SPTLoginErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
- (void).cxx_destruct;
- (void)logUserDidLoginWithFacebook;
- (void)logErrorWithCode:(unsigned long long)arg1;
- (void)logUserDidTapLoginButton;
- (void)logUserDidTapFacebookButton;
- (void)logUserDidTapSignupButton;
- (void)logUserDidSeeView;
- (id)initWithAdjustTracker:(id)arg1;

@end

