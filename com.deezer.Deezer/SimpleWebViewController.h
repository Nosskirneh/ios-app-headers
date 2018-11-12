//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, UIWebView;

@interface SimpleWebViewController : CommonController <UIWebViewDelegate>
{
    _Bool _needToHideStatusBar;
    _Bool _shouldRestartPlayer;
    UIWebView *_webview;
    NSString *_url;
    NSMutableArray *_observers;
    NSDictionary *_parameters;
}

@property(nonatomic) _Bool shouldRestartPlayer; // @synthesize shouldRestartPlayer=_shouldRestartPlayer;
@property(nonatomic) _Bool needToHideStatusBar; // @synthesize needToHideStatusBar=_needToHideStatusBar;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (id)navigationPath;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)mutePlayer:(_Bool)arg1;
- (id)dzrContentScrollView;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
