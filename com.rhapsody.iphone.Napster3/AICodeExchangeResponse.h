//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIExchangeResponse.h"

@class AIAccessToken, AIRefreshToken;

@interface AICodeExchangeResponse : AIExchangeResponse
{
    AIRefreshToken *refreshToken;
    AIAccessToken *accessToken;
}

@property(readonly) AIAccessToken *accessToken; // @synthesize accessToken;
@property(readonly) AIRefreshToken *refreshToken; // @synthesize refreshToken;
- (void).cxx_destruct;
- (void)extractRefreshToken:(id)arg1 callContext:(id)arg2;
- (void)extractAccessToken:(id)arg1 callContext:(id)arg2;
- (id)extractExpiryDate:(id)arg1 errorObject:(id)arg2;
- (void)parseServerResponse:(id)arg1;

@end

