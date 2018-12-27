//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMOAuth2Authentication, GTMSessionFetcher, NSDictionary, NSTimer, NSURL;

@interface GTMOAuth2SignIn : NSObject
{
    GTMOAuth2Authentication *auth_;
    NSURL *authorizationURL_;
    NSDictionary *additionalAuthorizationParameters_;
    id delegate_;
    SEL webRequestSelector_;
    SEL finishedSelector_;
    _Bool hasHandledCallback_;
    GTMSessionFetcher *pendingFetcher_;
    _Bool shouldFetchGoogleUserEmail_;
    _Bool shouldFetchGoogleUserProfile_;
    NSDictionary *userProfile_;
    struct __SCNetworkReachability *reachabilityRef_;
    NSTimer *networkLossTimer_;
    double networkLossTimeoutInterval_;
    _Bool hasNotifiedNetworkLoss_;
    id userData_;
}

+ (id)decodeWebSafeBase64:(id)arg1;
+ (void)revokeTokenForGoogleAuthentication:(id)arg1;
+ (id)userInfoFetcherWithAuth:(id)arg1;
+ (id)mutableURLRequestWithURL:(id)arg1 paramString:(id)arg2;
+ (id)standardGoogleAuthenticationForScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
+ (id)nativeClientRedirectURI;
+ (id)googleUserInfoURL;
+ (id)googleRevocationURL;
+ (id)googleTokenURL;
+ (id)googleAuthorizationURL;
@property(nonatomic) double networkLossTimeoutInterval; // @synthesize networkLossTimeoutInterval=networkLossTimeoutInterval_;
@property(retain, nonatomic) NSDictionary *userProfile; // @synthesize userProfile=userProfile_;
@property(nonatomic) _Bool shouldFetchGoogleUserProfile; // @synthesize shouldFetchGoogleUserProfile=shouldFetchGoogleUserProfile_;
@property(nonatomic) _Bool shouldFetchGoogleUserEmail; // @synthesize shouldFetchGoogleUserEmail=shouldFetchGoogleUserEmail_;
@property(retain, nonatomic) id userData; // @synthesize userData=userData_;
@property(retain) GTMSessionFetcher *pendingFetcher; // @synthesize pendingFetcher=pendingFetcher_;
@property _Bool hasHandledCallback; // @synthesize hasHandledCallback=hasHandledCallback_;
@property(nonatomic) SEL finishedSelector; // @synthesize finishedSelector=finishedSelector_;
@property(nonatomic) SEL webRequestSelector; // @synthesize webRequestSelector=webRequestSelector_;
@property(retain, nonatomic) id delegate; // @synthesize delegate=delegate_;
@property(retain, nonatomic) NSDictionary *additionalAuthorizationParameters; // @synthesize additionalAuthorizationParameters=additionalAuthorizationParameters_;
@property(retain, nonatomic) NSURL *authorizationURL; // @synthesize authorizationURL=authorizationURL_;
@property(retain, nonatomic) GTMOAuth2Authentication *authentication; // @synthesize authentication=auth_;
- (void)stopReachabilityCheck;
- (void)reachabilityTimerFired:(id)arg1;
- (void)reachabilityTarget:(struct __SCNetworkReachability *)arg1 changedFlags:(unsigned int)arg2;
- (void)destroyUnreachabilityTimer;
- (void)startReachabilityCheck;
- (void)invokeFinalCallbackWithError:(id)arg1;
- (void)finishSignInWithError:(id)arg1;
- (void)updateGoogleUserInfoWithData:(id)arg1;
- (void)infoFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (void)fetchGoogleUserInfo;
- (void)auth:(id)arg1 finishedWithFetcher:(id)arg2 error:(id)arg3;
- (void)authCodeObtained;
- (_Bool)loadFailedWithError:(id)arg1;
- (_Bool)cookiesChanged:(id)arg1;
- (_Bool)titleChanged:(id)arg1;
- (_Bool)requestRedirectedToRequest:(id)arg1;
- (void)closeTheWindow;
- (void)windowWasClosed;
- (_Bool)startWebRequest;
- (id)parametersForWebRequest;
- (_Bool)startSigningIn;
- (void)cancelSigningIn;
- (void)dealloc;
- (id)initWithAuthentication:(id)arg1 authorizationURL:(id)arg2 delegate:(id)arg3 webRequestSelector:(SEL)arg4 finishedSelector:(SEL)arg5;
- (void)addScopeForGoogleUserInfo;

@end

