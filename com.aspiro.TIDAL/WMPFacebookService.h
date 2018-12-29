//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKLoginManager, NSString;

@interface WMPFacebookService : NSObject
{
    NSString *_name;
    FBSDKLoginManager *_loginManager;
}

+ (id)registrationMethodFromSignupAction:(long long)arg1;
+ (void)sendAppEventForAddedPaymentInformation:(_Bool)arg1;
+ (void)sendAppEventForSuccessfulSignupWithAction:(long long)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) FBSDKLoginManager *loginManager; // @synthesize loginManager=_loginManager;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)requestPublicNameWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getFacebookPostsByUserId:(id)arg1 maxCount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disconnectFromFacebookWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectToFacebookWithFacebookAccessToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flushCache;
- (id)accessToken;
- (_Bool)isConnected;
- (void)requestPermissionsRequiredForConnectingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasPermissionsRequiredForConnecting;
- (void)requestPermissionsRequiredForScrobblingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasPermissionsRequiredForScrobbling;
- (void)requestPermissionsRequiredForAuthenticatingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasPermissionsRequiredForAuthenticating;
- (_Bool)hasActiveSession;
- (id)init;

@end

