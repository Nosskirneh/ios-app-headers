//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, NSURL, UIActivityIndicatorView, UIButton, UILabel, WKWebView;

@interface WebViewCell : UITableViewCell <WKNavigationDelegate>
{
    UIActivityIndicatorView *spinner;
    UIButton *coverButton;
    UILabel *warningLabel;
    _Bool viewLoaded;
    WKWebView *_webView;
    NSURL *_clickUrl;
    NSString *_markup;
}

@property(retain, nonatomic) NSString *markup; // @synthesize markup=_markup;
@property(retain, nonatomic) NSURL *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)loadURL;
- (void)removeSpinner;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

