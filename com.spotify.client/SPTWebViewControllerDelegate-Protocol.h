//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSURLRequest;
@protocol SPTWebViewController;

@protocol SPTWebViewControllerDelegate <NSObject>

@optional
- (void)webViewController:(id <SPTWebViewController>)arg1 didFailProvisionalNavigation:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)webViewController:(id <SPTWebViewController>)arg1 didFailNavigation:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)webViewController:(id <SPTWebViewController>)arg1 didFinishNavigation:(unsigned long long)arg2;
- (void)webViewController:(id <SPTWebViewController>)arg1 didStartProvisionalNavigation:(unsigned long long)arg2;
- (NSArray *)webViewControllerShareActivityItems;
- (void)webViewController:(id <SPTWebViewController>)arg1 didFailAuthenticationWithError:(NSError *)arg2;
- (_Bool)webViewController:(id <SPTWebViewController>)arg1 shouldAllowRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)webViewControllerDidDisappear:(id <SPTWebViewController>)arg1;
- (void)webViewControllerWillDisappear:(id <SPTWebViewController>)arg1;
- (void)webViewControllerDidAppear:(id <SPTWebViewController>)arg1;
- (void)webViewControllerWillAppear:(id <SPTWebViewController>)arg1;
@end

