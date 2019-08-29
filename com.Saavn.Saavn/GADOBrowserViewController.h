//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOViewController.h"

@class GADOAdView, GADOAdViewDelegate, NSURL, UIActivityIndicatorView, UIBarButtonItem, UIToolbar;

@interface GADOBrowserViewController : GADOViewController
{
    NSURL *_URLToLoad;
    NSURL *_referringURLToLoad;
    GADOAdViewDelegate *_adViewDelegate;
    GADOAdView *_adView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_flexibleSpaceButton;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_forwardButton;
    UIBarButtonItem *_reloadButton;
    UIBarButtonItem *_safariButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_spinnerContainingButton;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIBarButtonItem *spinnerContainingButton; // @synthesize spinnerContainingButton=_spinnerContainingButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *safariButton; // @synthesize safariButton=_safariButton;
@property(retain, nonatomic) UIBarButtonItem *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) UIBarButtonItem *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIBarButtonItem *flexibleSpaceButton; // @synthesize flexibleSpaceButton=_flexibleSpaceButton;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) GADOAdView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) GADOAdViewDelegate *adViewDelegate; // @synthesize adViewDelegate=_adViewDelegate;
@property(retain, nonatomic) NSURL *referringURLToLoad; // @synthesize referringURLToLoad=_referringURLToLoad;
@property(retain, nonatomic) NSURL *URLToLoad; // @synthesize URLToLoad=_URLToLoad;
- (void).cxx_destruct;
- (void)openInSafari;
- (void)reload;
- (void)stop;
- (void)forward;
- (void)back;
- (void)load:(id)arg1 referringURL:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (void)refreshToolbar;
- (void)createToolbarButtons;
- (id)buttonWithImage:(id)arg1 name:(id)arg2 width:(long long)arg3 enabled:(_Bool)arg4 action:(SEL)arg5;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

