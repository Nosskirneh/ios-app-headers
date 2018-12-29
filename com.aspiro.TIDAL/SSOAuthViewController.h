//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, WKWebView;

@interface SSOAuthViewController : UIViewController <WKNavigationDelegate>
{
    _Bool _resultSent;
    NSString *_clientId;
    NSString *_clientSecret;
    NSString *_redirectUri;
    NSString *_responseType;
    CDUnknownBlockType _callback;
    WKWebView *_webView;
}

@property(nonatomic) _Bool resultSent; // @synthesize resultSent=_resultSent;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *responseType; // @synthesize responseType=_responseType;
@property(retain, nonatomic) NSString *redirectUri; // @synthesize redirectUri=_redirectUri;
@property(retain, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (int)statusBarHeight;
- (void)doneButtonClicked;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)load;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

