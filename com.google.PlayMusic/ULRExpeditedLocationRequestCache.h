//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ULRPersistentCache.h"

@class NSArray, NSMutableArray;

@interface ULRExpeditedLocationRequestCache : ULRPersistentCache
{
    NSMutableArray *_requests;
}

- (void).cxx_destruct;
- (void)clearCacheContent;
- (void)failedToWriteCacheContent:(id)arg1 error:(id)arg2;
- (void)priorCacheContent:(id)arg1 error:(id)arg2;
- (_Bool)removeRequest:(id)arg1;
- (_Bool)addRequest:(id)arg1;
@property(readonly, nonatomic) NSArray *requests;
- (id)init;

@end

