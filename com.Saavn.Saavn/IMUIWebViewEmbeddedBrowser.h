//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMEmbeddedBrowser.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface IMUIWebViewEmbeddedBrowser : IMEmbeddedBrowser <UIWebViewDelegate>
{
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseUIWebView;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)closeEmbeddedBrowser;
- (void)goBack;
- (void)goFwd;
- (void)refresh;
- (void)openSafari;
- (void)checkButtonAction;
- (void)loadRequest:(id)arg1;
- (void)addWebViewUI;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

