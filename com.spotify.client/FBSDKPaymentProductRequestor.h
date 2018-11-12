//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class NSString, SKPaymentTransaction, SKProductsRequest;

@interface FBSDKPaymentProductRequestor : NSObject <SKProductsRequestDelegate>
{
    SKPaymentTransaction *_transaction;
    SKProductsRequest *_productRequest;
}

+ (void)initialize;
@property(retain, nonatomic) SKProductsRequest *productRequest; // @synthesize productRequest=_productRequest;
@property(retain, nonatomic) SKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)fetchDeviceReceipt;
- (void)logImplicitPurchaseEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
- (void)cleanUp;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)logTransactionEvent:(id)arg1;
- (id)getTruncatedString:(id)arg1;
- (void)resolveProducts;
- (id)initWithTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

