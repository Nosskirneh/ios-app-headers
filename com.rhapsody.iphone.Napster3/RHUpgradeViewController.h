//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHIAPViewController.h"

#import "RHIAPWorkflowDelegate-Protocol.h"
#import "RHLoadingService-Protocol.h"

@class NSDictionary, NSString, NSURLSession, RHIAPWorkflow, RHLoadingController, RHNavigationService, RHPurchaseController, UIActivityIndicatorView, UILabel, UIView;

@interface RHUpgradeViewController : RHIAPViewController <RHIAPWorkflowDelegate, RHLoadingService>
{
    _Bool _upgradeImmediately;
    long long _upgradeFlowMode;
    RHLoadingController *_loadingController;
    RHIAPWorkflow *_iapWorkflow;
    NSDictionary *_userDictionary;
    UIView *_loadingView;
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(nonatomic) __weak UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSDictionary *userDictionary; // @synthesize userDictionary=_userDictionary;
@property(retain, nonatomic) RHIAPWorkflow *iapWorkflow; // @synthesize iapWorkflow=_iapWorkflow;
@property(retain, nonatomic) RHLoadingController *loadingController; // @synthesize loadingController=_loadingController;
@property(nonatomic) long long upgradeFlowMode; // @synthesize upgradeFlowMode=_upgradeFlowMode;
@property(nonatomic) _Bool upgradeImmediately; // @synthesize upgradeImmediately=_upgradeImmediately;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLSession *session;
@property(readonly, nonatomic) RHNavigationService *navigationService;
- (id)dependencies;
- (double)navigationAlpha;
- (_Bool)showNavigationBar;
@property(readonly, nonatomic) NSString *password;
@property(readonly, nonatomic) NSString *email;
- (void)updateUpgradeFlowWithTrialEligibility:(_Bool)arg1;
- (id)isTrialEligible;
- (id)getProducts;
@property(readonly, nonatomic) RHPurchaseController *purchaseController;
- (void)showUnableToUpgradeErrorAlert;
- (void)displayErrorAlertIfNeeded;
- (void)stopSpinner;
- (void)startSpinnerWithText:(id)arg1;
- (void)startSpinner;
- (void)dismissForImmediateUpgrade;
- (void)iapWorkflow:(id)arg1 completedLogInWithSuccess:(_Bool)arg2 loginMethod:(long long)arg3;
- (void)iapWorkflowFailedToCreatePayment:(id)arg1 loginMethod:(long long)arg2;
- (void)iapWorkflow:(id)arg1 failedToAddProduct:(id)arg2 toAccount:(id)arg3 loginMethod:(long long)arg4;
- (void)iapWorkflow:(id)arg1 completedAddProduct:(id)arg2 toAccount:(id)arg3 loginMethod:(long long)arg4;
- (void)finalizePurchaseSequence;
- (id)updateAccountForSelectedProduct:(long long)arg1;
- (id)upgradeAccountWithProduct:(id)arg1 loginMethod:(long long)arg2;
- (id)upgradeAccount:(long long)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 metricsSource:(id)arg3;
- (id)initForImmediateUpgradeWithMetricsSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

