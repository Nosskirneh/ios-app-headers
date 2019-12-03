//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, WKWebView, WKWebViewConfiguration;

@interface WebViewVC : UIViewController <WKScriptMessageHandler, WKNavigationDelegate, WKUIDelegate>
{
    UIActivityIndicatorView *spinner;
    _Bool formSubmitted;
    _Bool _blockAppContent;
    _Bool _loadSpecialOfferForm;
    _Bool _isUpdateMode;
    CDUnknownBlockType _completionBlock;
    NSString *_url;
    NSString *_markUp;
    WKWebView *_webView;
    WKWebViewConfiguration *_webConfig;
}

@property(retain, nonatomic) WKWebViewConfiguration *webConfig; // @synthesize webConfig=_webConfig;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool isUpdateMode; // @synthesize isUpdateMode=_isUpdateMode;
@property(nonatomic) _Bool loadSpecialOfferForm; // @synthesize loadSpecialOfferForm=_loadSpecialOfferForm;
@property(nonatomic) _Bool blockAppContent; // @synthesize blockAppContent=_blockAppContent;
@property(retain, nonatomic) NSString *markUp; // @synthesize markUp=_markUp;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dismissPanel;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)buttonClickEventTriggeredScriptToAddToDocument;
- (void)setupWebviewCookies:(id)arg1;
- (void)initWebView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
