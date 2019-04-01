//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VOXOfflineModeProtocol-Protocol.h"

@class NSDate, NSDictionary, NSNumber, NSString, NSTimer;

@interface VOXLoopManager : NSObject <VOXOfflineModeProtocol>
{
    NSNumber *_tempAccountIsTrial;
    NSDate *_tempAcccountExpirationDate;
    _Bool _isAuthorized;
    _Bool _isOfflineMode;
    _Bool _shouldShowPurchaseViewWhenPricesAvailable;
    _Bool _expirationAlertShown;
    NSDictionary *_renewableProducts;
    double _totalTimePlayed;
    NSTimer *_accountInfoUpdateTimer;
}

+ (id)shared;
@property _Bool expirationAlertShown; // @synthesize expirationAlertShown=_expirationAlertShown;
@property(retain, nonatomic) NSTimer *accountInfoUpdateTimer; // @synthesize accountInfoUpdateTimer=_accountInfoUpdateTimer;
@property _Bool shouldShowPurchaseViewWhenPricesAvailable; // @synthesize shouldShowPurchaseViewWhenPricesAvailable=_shouldShowPurchaseViewWhenPricesAvailable;
@property(nonatomic) double totalTimePlayed; // @synthesize totalTimePlayed=_totalTimePlayed;
@property(nonatomic) _Bool isOfflineMode; // @synthesize isOfflineMode=_isOfflineMode;
@property(retain, nonatomic) NSDictionary *renewableProducts; // @synthesize renewableProducts=_renewableProducts;
@property(nonatomic) _Bool isAuthorized; // @synthesize isAuthorized=_isAuthorized;
- (void).cxx_destruct;
- (void)getURLForRemoteID:(id)arg1 inCompletion:(CDUnknownBlockType)arg2;
- (void)logout;
- (_Bool)handleOAuthURL:(id)arg1;
- (void)cleanUpLoopCookies;
- (id)oauthSignUpURL;
- (id)oauthURL;
- (void)handleAuthorizeAction;
- (void)configureOnlineMode;
- (void)configureOfflineMode;
- (void)openLoopPurchaseViewFromViewController:(id)arg1;
- (void)openLoopPurchaseViewWhenPricesAvailableFromViewController:(id)arg1;
- (void)openLoopPrivateCabinetInComplition:(CDUnknownBlockType)arg1;
- (void)didRestoreInAppTransactions;
- (void)buySubscriptionWithProductId:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshAccountInfo;
- (void)_sendReceiptToServer;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)init;
- (id)accountExpirationDate;
@property(readonly, nonatomic) NSDate *subscriptionUntilDate;
- (_Bool)shouldAllowPlayback;
- (_Bool)shouldAllowDownload;
- (_Bool)shouldAllowPurchase;
@property(readonly) _Bool disableAllOnTrialExpiration;
@property(readonly) _Bool accountIsTrial;
@property(readonly) _Bool isAccountInGracePeriod;
@property(readonly) _Bool accountExpired;
@property(readonly, nonatomic) NSString *subscriptionStatus;
- (void)_showExpirationPopUp;
- (void)showExpirationPopUp;
@property(readonly) _Bool userDidLoginOnlyFromiOS;
@property(readonly, nonatomic) NSString *userName;
@property(readonly, nonatomic) _Bool isAuthorizationBroken;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

