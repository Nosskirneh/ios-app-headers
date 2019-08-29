//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIWebView;

@interface FIRAuthWebView : UIView
{
    UIWebView *_webView;
    UIActivityIndicatorView *_spinner;
}

@property(nonatomic) __weak UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)createSpinner;
- (id)createWebView;
- (void)layoutSubviews;
- (void)initializeSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

