//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURLSession, TWTRAuthConfig;
@protocol TWTRAPIServiceConfig, TWTRAuthSession, TWTRErrorLogger;

@protocol TWTRNetworkSessionProvider <NSObject>
+ (void)guestSessionWithAuthConfig:(TWTRAuthConfig *)arg1 APIServiceConfig:(id <TWTRAPIServiceConfig>)arg2 URLSession:(NSURLSession *)arg3 accessToken:(NSString *)arg4 completion:(void (^)(TWTRGuestSession *, NSError *))arg5;
+ (void)verifySessionWithAuthToken:(NSString *)arg1 authSecret:(NSString *)arg2 withAuthConfig:(TWTRAuthConfig *)arg3 APIServiceConfig:(id <TWTRAPIServiceConfig>)arg4 URLSession:(NSURLSession *)arg5 completion:(void (^)(TWTRSession *, NSError *))arg6;
+ (void)verifyUserSession:(id <TWTRAuthSession>)arg1 withAuthConfig:(TWTRAuthConfig *)arg2 APIServiceConfig:(id <TWTRAPIServiceConfig>)arg3 URLSession:(NSURLSession *)arg4 completion:(void (^)(TWTRSession *, NSError *))arg5;
+ (void)userSessionWithAuthConfig:(TWTRAuthConfig *)arg1 APIServiceConfig:(id <TWTRAPIServiceConfig>)arg2 errorLogger:(id <TWTRErrorLogger>)arg3 completion:(void (^)(TWTRSession *, NSError *))arg4;
@end

