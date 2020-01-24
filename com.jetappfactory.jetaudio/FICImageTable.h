//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FICImageCache, FICImageFormat, NSCountedSet, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSRecursiveLock, NSString;

@interface FICImageTable : NSObject
{
    FICImageFormat *_imageFormat;
    double _screenScale;
    long long _imageRowLength;
    NSString *_filePath;
    int _fileDescriptor;
    long long _fileLength;
    unsigned long long _entryCount;
    long long _entryLength;
    unsigned long long _entriesPerChunk;
    long long _imageLength;
    unsigned long long _chunkLength;
    long long _chunkCount;
    NSMutableDictionary *_chunkDictionary;
    NSCountedSet *_chunkSet;
    NSRecursiveLock *_lock;
    struct __CFDictionary *_indexNumbers;
    NSMutableDictionary *_indexMap;
    NSMutableDictionary *_sourceImageMap;
    NSMutableIndexSet *_occupiedIndexes;
    NSMutableOrderedSet *_MRUEntries;
    NSCountedSet *_inUseEntries;
    NSDictionary *_imageFormatDictionary;
    int _metadataVersion;
    NSString *_fileDataProtectionMode;
    _Bool _canAccessData;
    FICImageCache *_imageCache;
}

+ (id)directoryPath;
+ (int)pageSize;
@property(nonatomic) __weak FICImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) FICImageFormat *imageFormat; // @synthesize imageFormat=_imageFormat;
- (void).cxx_destruct;
- (void)reset;
- (void)_loadMetadata;
- (void)saveMetadata;
- (id)_numberForEntryAtIndex:(long long)arg1;
- (void)_entryWasAccessedWithEntityUUID:(id)arg1;
- (id)_entryDataForEntityUUID:(id)arg1;
- (long long)_indexOfEntryForEntityUUID:(id)arg1;
- (id)oldestEvictableEntityUUID;
- (long long)_nextEntryIndex;
- (void)_entryWasDeallocatedFromChunk:(id)arg1;
- (id)_entryDataAtIndex:(long long)arg1;
- (_Bool)canAccessEntryData;
- (void)_setEntryCount:(long long)arg1;
- (long long)_maximumCount;
- (_Bool)entryExistsForEntityUUID:(id)arg1 sourceImageUUID:(id)arg2;
- (void)deleteEntryForEntityUUID:(id)arg1;
- (void)removeInUseForEntityUUID:(id)arg1;
- (id)newImageForEntityUUID:(id)arg1 sourceImageUUID:(id)arg2 preheatData:(_Bool)arg3;
- (void)setEntryForEntityUUID:(id)arg1 sourceImageUUID:(id)arg2 imageDrawingBlock:(CDUnknownBlockType)arg3;
- (id)_chunkAtIndex:(long long)arg1;
- (void)_setChunk:(id)arg1 index:(long long)arg2;
- (id)_cachedChunkAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithFormat:(id)arg1 imageCache:(id)arg2;
- (id)directoryPath;
@property(readonly, copy, nonatomic) NSString *metadataFilePath;
@property(readonly, copy, nonatomic) NSString *tableFilePath;

@end

