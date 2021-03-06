//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIContactBottomSheetConfig, YTIContactDataSyncNode, YTIDataSyncExpiry, YTIDataSyncPath;

@interface YTIDataSyncNode : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIContactBottomSheetConfig *contactBottomSheetConfig; // @dynamic contactBottomSheetConfig;
@property(retain, nonatomic) YTIContactDataSyncNode *contactDataSyncNode; // @dynamic contactDataSyncNode;
@property(retain, nonatomic) YTIDataSyncExpiry *expiry; // @dynamic expiry;
@property(nonatomic) _Bool hasContactBottomSheetConfig; // @dynamic hasContactBottomSheetConfig;
@property(nonatomic) _Bool hasContactDataSyncNode; // @dynamic hasContactDataSyncNode;
@property(nonatomic) _Bool hasExpiry; // @dynamic hasExpiry;
@property(nonatomic) _Bool hasPath; // @dynamic hasPath;
@property(nonatomic) _Bool hasServerTimestampMs; // @dynamic hasServerTimestampMs;
@property(retain, nonatomic) YTIDataSyncPath *path; // @dynamic path;
@property(nonatomic) long long serverTimestampMs; // @dynamic serverTimestampMs;

@end

