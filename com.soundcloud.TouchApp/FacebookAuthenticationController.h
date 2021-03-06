//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKApplicationDelegate, FBSDKLoginManager, FacebookPermissionFactory, UIViewController;

@interface FacebookAuthenticationController : NSObject
{
    UIViewController *_presentingViewController;
    FacebookPermissionFactory *_facebookPermissionFactory;
    FBSDKLoginManager *_loginManager;
    FBSDKApplicationDelegate *_facebookSDKApplicationDelegate;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) FBSDKApplicationDelegate *facebookSDKApplicationDelegate; // @synthesize facebookSDKApplicationDelegate=_facebookSDKApplicationDelegate;
@property(readonly, nonatomic) FBSDKLoginManager *loginManager; // @synthesize loginManager=_loginManager;
@property(readonly, nonatomic) FacebookPermissionFactory *facebookPermissionFactory; // @synthesize facebookPermissionFactory=_facebookPermissionFactory;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (id)birthdayForResult:(id)arg1;
- (void)handleCompletionForLoginResult:(id)arg1 error:(id)arg2 subscriber:(id)arg3;
- (CDUnknownBlockType)requestPermissionResultsHandlerWithSubscriber:(id)arg1;
- (id)requiredPermissions:(_Bool)arg1;
- (id)clearCachedFacebookToken;
- (id)openLogin:(_Bool)arg1;
- (id)socialUserInfo;
- (id)logout;
- (id)serviceToken:(_Bool)arg1;
- (id)askForPublishPermissions;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (void)handleDidBecomeActive;
- (id)initWithFBPermissionFactory:(id)arg1 loginManager:(id)arg2 facebookSDKApplicationDelegate:(id)arg3;
- (id)initObject;

@end

