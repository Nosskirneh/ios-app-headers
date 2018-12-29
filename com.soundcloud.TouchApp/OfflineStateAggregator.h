//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OfflineStateAggregator : NSObject
{
}

+ (id)storageLimitReachedStates;
+ (id)unsyncableStates;
+ (id)availableStates;
+ (id)pendingStates;
+ (id)downloadingStates;
+ (id)undefinedStates;
+ (unsigned long long)aggregateStatesForOfflineTrackStates:(id)arg1;
+ (unsigned long long)aggregatedSyncStateForOfflineTrackStates:(id)arg1;
+ (unsigned long long)syncStateForOfflineTrackState:(unsigned long long)arg1;

@end
