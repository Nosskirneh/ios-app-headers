//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JMSSOResponseListener-Protocol.h"
#import "JMSSOResultListener-Protocol.h"

@class NSDictionary, NSString;

@interface JioUserManager : NSObject <JMSSOResultListener, JMSSOResponseListener>
{
    NSString *jToken;
    NSString *lbCookie;
    NSString *ssoToken;
    NSString *commonName;
    NSString *subscriberId;
    NSString *userId;
    NSString *uniqueID;
    NSString *phoneNumber;
    _Bool isZLACalledOnce;
    _Bool isOnJioNetwork;
    _Bool isJioLoggedIn;
    _Bool analyticsInitialized;
    _Bool performAutoLogin;
    NSDictionary *savedZLAUserData;
    NSDictionary *currentZLAUserData;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _zlaLoginhandler;
}

+ (void)viewedJioBannerPromptScreen;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType zlaLoginhandler; // @synthesize zlaLoginhandler=_zlaLoginhandler;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool performAutoLogin; // @synthesize performAutoLogin;
@property(nonatomic) _Bool analyticsInitialized; // @synthesize analyticsInitialized;
@property(retain, nonatomic) NSDictionary *currentZLAUserData; // @synthesize currentZLAUserData;
@property(retain, nonatomic) NSDictionary *savedZLAUserData; // @synthesize savedZLAUserData;
@property _Bool isJioLoggedIn; // @synthesize isJioLoggedIn;
- (void).cxx_destruct;
- (void)requiredUpdateJioInfoWithCompletion:(CDUnknownBlockType)arg1 withRefresh:(_Bool)arg2;
- (void)removeZLADataFromKeychain;
- (void)handleRefreshError:(id)arg1;
- (void)ssologInfo:(id)arg1;
- (void)viewedAllPromptScreen;
- (void)printZLAUserDict:(id)arg1;
- (void)printZLAUser:(id)arg1;
- (id)getPhoneNumber;
- (id)getUniqueID;
- (id)getUserID;
- (id)getSubscriberID;
- (id)getSSOToken;
- (id)getLBCookie;
- (id)getJToken;
- (void)refreshZLAUserInfo:(id)arg1;
- (void)checkAndSaveCurrentZLAUser:(id)arg1;
- (void)updateCurrentZLAUser:(id)arg1;
- (void)setCurrentZLAUser:(id)arg1;
- (void)handleJioTuneError:(id)arg1;
- (void)handleJioTuneSuccess:(id)arg1 forVcode:(id)arg2 withRefreshNeeded:(_Bool)arg3;
- (void)setJioTune:(id)arg1 isRefresh:(_Bool)arg2;
- (void)trackJioEvent:(id)arg1 withProperties:(id)arg2;
- (void)startAnalyticsSession;
- (void)registerJioMediaAnalytics;
- (void)updateJioInfoWithCompletion:(CDUnknownBlockType)arg1 withRefresh:(_Bool)arg2;
- (void)updateJioInfo:(_Bool)arg1;
- (void)handleErrorResponse:(id)arg1 withRefresh:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)requestJioLoginWithCompletion:(CDUnknownBlockType)arg1 withRefreshToken:(_Bool)arg2;
- (void)requestJioLogin;
- (_Bool)onUNPWLoginSuccess:(id)arg1;
- (_Bool)onUNPWLoginFailed:(id)arg1;
- (_Bool)onOTPLoginSuccess:(id)arg1;
- (_Bool)onOTPLoginFailed:(id)arg1;
- (void)onSSOOTPIdentifierSuccess:(_Bool)arg1;
- (void)onSSOLoginFailed:(id)arg1 userType:(unsigned long long)arg2;
- (void)onSSOLoginSuccess:(id)arg1;
- (void)onSSOLoginComplete;
- (void)onNotifyUserUpdate;
- (_Bool)onUserLoggedOut;
- (_Bool)onZLALoginFailed:(id)arg1 isAutoLogin:(_Bool)arg2;
- (_Bool)onZLALoginSuccess:(id)arg1;
- (void)getUserFromKeychain;
- (void)removeCurrentAppJioUser;
- (void)clearKeychainData;
- (void)removeJioUser;
- (_Bool)isJioUserDifferent;
- (_Bool)isJioFullDataAvailable;
- (_Bool)isJioUserAvailable;
- (_Bool)isZLAAvailable;
- (_Bool)isUserAvailableInKeychain;
- (void)performZLA;
- (void)performZLAAndAutoLogin:(CDUnknownBlockType)arg1;
- (void)registerJioMediaSSO;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

