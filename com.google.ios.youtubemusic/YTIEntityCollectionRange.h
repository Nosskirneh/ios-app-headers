//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIEntityCollectionRange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMinCount; // @dynamic hasMinCount;
@property(nonatomic) _Bool hasScrollIndex; // @dynamic hasScrollIndex;
@property(nonatomic) _Bool hasSnapshotToken; // @dynamic hasSnapshotToken;
@property(nonatomic) _Bool hasSortType; // @dynamic hasSortType;
@property(nonatomic) _Bool hasStartRangeIndex; // @dynamic hasStartRangeIndex;
@property(nonatomic) int minCount; // @dynamic minCount;
@property(nonatomic) int scrollIndex; // @dynamic scrollIndex;
@property(copy, nonatomic) NSString *snapshotToken; // @dynamic snapshotToken;
@property(copy, nonatomic) NSString *sortType; // @dynamic sortType;
@property(nonatomic) int startRangeIndex; // @dynamic startRangeIndex;

@end

