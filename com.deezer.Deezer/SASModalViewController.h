//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIToolbarDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, SASLoaderView, UIActivityIndicatorView, UIBarButtonItem, UIButton, UIWebView;
@protocol SASModalViewControllerDelegate;

@interface SASModalViewController : UIViewController <UIWebViewDelegate, UIToolbarDelegate>
{
    UIWebView *_webView;
    UIButton *_closeButton;
    UIActivityIndicatorView *_activityIndicator;
    SASLoaderView *_loaderView;
    UIBarButtonItem *_webviewPreviousButton;
    UIBarButtonItem *_webviewNextButton;
    _Bool _hasControls;
    _Bool _statusBarWasHidden;
    _Bool _statusBarHidden;
    long long _previousStatusBarStyle;
    long long _statusBarStyle;
    _Bool _askConfirmationBeforeClosingApp;
    id <SASModalViewControllerDelegate> _delegate;
    NSURL *_currentURL;
}

@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic) _Bool askConfirmationBeforeClosingApp; // @synthesize askConfirmationBeforeClosingApp=_askConfirmationBeforeClosingApp;
@property(nonatomic) __weak id <SASModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)topOffset;
- (_Bool)isExternalURL:(id)arg1;
- (void)refreshNavigationButtonsStates;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)safariButtonAction;
- (void)openInSafari;
- (void)nextButtonAction;
- (void)previousButtonAction;
- (void)closeButtonAction;
- (void)dismissModalView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadUrlInWebview:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredStatusBarStyle;
- (void)changeStatusBarStyle:(long long)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)hideStatusBar:(_Bool)arg1;
- (void)restoreStatusBarState;
- (void)saveStatusBarState;
- (void)initializeAndConfigureCloseButton:(long long)arg1;
- (void)initializeAndConfigureBottomToolbar;
- (void)initializeAndConfigureWithControls:(_Bool)arg1;
- (void)initializeAndConfigureTopToolbar;
- (long long)positionForBar:(id)arg1;
- (void)configureModalViewBackground;
- (id)initWithURL:(id)arg1 controls:(_Bool)arg2 skipPosition:(long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
