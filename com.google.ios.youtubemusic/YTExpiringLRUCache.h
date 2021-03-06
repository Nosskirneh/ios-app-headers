//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, YTExpiringLRUCacheNode;

@interface YTExpiringLRUCache : NSObject
{
    NSMutableDictionary *_items;
    unsigned long long _capacity;
    unsigned long long _cost;
    unsigned long long _costLimit;
    YTExpiringLRUCacheNode *_head;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)removeNode:(id)arg1;
- (void)truncate:(unsigned long long)arg1;
- (void)insert:(id)arg1;
- (id)findAndMoveToTop:(id)arg1;
- (id)collectValues:(CDUnknownBlockType)arg1;
- (void)removeExpiringLRUCacheObserver:(id)arg1;
- (void)addExpiringLRUCacheObserver:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)totalCost;
- (unsigned long long)count;
- (id)allValues;
- (id)allKeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expiration:(id)arg3 cost:(unsigned long long)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 expiration:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2 capacity:(unsigned long long)arg3;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithCostLimit:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 costLimit:(unsigned long long)arg2;

@end

