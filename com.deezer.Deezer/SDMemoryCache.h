//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCache.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface SDMemoryCache : NSCache
{
    NSMapTable *_weakCache;
    NSObject<OS_dispatch_semaphore> *_weakCacheLock;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *weakCacheLock; // @synthesize weakCacheLock=_weakCacheLock;
@property(retain, nonatomic) NSMapTable *weakCache; // @synthesize weakCache=_weakCache;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)init;
- (void)dealloc;

@end
