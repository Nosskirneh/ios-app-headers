//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DZRPersistedJSONStorage : NSObject
{
    struct leveldb_t *_db;
    struct leveldb_options_t *_options;
    CDUnknownBlockType _compareBlock;
    NSObject<OS_dispatch_queue> *_workingQueue;
}

+ (id)storageWithToken:(id)arg1 andCompareBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(copy, nonatomic) CDUnknownBlockType compareBlock; // @synthesize compareBlock=_compareBlock;
- (void).cxx_destruct;
- (void)teardownOptions;
- (void)teardownDatabase;
- (void)reconstructDatabase;
- (void)teardownDatabaseTryReconstructAndRecconect;
- (void)setupDatabaseOptions;
- (void)setupDatabaseAndReconstructOnError:(_Bool)arg1;
- (id)databasePath;
- (id)enumerator;
- (void)deleteJSONForKey:(id)arg1;
- (void)addJSON:(id)arg1 forKey:(id)arg2 andMetadata:(id)arg3;
- (id)metaKeyForOriginalKey:(id)arg1;
- (id)valueKeyForOriginalKey:(id)arg1;
- (void)dealloc;
- (id)initWithToken:(id)arg1 andCompareBlock:(CDUnknownBlockType)arg2;

@end

