//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLoginLogger;

@interface SPTLoginAppleAuthorizationControllerLogger : NSObject
{
    id <SPTLoginLogger> _logger;
}

@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logUserDidSeeEmailAlreadyExistsDialog;
- (void)logUserDidTapDismissButton;
- (void)logUserDidTapGoToLoginButton;
- (void)logDidFailToShowCredentialsDialogWithType:(unsigned long long)arg1;
- (void)logUserDidCancelCredentialsDialogWithType:(unsigned long long)arg1;
- (void)logUserDidSelectCredentials;
- (void)logUserEligibleForTest;
- (id)initWithLogger:(id)arg1;

@end

