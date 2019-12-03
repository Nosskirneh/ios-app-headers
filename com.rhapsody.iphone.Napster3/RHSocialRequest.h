//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHRESTRequest.h"

@class NSString;

@interface RHSocialRequest : RHRESTRequest
{
    _Bool _generatePassword;
    int _type;
    NSString *_method;
    NSString *_accessToken;
    NSString *_tokenSecret;
    NSString *_email;
    NSString *_cobrandId;
    NSString *_app;
    NSString *_guid;
}

@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *app; // @synthesize app=_app;
@property(copy, nonatomic) NSString *cobrandId; // @synthesize cobrandId=_cobrandId;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *tokenSecret; // @synthesize tokenSecret=_tokenSecret;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(nonatomic) _Bool generatePassword; // @synthesize generatePassword=_generatePassword;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithMethod:(id)arg1;
- (id)initWithUnlinkAccountRequest:(int)arg1 guid:(id)arg2;
- (id)initWithAuthenticationRequestForMethod:(id)arg1 type:(int)arg2 accessToken:(id)arg3 accessTokenSecret:(id)arg4 email:(id)arg5 cobrandId:(id)arg6 oauthApp:(id)arg7 guid:(id)arg8 generatePassword:(_Bool)arg9;
- (id)httpFields;
- (id)jsonPayload;

@end
