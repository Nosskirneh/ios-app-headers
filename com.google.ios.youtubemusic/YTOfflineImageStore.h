//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseCoreDataStore.h"

#import "YTRetryableStore-Protocol.h"

@class GIMMe, NSString;

@interface YTOfflineImageStore : YTBaseCoreDataStore <YTRetryableStore>
{
    NSString *_subDirectory;
    GIMMe *_gimme;
    unsigned long long _searchPathDirectory;
}

+ (id)predicateForDeletableImages;
+ (id)generateNewFilename;
+ (id)fetchImageEntityWithURL:(id)arg1 context:(id)arg2 error:(id *)arg3;
+ (id)fetchRequestForPredicate:(id)arg1 context:(id)arg2;
+ (id)offlineImageEntityWithURL:(id)arg1 context:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) unsigned long long searchPathDirectory; // @synthesize searchPathDirectory=_searchPathDirectory;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)excludeFromBackupByFullPath:(id)arg1;
- (_Bool)filenameExists:(id)arg1;
- (id)fullPathForFilename:(id)arg1;
- (id)imageDirectoryPath;
- (id)localURLFromFilename:(id)arg1;
- (void)repairMissingDateAddedWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)repairMissingImagesWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)unpinURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchPinnedURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)savePinnedURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)resetRetryStateForTaskWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)retryTaskWithID:(id)arg1 maxRetryDate:(id)arg2 retryConfig:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (id)localURLsFromFilenames:(id)arg1;
- (void)deleteImageForURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchDeletableImageWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchURLNeedingImageWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)saveImage:(id)arg1 withURL:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)initWithSearchPathDirectory:(unsigned long long)arg1 subDirectory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
