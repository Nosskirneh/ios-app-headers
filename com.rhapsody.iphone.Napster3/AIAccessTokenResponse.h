//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIExchangeResponse.h"

@class AIAccessToken, AIRefreshToken;

@interface AIAccessTokenResponse : AIExchangeResponse
{
    AIRefreshToken *refreshToken;
    AIAccessToken *accessToken;
}

@property(retain) AIAccessToken *accessToken; // @synthesize accessToken;
@property(retain) AIRefreshToken *refreshToken; // @synthesize refreshToken;
- (void).cxx_destruct;
- (void)extractRefreshToken:(id)arg1 errorObject:(id)arg2;
- (void)extractAccessToken:(id)arg1 errorObject:(id)arg2;
- (id)extractTokenExpiryDate:(id)arg1 errorObject:(id)arg2;
- (void)parseServerResponse:(id)arg1;

@end
