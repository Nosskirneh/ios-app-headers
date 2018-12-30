//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString, WKWebView;
@protocol AnghamiWebViewDelegate;

@interface AnghamiWebView : NSObject <UIWebViewDelegate, WKNavigationDelegate, WKUIDelegate>
{
    _Bool _isFinishedLoading;
    id <AnghamiWebViewDelegate> delegate;
    WKWebView *_webView;
}

@property _Bool isFinishedLoading; // @synthesize isFinishedLoading=_isFinishedLoading;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) id <AnghamiWebViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (_Bool)shouldLoadURL:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)loadTheRequest:(id)arg1;
- (void)adjustInsets;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

