//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppStorePaymentQueue, StorePaymentFactory;

@interface AppStorePaymentService : NSObject
{
    AppStorePaymentQueue *_paymentQueue;
    StorePaymentFactory *_storePaymentFactory;
}

@property(readonly, nonatomic) StorePaymentFactory *storePaymentFactory; // @synthesize storePaymentFactory=_storePaymentFactory;
@property(readonly, nonatomic) AppStorePaymentQueue *paymentQueue; // @synthesize paymentQueue=_paymentQueue;
- (void).cxx_destruct;
- (void)handleTransaction:(id)arg1 subscriber:(id)arg2;
- (id)purchaseProduct:(id)arg1 checkoutToken:(id)arg2;
- (id)initWithPaymentQueue:(id)arg1 storePaymentFactory:(id)arg2;
- (id)init;

@end

