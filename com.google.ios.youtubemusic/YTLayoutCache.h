//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface YTLayoutCache : NSObject
{
    NSMutableDictionary *_cache;
    long long _capacityMin;
    long long _capacityMax;
}

+ (void)copyNodeBoxFrom:(id)arg1 to:(id)arg2;
+ (void)applyCachedLayout:(id)arg1 toLayout:(id)arg2;
- (void).cxx_destruct;
- (void)purgeCacheIfNeeded;
- (void)setLayout:(id)arg1 forKey:(id)arg2;
- (id)layoutForKey:(id)arg1;
- (id)initWithCapacityMin:(long long)arg1 capacityMax:(long long)arg2;

@end

