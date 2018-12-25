//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIOfflineClientState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int batteryLevelPercentage; // @dynamic batteryLevelPercentage;
@property(nonatomic) int detailedNetworkType; // @dynamic detailedNetworkType;
@property(nonatomic) long long freeDiskSpaceBytes; // @dynamic freeDiskSpaceBytes;
@property(nonatomic) _Bool hasBatteryLevelPercentage; // @dynamic hasBatteryLevelPercentage;
@property(nonatomic) _Bool hasDetailedNetworkType; // @dynamic hasDetailedNetworkType;
@property(nonatomic) _Bool hasFreeDiskSpaceBytes; // @dynamic hasFreeDiskSpaceBytes;
@property(nonatomic) _Bool hasIsBatteryCharging; // @dynamic hasIsBatteryCharging;
@property(nonatomic) _Bool hasIsPostMigrationState; // @dynamic hasIsPostMigrationState;
@property(nonatomic) _Bool hasLastOfflineDownloadSuccessTimeMs; // @dynamic hasLastOfflineDownloadSuccessTimeMs;
@property(nonatomic) _Bool hasLastOfflinePlaybackTimeMs; // @dynamic hasLastOfflinePlaybackTimeMs;
@property(nonatomic) _Bool hasLastOfflineSaveTimeMs; // @dynamic hasLastOfflineSaveTimeMs;
@property(nonatomic) _Bool hasLastOfflineUsageTimeMs; // @dynamic hasLastOfflineUsageTimeMs;
@property(nonatomic) _Bool isBatteryCharging; // @dynamic isBatteryCharging;
@property(nonatomic) _Bool isPostMigrationState; // @dynamic isPostMigrationState;
@property(nonatomic) long long lastOfflineDownloadSuccessTimeMs; // @dynamic lastOfflineDownloadSuccessTimeMs;
@property(nonatomic) long long lastOfflinePlaybackTimeMs; // @dynamic lastOfflinePlaybackTimeMs;
@property(nonatomic) long long lastOfflineSaveTimeMs; // @dynamic lastOfflineSaveTimeMs;
@property(nonatomic) long long lastOfflineUsageTimeMs; // @dynamic lastOfflineUsageTimeMs;
@property(retain, nonatomic) NSMutableArray *offlinePlaylistsArray; // @dynamic offlinePlaylistsArray;
@property(readonly, nonatomic) unsigned long long offlinePlaylistsArray_Count; // @dynamic offlinePlaylistsArray_Count;
@property(retain, nonatomic) NSMutableArray *offlineVideosArray; // @dynamic offlineVideosArray;
@property(readonly, nonatomic) unsigned long long offlineVideosArray_Count; // @dynamic offlineVideosArray_Count;

@end
