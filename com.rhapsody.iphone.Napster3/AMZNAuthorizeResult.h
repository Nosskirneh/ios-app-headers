//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMZNUser, NSString;

@interface AMZNAuthorizeResult : NSObject
{
    NSString *_token;
    NSString *_authorizationCode;
    NSString *_clientId;
    NSString *_redirectUri;
    AMZNUser *_user;
}

@property(retain, nonatomic) AMZNUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *redirectUri; // @synthesize redirectUri=_redirectUri;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *authorizationCode; // @synthesize authorizationCode=_authorizationCode;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithAccessToken:(id)arg1 user:(id)arg2 authorizationCode:(id)arg3 clientId:(id)arg4 redirectUri:(id)arg5;
- (id)initWithAccessToken:(id)arg1 user:(id)arg2;
- (id)initWithAccessToken:(id)arg1;
- (id)initWithAuthorizationCode:(id)arg1 clientId:(id)arg2 redirectUri:(id)arg3;

@end

