//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADWebView.h"

#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString;
@protocol GADWebKitWebViewMRAIDDelegate;

@interface GADWebKitWebView : GADWebView <WKNavigationDelegate, WKUIDelegate>
{
    _Bool _isMRAIDLoaded;
    _Bool _isViewportLoaded;
    _Bool _scalesPageToFit;
    id <GADWebKitWebViewMRAIDDelegate> _MRAIDDelegate;
}

+ (_Bool)isAvailable;
+ (void)initialize;
@property(nonatomic) __weak id <GADWebKitWebViewMRAIDDelegate> MRAIDDelegate; // @synthesize MRAIDDelegate=_MRAIDDelegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)contentSizeUpdatesSynchronously;
- (void)loadRequest:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadUserScripts;
- (void)loadViewport;
- (void)loadMRAID;
- (void)addUserScript:(id)arg1 injectionTime:(long long)arg2;
- (void)evaluateJavaScriptFromString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
