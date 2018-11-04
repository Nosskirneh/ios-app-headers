//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKRequestDelegate-Protocol.h"

@class NSString, SKPaymentQueue, SKPaymentTransaction;
@protocol DZRInAppPurchaseServiceDelegate, DZRPurchaseValidator;

@interface DZRInAppPurchaseService : NSObject <SKPaymentTransactionObserver, SKRequestDelegate>
{
    id <DZRInAppPurchaseServiceDelegate> _delegate;
    SKPaymentQueue *_paymentQueue;
    id <DZRPurchaseValidator> _purchaseValidator;
}

+ (_Bool)canMakePayments;
@property(retain, nonatomic) id <DZRPurchaseValidator> purchaseValidator; // @synthesize purchaseValidator=_purchaseValidator;
@property(retain, nonatomic) SKPaymentQueue *paymentQueue; // @synthesize paymentQueue=_paymentQueue;
@property(nonatomic) __weak id <DZRInAppPurchaseServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTransactionDeferred:(id)arg1;
- (void)handleTransactionFailed:(id)arg1;
- (void)setValidationErrorCount:(unsigned long long)arg1;
- (void)handleTransaction:(id)arg1 validationFailureWithError:(id)arg2;
- (void)handleTransactionValidated:(id)arg1;
- (void)handleTransactionPurchased:(id)arg1;
- (void)handleTransactionPurchasing:(id)arg1;
- (_Bool)canFinishTransaction:(id)arg1;
- (_Bool)canFinishTransactionInPurchaseError:(id)arg1;
- (id)pendingTransactionsForProductId:(id)arg1;
- (void)handlePendingPaymentForProduct:(id)arg1;
- (_Bool)hasPendingPaymentForProduct:(id)arg1;
- (void)acknowledgePurchaseError:(id)arg1;
- (void)purchaseProduct:(id)arg1 requestedByUser:(id)arg2;
- (void)stopObservingPayments;
- (void)observePayments;
- (id)initWithPaymentQueue:(id)arg1 purchaseValidator:(id)arg2;
- (id)initWithPurchaseValidator:(id)arg1;
- (void)clearTransactions;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
@property(retain, nonatomic) SKPaymentTransaction *transaction;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

