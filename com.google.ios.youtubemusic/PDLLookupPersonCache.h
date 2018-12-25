//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIPLRUCache;

@interface PDLLookupPersonCache : NSObject
{
    double _foundPersonCacheFreshInterval;
    GIPLRUCache *_foundPersonCache;
    GIPLRUCache *_notFoundPersonIDCache;
}

@property(readonly, nonatomic) GIPLRUCache *notFoundPersonIDCache; // @synthesize notFoundPersonIDCache=_notFoundPersonIDCache;
@property(readonly, nonatomic) GIPLRUCache *foundPersonCache; // @synthesize foundPersonCache=_foundPersonCache;
@property(readonly, nonatomic) double foundPersonCacheFreshInterval; // @synthesize foundPersonCacheFreshInterval=_foundPersonCacheFreshInterval;
- (void).cxx_destruct;
- (_Bool)isFreshTimestamp:(id)arg1 freshInterval:(double)arg2;
- (void)updateCacheWithFoundResults:(id)arg1 notFoundIDs:(id)arg2;
- (id)personWithPersonID:(id)arg1;
- (_Bool)isNotFoundPersonID:(id)arg1;
- (void)setFoundPersonCacheFreshInterval:(double)arg1;
- (id)init;

@end

