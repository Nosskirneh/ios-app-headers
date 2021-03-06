//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImageStoreManager.h"

@class NSDate;

@interface NewsFeedImageStoreManager : ImageStoreManager
{
    NSDate *_lastDateCheck;
}

+ (id)newsFeedImageQueue;
@property(retain, nonatomic) NSDate *lastDateCheck; // @synthesize lastDateCheck=_lastDateCheck;
- (void).cxx_destruct;
- (void)clean;
- (void)removeUnusedImages;
- (void)deleteItemsAtPaths:(id)arg1;
- (id)getExpiredImages;
- (id)getImagesListWithLastAccessOlderThan:(id)arg1;
- (void)updateLastAccessImageDate:(id)arg1;
- (void)save:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;
- (id)pathForImageName:(id)arg1;
- (id)identifierForKey:(id)arg1;
- (id)permanentCacheRelativeDirectory;
- (int)storeType;

@end

