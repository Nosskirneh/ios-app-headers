//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SKProduct, UIActivityIndicatorView, UIScrollView, UITableView, UITextView, WMPLoginService, WMPMessageService, WMPPurchaseService, _TtC4WiMP19RoundedCornerButton;

@interface WMPPurchaseScene : UIViewController <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    WMPPurchaseService *_purchaseService;
    WMPLoginService *_loginService;
    WMPMessageService *_messageService;
    SKProduct *_hifiSubscription;
    SKProduct *_premiumSubscription;
    NSArray *_products;
    UITextView *_legalWarningTextView;
    NSLayoutConstraint *_legalTextViewHeightConstraint;
    NSLayoutConstraint *_productTableViewHeightConstraint;
    _TtC4WiMP19RoundedCornerButton *_startTrialButton;
    UIScrollView *_scrollView;
    UITableView *_productTableView;
    UIActivityIndicatorView *_activityIndicatorView;
    id _restorePurchaseObserver;
    id _cancelPurchaseObserver;
    id _productsObserver;
    long long *_subscriptionType;
}

+ (id)getInstance;
@property long long *subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(retain, nonatomic) id productsObserver; // @synthesize productsObserver=_productsObserver;
@property(retain, nonatomic) id cancelPurchaseObserver; // @synthesize cancelPurchaseObserver=_cancelPurchaseObserver;
@property(retain, nonatomic) id restorePurchaseObserver; // @synthesize restorePurchaseObserver=_restorePurchaseObserver;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UITableView *productTableView; // @synthesize productTableView=_productTableView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak _TtC4WiMP19RoundedCornerButton *startTrialButton; // @synthesize startTrialButton=_startTrialButton;
@property(retain, nonatomic) NSLayoutConstraint *productTableViewHeightConstraint; // @synthesize productTableViewHeightConstraint=_productTableViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *legalTextViewHeightConstraint; // @synthesize legalTextViewHeightConstraint=_legalTextViewHeightConstraint;
@property(nonatomic) __weak UITextView *legalWarningTextView; // @synthesize legalWarningTextView=_legalWarningTextView;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) SKProduct *premiumSubscription; // @synthesize premiumSubscription=_premiumSubscription;
@property(retain, nonatomic) SKProduct *hifiSubscription; // @synthesize hifiSubscription=_hifiSubscription;
@property(retain, nonatomic) WMPMessageService *messageService; // @synthesize messageService=_messageService;
@property(retain, nonatomic) WMPLoginService *loginService; // @synthesize loginService=_loginService;
@property(retain, nonatomic) WMPPurchaseService *purchaseService; // @synthesize purchaseService=_purchaseService;
- (void).cxx_destruct;
- (void)setupNavigationbar;
- (void)setupViews;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)closeView:(id)arg1;
- (void)didPressStartTrialButton:(id)arg1;
- (id)productForProductId:(id)arg1;
- (id)premiumProductIdForUser;
- (id)hifiProductIdForUser;
- (void)configureProducts;
- (void)configureLegalTermsText;
- (void)handlePurchasingNotAvailable;
- (void)handlePurchaseError:(id)arg1;
- (void)handlePurchasesNotification:(id)arg1;
- (void)sendReceipt;
- (id)configureActivityIndicator;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
