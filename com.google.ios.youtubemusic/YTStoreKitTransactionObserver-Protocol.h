//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTStoreKitTransaction;

@protocol YTStoreKitTransactionObserver <NSObject>
- (void)transaction:(YTStoreKitTransaction *)arg1 statusDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)transaction:(YTStoreKitTransaction *)arg1 statusWillChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
@end

