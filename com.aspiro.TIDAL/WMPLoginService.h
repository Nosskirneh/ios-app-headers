//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol WMPLoginServiceDelegate;

@interface WMPLoginService : NSObject
{
    _Bool _shouldRefreshSessionOnly;
    id <WMPLoginServiceDelegate> _delegate;
    NSString *_username;
    NSString *_password;
    NSString *_wimpToken;
    NSString *_sessionIdentifier;
    NSNumber *_userIdentifier;
    NSString *_countryCode;
}

+ (id)messageForSubstatusCode:(unsigned long long)arg1;
+ (id)titleForSubstatusCode:(unsigned long long)arg1;
@property(nonatomic) _Bool shouldRefreshSessionOnly; // @synthesize shouldRefreshSessionOnly=_shouldRefreshSessionOnly;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSNumber *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSString *wimpToken; // @synthesize wimpToken=_wimpToken;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <WMPLoginServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userFailedToLogin;
- (void)userLoggedIn;
- (void)fetchPurchases;
- (void)startUserServicesWithUserIsChanged:(_Bool)arg1;
- (void)showDeletingOfflineContentWarning;
- (void)logoutUser;
- (void)verifyUserIdentifier:(id)arg1;
- (void)updateLoginUsingJSONObject:(id)arg1;
- (void)updateLoginWithUsername:(id)arg1 withPassword:(id)arg2 usingJSONObject:(id)arg3;
- (void)finalizeLoginWithUserIsChanged:(_Bool)arg1;
- (void)changeUserAndFinalizeLogin;
- (void)refreshCurrentSession;
- (void)invalidateBackendSession;
- (void)loginWithTwitterAccessToken:(id)arg1 accessTokenSecret:(id)arg2;
- (void)loginWithFacebookToken:(id)arg1;
- (void)loginWithWimpToken:(id)arg1;
- (void)loginWithUsername:(id)arg1 andPassword:(id)arg2;

@end

