//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTAccessToken, SPTOauthTask;

@protocol SPTOauthTaskDelegate <NSObject>
- (void)oauthTask:(SPTOauthTask *)arg1 didFailWithError:(NSError *)arg2;
- (void)oauthTask:(SPTOauthTask *)arg1 didReceiveToken:(SPTAccessToken *)arg2;
@end

