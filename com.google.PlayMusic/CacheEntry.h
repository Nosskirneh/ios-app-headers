//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CacheEntry : NSObject
{
    NSString *_cacheID;
    NSString *_filePath;
    unsigned long long _size;
    long long _owner;
}

+ (id)entryWithCacheID:(id)arg1 path:(id)arg2 size:(unsigned long long)arg3 owner:(long long)arg4;
@property(nonatomic) long long owner; // @synthesize owner=_owner;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *cacheID; // @synthesize cacheID=_cacheID;
- (void).cxx_destruct;

@end
