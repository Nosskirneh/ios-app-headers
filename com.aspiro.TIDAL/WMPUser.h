//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSUserDefaults, WMPClient, WMPSession, WMPSubscription, _TtC4WiMP13UserFavorites, _TtC4WiMP22RestorePurchaseManager;

@interface WMPUser : NSObject
{
    _Bool _hasConnectedFacebook;
    _Bool _ignoreFacebookContentLogin;
    _Bool _userHasLoggedOut;
    _Bool _credentialsCanBeSet;
    NSNumber *_userIdentifier;
    NSString *_sessionIdentifier;
    NSString *_castAuthenticationToken;
    long long _sessionStatus;
    NSString *_countryCode;
    NSString *_username;
    NSString *_password;
    NSString *_wimpToken;
    WMPClient *_client;
    WMPSession *_session;
    WMPSubscription *_subscription;
    _TtC4WiMP22RestorePurchaseManager *_restorePurchaseManager;
    _TtC4WiMP13UserFavorites *_favorites;
    NSUserDefaults *_userDefaults;
}

+ (_Bool)isCurrentUser:(id)arg1;
+ (id)getSymmetricKey;
+ (id)uniqueKey;
+ (void)setCurrentUser:(id)arg1;
+ (id)currentUser;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) _Bool credentialsCanBeSet; // @synthesize credentialsCanBeSet=_credentialsCanBeSet;
@property(nonatomic) _Bool userHasLoggedOut; // @synthesize userHasLoggedOut=_userHasLoggedOut;
@property(nonatomic) _Bool ignoreFacebookContentLogin; // @synthesize ignoreFacebookContentLogin=_ignoreFacebookContentLogin;
@property(nonatomic) _Bool hasConnectedFacebook; // @synthesize hasConnectedFacebook=_hasConnectedFacebook;
@property(retain, nonatomic) _TtC4WiMP13UserFavorites *favorites; // @synthesize favorites=_favorites;
@property(retain, nonatomic) _TtC4WiMP22RestorePurchaseManager *restorePurchaseManager; // @synthesize restorePurchaseManager=_restorePurchaseManager;
@property(retain, nonatomic) WMPSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) WMPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) WMPClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSString *wimpToken; // @synthesize wimpToken=_wimpToken;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) long long sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property(retain, nonatomic) NSString *castAuthenticationToken; // @synthesize castAuthenticationToken=_castAuthenticationToken;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSNumber *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void).cxx_destruct;
- (void)loadPersistedValues;
- (id)videoQualities;
- (id)soundQualities;
- (void)requestUsernameIsSetInformation;
- (void)downloadFavorites;
- (void)requestUserInformation:(CDUnknownBlockType)arg1;
- (void)userChanged;
- (void)clearSession;
- (void)userDidLogout;
- (void)userDidAuthenticateWithUserIdentifier:(id)arg1 sessionIdentifier:(id)arg2 countryCode:(id)arg3;
- (void)userDidChangePassword:(id)arg1;
- (void)userDidLoginWithUsername:(id)arg1 password:(id)arg2 token:(id)arg3 userIdentifier:(id)arg4 sessionIdentifier:(id)arg5 countryCode:(id)arg6;
- (_Bool)hasWimpToken;
- (_Bool)hasCredentials;
- (_Bool)hasUserInformation;
- (void)setPassword:(id)arg1 forUsername:(id)arg2;
- (void)refreshSession;
- (void)refreshSessionQuietly;
- (void)refreshSessionWithMessage;
- (void)refreshSubscription;
- (_Bool)canRefreshSubscription;
- (id)init;

@end
