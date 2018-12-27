//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GTMSQLiteDatabase : NSObject
{
    struct sqlite3 *db_;
    NSString *path_;
    int timeoutMS_;
    _Bool hasCFAdditions_;
    unsigned long long likeOptions_;
    unsigned long long globOptions_;
    NSMutableArray *userArgDataPool_;
}

+ (id)sqliteVersionString;
+ (int)sqliteVersionNumber;
+ (void)initialize;
- (id)description;
- (_Bool)commit;
- (_Bool)rollback;
- (_Bool)beginDeferredTransaction;
- (int)executeSQL:(id)arg1;
- (int)busyTimeoutMS;
- (int)setBusyTimeoutMS:(int)arg1;
- (void)interrupt;
- (unsigned long long)lastInsertRowID;
- (int)totalChangeCount;
- (int)lastChangeCount;
- (id)lastErrorString;
- (int)lastErrorCode;
- (unsigned long long)globComparisonOptions;
- (void)setGlobComparisonOptions:(unsigned long long)arg1;
- (unsigned long long)likeComparisonOptions;
- (void)setLikeComparisonOptions:(unsigned long long)arg1;
- (_Bool)hasCFAdditions;
- (void)synchronousMode:(_Bool)arg1;
- (struct sqlite3 *)sqlite3DB;
- (void)collationArgumentRetain:(id)arg1;
- (int)installCFAdditions;
- (void)cleanupDB;
- (void)dealloc;
- (id)initInMemoryWithCFAdditions:(_Bool)arg1 utf8:(_Bool)arg2 errorCode:(int *)arg3;
- (id)initWithPath:(id)arg1 withCFAdditions:(_Bool)arg2 utf8:(_Bool)arg3 errorCode:(int *)arg4;

@end

