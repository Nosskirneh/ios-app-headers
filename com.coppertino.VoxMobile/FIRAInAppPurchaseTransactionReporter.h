//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"

@class NSString;

@interface FIRAInAppPurchaseTransactionReporter : NSObject <SKPaymentTransactionObserver>
{
    _Bool _reportingEnabled;
    _Bool _reportingWasDisabled;
}

+ (id)transactionFingerprint:(id)arg1;
+ (id)matchByteSequence:(id)arg1 withData:(id)arg2 atIndex:(int)arg3;
+ (id)matchIWithData:(id)arg1 atIndex:(int)arg2;
+ (id)matchHWithData:(id)arg1 atIndex:(int)arg2;
+ (id)matchBWithData:(id)arg1 atIndex:(int)arg2;
+ (id)matchOWithData:(id)arg1 atIndex:(int)arg2;
+ (id)deviceIDData;
+ (_Bool)parseDataBytes:(id)arg1;
+ (_Bool)parseData;
+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool reportingWasDisabled; // @synthesize reportingWasDisabled=_reportingWasDisabled;
- (void)paymentQueue:(id)arg1 updatedFilteredTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)reportTransactionsFromArray:(id)arg1;
- (void)disableReporting;
- (void)enableReporting;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

