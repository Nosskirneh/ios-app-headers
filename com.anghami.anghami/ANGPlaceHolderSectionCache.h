//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LoaderDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ANGPlaceHolderSectionCache : NSObject <LoaderDelegate>
{
    NSMutableDictionary *_cacheDictionary;
    NSObject *_diskCacheLock;
    NSObject *_memCacheLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject *memCacheLock; // @synthesize memCacheLock=_memCacheLock;
@property(retain, nonatomic) NSObject *diskCacheLock; // @synthesize diskCacheLock=_diskCacheLock;
@property(retain, nonatomic) NSMutableDictionary *cacheDictionary; // @synthesize cacheDictionary=_cacheDictionary;
- (void).cxx_destruct;
- (void)loadingFinished:(id)arg1;
- (void)_loadFromLoader:(id)arg1;
- (void)loadSection:(id)arg1;
- (id)plistPath;
- (void)clearCache;
- (id)questionFromDictKey:(id)arg1;
- (_Bool)removeCachedQuestionsForId:(id)arg1;
- (void)removeCachedSection:(id)arg1;
- (id)readObjectsFromDisk;
- (void)_saveToDisk;
- (void)saveToDisk;
- (id)_getCachedSection:(id)arg1;
- (id)getCachedSection:(id)arg1;
- (_Bool)_cacheSection:(id)arg1;
- (void)makeSureCacheLoaded;
- (void)cacheSection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
