//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GIPWebViewController, NSError, NSString, NSURL, NSURLRequest;

@protocol GIPWebViewControllerDelegate <NSObject>

@optional
- (_Bool)webViewController:(GIPWebViewController *)arg1 shouldOpenAppStoreProduct:(NSString *)arg2;
- (void)webViewController:(GIPWebViewController *)arg1 didUpdateTitle:(NSString *)arg2;
- (_Bool)webViewController:(GIPWebViewController *)arg1 shouldOpenExternalURL:(NSURL *)arg2;
- (void)webViewController:(GIPWebViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewControllerDidFinishLoad:(GIPWebViewController *)arg1;
- (void)webViewControllerDidStartLoad:(GIPWebViewController *)arg1;
- (long long)webViewController:(GIPWebViewController *)arg1 shouldHandleAgeRestrictedURLRequest:(NSURLRequest *)arg2;
- (_Bool)webViewController:(GIPWebViewController *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)webViewControllerDidExhaustHistoryStack:(GIPWebViewController *)arg1;
- (void)webViewControllerWillShowVideo:(GIPWebViewController *)arg1;
@end

