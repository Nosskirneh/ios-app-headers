//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMWebViewController.h"

#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString, WKWebView;

@interface IMWKWebViewController : IMWebViewController <WKNavigationDelegate, WKUIDelegate>
{
    WKWebView *_wkWebView;
}

+ (long long)navigationTypeFrom:(long long)arg1;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
- (void).cxx_destruct;
- (void)firePopupBlockedBeaconWithJS:(id)arg1;
- (void)dealloc;
- (long long)getWebViewType;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isLoading;
- (void)setAllowBounceAndScrollOnWebView:(_Bool)arg1;
- (_Bool)requiresVolumeUpdateBeforeShowWithPublisherMuteEnabled:(_Bool)arg1;
- (_Bool)requiresInitialWindowHierarchy;
- (id)webview;
- (id)evaluateJavaScriptAndReturnStringIfPossible:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)stopLoading;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (id)getNativeCallMessageHandler;
- (id)initWithWebViewFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

