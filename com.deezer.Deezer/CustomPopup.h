//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, UIActivityIndicatorView, UIWebView;
@protocol CustomPopupDelegate;

@interface CustomPopup : UIView <UIWebViewDelegate>
{
    id <CustomPopupDelegate> _delegate;
    NSMutableDictionary *_params;
    NSString *_serverURL;
    NSURL *_loadingURL;
    UIWebView *_webView;
    UIActivityIndicatorView *_activityIndicatorView;
    long long _orientation;
    _Bool _showingKeyboard;
    _Bool _isViewDisplayed;
    UIView *_modalBackgroundView;
}

- (void).cxx_destruct;
- (void)popupdidFailLoadWithError:(id)arg1;
- (void)dismissWithError:(id)arg1 animated:(_Bool)arg2;
- (void)dialogDidCancel:(id)arg1;
- (void)dismiss:(_Bool)arg1;
- (void)postDismissCleanup;
- (void)cancel;
- (void)close;
- (void)show;
- (void)showPopup;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)sizeToFitOrientation:(_Bool)arg1;
- (void)fadeIn;
- (struct CGAffineTransform)transformForOrientation;
- (void)deviceOrientationDidChange:(id)arg1;
- (_Bool)shouldRotateToOrientation:(long long)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadAndShow;
- (void)loadURL:(id)arg1 get:(id)arg2;
- (void)load;
- (id)generateURL:(id)arg1 params:(id)arg2;
- (void)generateUrlWithBase:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (id)initWithURL:(id)arg1 params:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
