//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SwrveReceiptProviderResult : NSObject
{
    NSString *encodedReceipt;
    NSString *transactionId;
}

@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId;
@property(retain, nonatomic) NSString *encodedReceipt; // @synthesize encodedReceipt;
- (void).cxx_destruct;
- (id)init:(id)arg1 withTransactionId:(id)arg2;

@end

