//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabaseQueue, _TtC3VOX21SpotlightIndexManager;
@protocol OS_dispatch_queue;

@interface VOXFTSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_trackIndexQueue;
    NSObject<OS_dispatch_queue> *_radioChannelIndexQueue;
    _Bool _radioQueueCancelled;
    FMDatabaseQueue *_dbQueue;
}

+ (id)shared;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC3VOX21SpotlightIndexManager *spotlightIndex;
- (void)enumerateIndexesIn:(CDUnknownBlockType)arg1;
- (void)deleteIndexesForSource:(unsigned long long)arg1;
- (void)deleteIndexForMediaLibraryEntity:(id)arg1;
- (void)deleteIndexesInSet:(id)arg1;
- (void)addIndexesForMediaLibraryEntities:(id)arg1;
- (void)addIndexForMediaLibraryEntity:(id)arg1;
- (unsigned long long)entityTypeForEntity:(id)arg1;
- (void)searchLibraryTracks:(id)arg1 inOperationQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)searchLibraryEntities:(id)arg1 entityType:(id)arg2 inOperationQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)closeConnection;
- (void)connect;
- (id)init;

@end
