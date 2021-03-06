//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKSharer.h"

@class NSDictionary, NSString, NSURL, OAConsumer, OAToken;
@protocol OASignatureProviding;

@interface SHKOAuthSharer : SHKSharer
{
    NSString *consumerKey;
    NSString *secretKey;
    NSURL *authorizeCallbackURL;
    NSURL *authorizeURL;
    NSURL *accessURL;
    NSURL *requestURL;
    OAConsumer *consumer;
    OAToken *requestToken;
    OAToken *accessToken;
    id <OASignatureProviding> signatureProvider;
    NSDictionary *authorizeResponseQueryVars;
}

+ (void)logout;
+ (void)deleteStoredAccessToken;
@property(retain, nonatomic) NSDictionary *authorizeResponseQueryVars; // @synthesize authorizeResponseQueryVars;
@property(retain) id <OASignatureProviding> signatureProvider; // @synthesize signatureProvider;
@property(retain) OAToken *accessToken; // @synthesize accessToken;
@property(retain) OAToken *requestToken; // @synthesize requestToken;
@property(retain) OAConsumer *consumer; // @synthesize consumer;
@property(retain, nonatomic) NSURL *accessURL; // @synthesize accessURL;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL;
@property(retain, nonatomic) NSURL *authorizeURL; // @synthesize authorizeURL;
@property(retain, nonatomic) NSURL *authorizeCallbackURL; // @synthesize authorizeCallbackURL;
@property(retain, nonatomic) NSString *secretKey; // @synthesize secretKey;
@property(retain, nonatomic) NSString *consumerKey; // @synthesize consumerKey;
- (void)refreshToken;
- (_Bool)restoreAccessToken;
- (void)storeAccessToken;
- (void)tokenAccessTicket:(id)arg1 didFailWithError:(id)arg2;
- (void)tokenAccessTicket:(id)arg1 didFinishWithData:(id)arg2;
- (void)tokenAccessModifyRequest:(id)arg1;
- (void)tokenAccess:(_Bool)arg1;
- (void)tokenAccess;
- (void)tokenAuthorizeCancelledView:(id)arg1;
- (void)tokenAuthorizeView:(id)arg1 didFinishWithSuccess:(_Bool)arg2 queryParams:(id)arg3 error:(id)arg4;
- (void)tokenAuthorize;
- (void)tokenRequestTicket:(id)arg1 didFailWithError:(id)arg2;
- (void)tokenRequestTicket:(id)arg1 didFinishWithData:(id)arg2;
- (void)tokenRequestModifyRequest:(id)arg1;
- (void)tokenRequest;
- (void)promptAuthorization;
- (_Bool)isAuthorized;
- (void)dealloc;

@end

