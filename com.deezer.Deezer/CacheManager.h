//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CacheManagerProtocol;

@interface CacheManager : NSObject
{
    id <CacheManagerProtocol> offlineCacheManager;
}

+ (id)defaultCacheManager;
@property(retain, nonatomic) id <CacheManagerProtocol> offlineCacheManager; // @synthesize offlineCacheManager;
- (void).cxx_destruct;
- (void)removeDBPlaylistFromOfflineCache:(id)arg1;
- (void)removeTrackFromOfflineCache:(id)arg1;
- (void)removePlaylistFromOfflineCache:(id)arg1;
- (void)addPlaylistIntoOfflineCache:(id)arg1;
- (_Bool)userCanUseCache;
- (void)clean;
- (id)init;

@end

