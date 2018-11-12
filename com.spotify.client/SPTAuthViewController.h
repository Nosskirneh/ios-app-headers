//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSHTTPCookie, NSString, SPTAuthAccountsRequest, UIActivityIndicatorView, UIWebView;
@protocol SPTAuthViewControllerDelegate;

@interface SPTAuthViewController : UIViewController <UIWebViewDelegate>
{
    id <SPTAuthViewControllerDelegate> _delegate;
    UIWebView *_webView;
    UIActivityIndicatorView *_activityIndicatorView;
    SPTAuthAccountsRequest *_request;
    NSHTTPCookie *_cookie;
}

@property(retain, nonatomic) NSHTTPCookie *cookie; // @synthesize cookie=_cookie;
@property(retain, nonatomic) SPTAuthAccountsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <SPTAuthViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)spt_popupNavigationControllerCancelButtonTouched:(id)arg1;
- (void)redirectToURL:(id)arg1;
- (void)loadWebView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccountsRequest:(id)arg1 cookie:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

