//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RMStoreTransactionPersistor-Protocol.h"

@class NSString;

@interface RMStoreUserDefaultsPersistence : NSObject <RMStoreTransactionPersistor>
{
}

- (void)setTransactions:(id)arg1 forProductIdentifier:(id)arg2;
- (id)transactionWithData:(id)arg1;
- (id)dataWithTransaction:(id)arg1;
- (id)userDefaults;
- (id)transactionsForProductOfIdentifier:(id)arg1;
- (id)purchasedProductIdentifiers;
- (_Bool)isPurchasedProductOfIdentifier:(id)arg1;
- (long long)countProductOfdentifier:(id)arg1;
- (_Bool)consumeProductOfIdentifier:(id)arg1;
- (void)removeTransactions;
- (void)persistTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

