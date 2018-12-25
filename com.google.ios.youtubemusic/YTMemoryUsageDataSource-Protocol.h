//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol YTMemoryUsageDataSource <NSObject>
- (unsigned long long)memoryUsageInBytes;

@optional
@property(readonly, nonatomic) long long numGenerations;
- (NSArray *)allocationSnapshotInGeneration:(long long)arg1;
- (NSArray *)allocationSnapshot;
@end
