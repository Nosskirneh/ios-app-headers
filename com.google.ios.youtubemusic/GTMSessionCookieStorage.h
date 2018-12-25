//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSHTTPCookieStorage.h>

@class NSMutableArray;

@interface GTMSessionCookieStorage : NSHTTPCookieStorage
{
    NSMutableArray *_cookies;
    unsigned long long _policy;
}

+ (_Bool)hasCookieExpired:(id)arg1;
- (void).cxx_destruct;
- (void)setCookieAcceptPolicy:(unsigned long long)arg1;
- (unsigned long long)cookieAcceptPolicy;
- (void)removeAllCookies;
- (void)removeExpiredCookies;
- (id)cookieMatchingCookie:(id)arg1;
- (void)getCookiesForTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeCookies:(id)arg1 forTask:(id)arg2;
- (id)cookiesForURL:(id)arg1;
- (void)deleteCookie:(id)arg1;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (void)setCookies:(id)arg1;
- (void)internalSetCookie:(id)arg1;
- (void)setCookie:(id)arg1;
- (id)cookies;
- (id)init;

@end

