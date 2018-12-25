//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMChunkLoadTaskDelegate-Protocol.h"

@class HAMMediaChunk, NSArray, NSMutableArray, NSString;

@interface HAMChunkBuffer : NSObject <HAMChunkLoadTaskDelegate>
{
    NSMutableArray *_chunks;
    HAMMediaChunk *_lastBufferedChunk;
    int _loadingChunkCount;
    HAMMediaChunk *_currentChunk;
    double _currentTimeSeconds;
    unsigned long long _currentChunkIndex;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _timeComparisonTolerance;
}

@property(readonly, nonatomic) int loadingChunkCount; // @synthesize loadingChunkCount=_loadingChunkCount;
@property(nonatomic) CDStruct_1b6d18a9 timeComparisonTolerance; // @synthesize timeComparisonTolerance=_timeComparisonTolerance;
@property(readonly, nonatomic) unsigned long long currentChunkIndex; // @synthesize currentChunkIndex=_currentChunkIndex;
@property(readonly, nonatomic) double currentTimeSeconds; // @synthesize currentTimeSeconds=_currentTimeSeconds;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) HAMMediaChunk *currentChunk; // @synthesize currentChunk=_currentChunk;
- (void).cxx_destruct;
- (void)trimChunksReplacedByChunk:(id)arg1;
- (id)lastBufferedChunkWithMinimumFormat:(id)arg1 beatMinimumFormat:(_Bool)arg2 firstChunk:(id)arg3 firstChunkIndex:(unsigned long long)arg4;
- (id)lastBufferedChunkWithStartTime:(CDStruct_1b6d18a9)arg1 minimumFormat:(id)arg2 beatMinimumFormat:(_Bool)arg3;
- (_Bool)shouldReplaceCurrentChunk:(id)arg1 chunk:(id)arg2 time:(CDStruct_1b6d18a9)arg3 minimumFormat:(id)arg4 beatMinimumFormat:(_Bool)arg5;
- (void)bestAvailableChunkForTime:(CDStruct_1b6d18a9)arg1 minimumFormat:(id)arg2 beatMinimumFormat:(_Bool)arg3 chunk:(id *)arg4 chunkIndex:(unsigned long long *)arg5;
- (void)removeChunksAtIndexes:(id)arg1;
- (void)removeChunksInSet:(id)arg1;
- (void)insertChunk:(id)arg1;
- (unsigned long long)insertionIndexForChunk:(id)arg1;
- (_Bool)isChunk:(id)arg1 adjacentToNextChunk:(id)arg2;
- (void)chunks:(id)arg1 didCompleteLoadingWithError:(id)arg2;
- (_Bool)containsTime:(CDStruct_1b6d18a9)arg1 minimumFormat:(id)arg2;
- (void)updateIndexOfChunk:(id)arg1;
@property(readonly, nonatomic) NSArray *chunks;
@property(readonly, nonatomic) long long bufferSizeBytes;
- (void)trimChunksMatchingBlock:(CDUnknownBlockType)arg1;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1;
- (id)lastBufferedChunkWithStartTime:(CDStruct_1b6d18a9)arg1 minimumFormat:(id)arg2;
@property(readonly, nonatomic) HAMMediaChunk *lastBufferedChunk;
@property(readonly, nonatomic) CDStruct_1b6d18a9 bufferedTimeRangeEnd;
- (void)insertChunks:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

