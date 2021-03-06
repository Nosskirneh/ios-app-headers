//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface RMStoreTransaction : NSObject <NSCoding>
{
    _Bool _consumed;
    NSString *_productIdentifier;
    NSDate *_transactionDate;
    NSString *_transactionIdentifier;
}

@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(nonatomic) _Bool consumed; // @synthesize consumed=_consumed;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentTransaction:(id)arg1;

@end

