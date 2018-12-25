//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIResponseContext;

@interface YTIOfflinePlaylistSyncCheckResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMinimumUnusedBytes; // @dynamic hasMinimumUnusedBytes;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) unsigned long long minimumUnusedBytes; // @dynamic minimumUnusedBytes;
@property(retain, nonatomic) NSMutableArray *offlinePlaylistSyncCheckDatasArray; // @dynamic offlinePlaylistSyncCheckDatasArray;
@property(readonly, nonatomic) unsigned long long offlinePlaylistSyncCheckDatasArray_Count; // @dynamic offlinePlaylistSyncCheckDatasArray_Count;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

