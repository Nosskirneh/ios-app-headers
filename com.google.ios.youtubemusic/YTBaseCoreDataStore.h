//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseService.h"

@class YTCoreDataContext;

@interface YTBaseCoreDataStore : YTBaseService
{
    YTCoreDataContext *_context;
}

+ (id)storeURLForDatabaseWithName:(id)arg1;
+ (id)databaseNameForModelName:(id)arg1 databaseSuffix:(id)arg2;
+ (id)modelURLForModelName:(id)arg1 bundle:(id)arg2;
+ (id)coordinatorWithModelURL:(id)arg1 databaseName:(id)arg2 wipe:(_Bool)arg3 excludeFromBackup:(_Bool)arg4 error:(id *)arg5;
+ (id)fetchRequestForPredicate:(id)arg1 context:(id)arg2 entityName:(id)arg3;
@property(retain, nonatomic) YTCoreDataContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)performWithContextBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performWithContextBlock:(CDUnknownBlockType)arg1;
- (id)entityFromPredicate:(id)arg1 context:(id)arg2 entityName:(id)arg3;
- (id)saveWithContext:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)clearRetryStateWithRetryable:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)markForRetryWithRetryable:(id)arg1 maxRetryDate:(id)arg2 userID:(id)arg3 retryTaskConfig:(id)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;

@end

