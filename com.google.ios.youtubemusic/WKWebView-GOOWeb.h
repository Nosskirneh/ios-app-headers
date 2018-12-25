//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "GOOWebView-Protocol.h"

@class NSString, NSURL, UIScrollView;

@interface WKWebView (GOOWeb) <GOOWebView>
- (void)stopProgressMonitoring;
- (void)setupProgressMonitoring;
@property(readonly, nonatomic) NSString *displayTitle;
@property(nonatomic) _Bool displaysHostAsTitle;
@property(nonatomic) _Bool monitorsProgress;
- (void)setWebViewDelegate:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasOnlySecureContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@end

