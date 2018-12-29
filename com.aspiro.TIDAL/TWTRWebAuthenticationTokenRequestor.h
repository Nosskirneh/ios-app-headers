//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TwitterUserAPIClient;
@protocol TWTRAPIServiceConfig, TWTRErrorLogger;

@interface TWTRWebAuthenticationTokenRequestor : NSObject
{
    TwitterUserAPIClient *_APIClient;
    id <TWTRAPIServiceConfig> _serviceConfig;
    id <TWTRErrorLogger> _errorLogger;
}

@property(readonly, nonatomic) id <TWTRErrorLogger> errorLogger; // @synthesize errorLogger=_errorLogger;
@property(readonly, nonatomic) id <TWTRAPIServiceConfig> serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(readonly, nonatomic) TwitterUserAPIClient *APIClient; // @synthesize APIClient=_APIClient;
- (void).cxx_destruct;
- (id)unknownLoginErrorWithMessage:(id)arg1;
- (void)didFailToReceiveOAuthToken:(id)arg1;
- (id)dictionaryFromTokenResponseData:(id)arg1;
- (id)tokenFromTokenData:(id)arg1;
- (void)handleRequestTokenResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAuthenticationToken:(CDUnknownBlockType)arg1;
- (id)initWithAuthConfig:(id)arg1 serviceConfig:(id)arg2 errorLogger:(id)arg3;

@end

