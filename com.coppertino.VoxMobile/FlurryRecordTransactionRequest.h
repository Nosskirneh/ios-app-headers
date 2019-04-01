//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class NSData, NSDate, NSString, SKPaymentTransaction, SKProductsRequest;

@interface FlurryRecordTransactionRequest : NSObject <SKProductsRequestDelegate>
{
    SKPaymentTransaction *_appleTransaction;
    NSData *_receiptData;
    SKProductsRequest *_productsRequest;
    NSDate *_sessionStartTime;
    CDUnknownBlockType _flurryTransactionCallback;
}

@property(copy, nonatomic) CDUnknownBlockType flurryTransactionCallback; // @synthesize flurryTransactionCallback=_flurryTransactionCallback;
@property(retain, nonatomic) NSDate *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(retain, nonatomic) SKProductsRequest *productsRequest; // @synthesize productsRequest=_productsRequest;
@property(retain, nonatomic) NSData *receiptData; // @synthesize receiptData=_receiptData;
@property(retain, nonatomic) SKPaymentTransaction *appleTransaction; // @synthesize appleTransaction=_appleTransaction;
- (void).cxx_destruct;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)start;
- (id)initWithReceiptData:(id)arg1 transaction:(id)arg2 sessionStartTime:(id)arg3 transactionCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

