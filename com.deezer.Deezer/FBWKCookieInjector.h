//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSMutableArray, NSString, WKProcessPool, WKWebView;

@interface FBWKCookieInjector : NSObject <WKNavigationDelegate>
{
    WKWebView *_dummyWKWebView;
    CDUnknownBlockType _completionBlock;
    WKProcessPool *_wkProcessPool;
    FBWKCookieInjector *__self;
    NSMutableArray *_hosts;
}

+ (_Bool)_URLHost:(id)arg1 matchesHost:(id)arg2;
+ (_Bool)_isValidCookieFragment:(id)arg1;
+ (void)injectFBCookiesFromNSHTTPCookieStorageIntoWKProcessPool:(id)arg1 dataStoreContainer:(id)arg2 hosts:(id)arg3 analytics:(id)arg4 isCookieJSDisabled:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) NSMutableArray *hosts; // @synthesize hosts=_hosts;
@property(retain, nonatomic) FBWKCookieInjector *_self; // @synthesize _self=__self;
@property(retain, nonatomic) WKProcessPool *wkProcessPool; // @synthesize wkProcessPool=_wkProcessPool;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) WKWebView *dummyWKWebView; // @synthesize dummyWKWebView=_dummyWKWebView;
- (void).cxx_destruct;
- (void)_injectForPendingHosts;
- (void)_injectFBCookiesFromNSHTTPCookieStorageIntoWKProcessPool:(id)arg1 hosts:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

