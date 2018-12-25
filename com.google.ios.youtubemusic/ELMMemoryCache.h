//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PINRemoteImageCaching-Protocol.h"

@class NSString, PINMemoryCache, PINOperationQueue;

@interface ELMMemoryCache : NSObject <PINRemoteImageCaching>
{
    PINMemoryCache *_memoryCache;
    PINOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (_Bool)memoryCacheIsTTLCache;
- (void)setObjectInMemory:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 withAgeLimit:(double)arg4;
- (void)removeObjectForKeyFromMemory:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)objectExistsForKey:(id)arg1;
- (void)setObjectOnDisk:(id)arg1 forKey:(id)arg2;
- (void)objectFromDiskForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)objectFromDiskForKey:(id)arg1;
- (void)setObjectInMemory:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (id)objectFromMemoryForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

