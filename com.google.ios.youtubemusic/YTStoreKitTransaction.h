//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, SKProduct, YTIAsyncActivityRenderer, YTOfferInfo;
@protocol YTIAPEndpoint, YTResponder;

@interface YTStoreKitTransaction : NSObject <NSCopying>
{
    NSMutableArray *_observers;
    id <YTResponder> _firstResponder;
    NSMutableDictionary *_clientInfo;
    NSMutableArray *_diagnostics;
    unsigned long long _transactionType;
    SKProduct *_product;
    NSString *_productID;
    long long _quantity;
    id <YTIAPEndpoint> _endpoint;
    unsigned long long _status;
    unsigned long long _transactionOrigin;
    NSError *_error;
    NSDate *_offerSelectionDate;
    NSString *_requestorsObfuscatedGaiaId;
    NSString *_deviceTransactionId;
    NSString *_appleTransactionID;
    CDUnknownBlockType _iapHandlerBlock;
    NSString *_offerParams;
    NSDate *_creationDate;
    NSString *_purchaseTimeAppVersion;
}

+ (id)transactionInitiatedFromSystemWithPaymentTransaction:(id)arg1;
+ (id)transactionForSerializedDictionary:(id)arg1;
+ (id)transactionWithEndpoint:(id)arg1 iapHandlerBlock:(CDUnknownBlockType)arg2 firstResponder:(id)arg3;
+ (id)transactionWithEndpoint:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> firstResponder; // @synthesize firstResponder=_firstResponder;
@property(readonly, nonatomic) NSString *purchaseTimeAppVersion; // @synthesize purchaseTimeAppVersion=_purchaseTimeAppVersion;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *offerParams; // @synthesize offerParams=_offerParams;
@property(copy, nonatomic) CDUnknownBlockType iapHandlerBlock; // @synthesize iapHandlerBlock=_iapHandlerBlock;
@property(readonly, nonatomic) NSString *appleTransactionID; // @synthesize appleTransactionID=_appleTransactionID;
@property(readonly, nonatomic) NSString *deviceTransactionId; // @synthesize deviceTransactionId=_deviceTransactionId;
@property(retain, nonatomic) NSString *requestorsObfuscatedGaiaId; // @synthesize requestorsObfuscatedGaiaId=_requestorsObfuscatedGaiaId;
@property(retain, nonatomic) NSDate *offerSelectionDate; // @synthesize offerSelectionDate=_offerSelectionDate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long transactionOrigin; // @synthesize transactionOrigin=_transactionOrigin;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) id <YTIAPEndpoint> endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) SKProduct *product; // @synthesize product=_product;
@property(nonatomic) unsigned long long transactionType; // @synthesize transactionType=_transactionType;
- (void).cxx_destruct;
- (void)logDiagnosticString:(id)arg1;
- (id)originStringForType:(unsigned long long)arg1;
- (id)transactionStatusDescriptionForType:(unsigned long long)arg1;
- (id)transactionTypeDescriptionForType:(unsigned long long)arg1;
- (void)createClientInfoIfNeeded;
- (void)setClientInfo:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateClientInfoWithDictionary:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)archive;
@property(readonly, nonatomic) YTIAsyncActivityRenderer *activityIndicator;
- (void)removeAllObservers;
- (void)removeTransactionObserver:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
@property(readonly, nonatomic) NSDictionary *clientInfo;
@property(readonly, nonatomic) YTOfferInfo *offerInfo;
- (id)serializedDictionary;
- (void)setAppVersionIfNeeded:(id)arg1;
- (void)paymentReceivedWithAppleTransactionId:(id)arg1;
@property(readonly, nonatomic) NSArray *productIds;
@property(readonly, nonatomic) NSString *key;
- (void)failTransactionWithError:(id)arg1;
@property(readonly, nonatomic) NSArray *diagnostics;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSKPaymentTransaction:(id)arg1;
- (id)initWithEndpoint:(id)arg1 iapHandlerBlock:(CDUnknownBlockType)arg2 firstResponder:(id)arg3;
- (id)init;

@end

