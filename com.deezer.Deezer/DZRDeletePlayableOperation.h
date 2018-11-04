//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRSynchronizerOperation.h"

@class NSMutableArray;

@interface DZRDeletePlayableOperation : DZRSynchronizerOperation
{
    CDUnknownBlockType _didDeletePlayable;
    long long _numberfOfBlocksToComplete;
    long long _numberOfDeletes;
    long long _numberOfFailures;
    long long _numberOfCancellations;
    NSMutableArray *_indexerUpdateBlocks;
}

@property(retain, nonatomic) NSMutableArray *indexerUpdateBlocks; // @synthesize indexerUpdateBlocks=_indexerUpdateBlocks;
@property(nonatomic) long long numberOfCancellations; // @synthesize numberOfCancellations=_numberOfCancellations;
@property(nonatomic) long long numberOfFailures; // @synthesize numberOfFailures=_numberOfFailures;
@property(nonatomic) long long numberOfDeletes; // @synthesize numberOfDeletes=_numberOfDeletes;
@property long long numberfOfBlocksToComplete; // @synthesize numberfOfBlocksToComplete=_numberfOfBlocksToComplete;
@property(copy, nonatomic) CDUnknownBlockType didDeletePlayable; // @synthesize didDeletePlayable=_didDeletePlayable;
- (void).cxx_destruct;
- (void)checkProgress;
- (void)deleteQuality:(long long)arg1;
- (void)start;

@end

