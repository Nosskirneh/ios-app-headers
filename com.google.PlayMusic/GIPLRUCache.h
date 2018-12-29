//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIPCache-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface GIPLRUCache : NSObject <GIPCache, NSSecureCoding, NSCopying>
{
    NSMutableArray *access_;
    NSMutableDictionary *cache_;
    unsigned long long cacheSize_;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=cacheSize_;
- (void).cxx_destruct;
- (void)lowMemoryWarningReceived:(id)arg1;
- (void)pruneLRUEntries:(unsigned long long)arg1;
- (void)prune;
- (void)touch:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)allKeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)flush;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCacheSize:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
