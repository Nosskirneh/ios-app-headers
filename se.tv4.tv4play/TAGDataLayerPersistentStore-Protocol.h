//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol TAGDataLayerPersistentStoreCallback;

@protocol TAGDataLayerPersistentStore <NSObject>
- (void)clearKeysWithPrefix:(NSString *)arg1;
- (void)loadSaved:(id <TAGDataLayerPersistentStoreCallback>)arg1;
- (void)saveKeyValues:(NSArray *)arg1 lifetimeInMillis:(unsigned long long)arg2;
@end

