//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlurryActor.h"

#import "IFlurryPaymentTransactionSource-Protocol.h"
#import "SKPaymentTransactionObserver-Protocol.h"

@class NSDate, NSMutableArray, NSString;
@protocol IFlurryEventFrameSource;

@interface FlurryPaymentTransactionSource : FlurryActor <SKPaymentTransactionObserver, IFlurryPaymentTransactionSource>
{
    _Bool _isObserverRegistered;
    NSDate *_startTime;
    NSMutableArray *_transactionRequests;
    id <IFlurryEventFrameSource> _eventFrameSource;
}

+ (id)paymentTransactionSourceWithEventFrameSource:(id)arg1;
@property _Bool isObserverRegistered; // @synthesize isObserverRegistered=_isObserverRegistered;
@property(retain, nonatomic) id <IFlurryEventFrameSource> eventFrameSource; // @synthesize eventFrameSource=_eventFrameSource;
@property(retain, nonatomic) NSMutableArray *transactionRequests; // @synthesize transactionRequests=_transactionRequests;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)onqueue_handleTransactionRequest:(id)arg1 transaction:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)onqueue_doRecordTransaction:(id)arg1 statusCallback:(CDUnknownBlockType)arg2;
- (void)onqueue_notifyStatus:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)doRecordTransaction:(id)arg1 statusCallback:(CDUnknownBlockType)arg2;
- (void)recordTransaction:(id)arg1 statusCallback:(CDUnknownBlockType)arg2;
- (void)setIAPReportingEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithEventFrameSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
