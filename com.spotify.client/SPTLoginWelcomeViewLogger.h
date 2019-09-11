//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginErrorLogger;
@protocol SPTLoginLogger;

@interface SPTLoginWelcomeViewLogger : NSObject
{
    id <SPTLoginLogger> _logger;
    SPTLoginErrorLogger *_errorLogger;
}

@property(retain, nonatomic) SPTLoginErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(retain, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logFacebookLoginError:(id)arg1;
- (void)logUserDidTapLoginButton;
- (void)logUserDidTapFacebookButton;
- (void)logUserDidTapSignupButton;
- (void)logUserDidSeeView;
- (id)initWithLogger:(id)arg1;

@end

