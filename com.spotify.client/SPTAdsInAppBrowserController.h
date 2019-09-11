//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWebViewControllerDelegate-Protocol.h"

@class NSString, NSURL, UIViewController;
@protocol SPTLogCenter, SPTWebViewController, SPTWebViewFactory;

@interface SPTAdsInAppBrowserController : NSObject <SPTWebViewControllerDelegate>
{
    id <SPTWebViewFactory> _webViewFactory;
    UIViewController<SPTWebViewController> *_webViewController;
    id <SPTLogCenter> _logCenter;
    NSURL *_initialURL;
}

@property(retain, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) UIViewController<SPTWebViewController> *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) id <SPTWebViewFactory> webViewFactory; // @synthesize webViewFactory=_webViewFactory;
- (void).cxx_destruct;
- (void)logError:(id)arg1;
- (id)jsonErrorStringWithError:(id)arg1;
- (id)devicePlatform;
- (id)logMessageWithEventName:(id)arg1 jsonData:(id)arg2;
- (id)errorMessageHTML;
- (void)showErrorMessage;
- (void)webViewController:(id)arg1 didFailProvisionalNavigation:(unsigned long long)arg2 withError:(id)arg3;
- (void)webViewControllerDidDisappear:(id)arg1;
- (void)webViewControllerDidAppear:(id)arg1;
- (void)webViewController:(id)arg1 didFailNavigation:(unsigned long long)arg2 withError:(id)arg3;
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(unsigned long long)arg2;
- (void)webViewController:(id)arg1 didFinishNavigation:(unsigned long long)arg2;
- (void)presentBrowserWithURL:(id)arg1;
- (id)initWithWebViewFactory:(id)arg1 logCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

