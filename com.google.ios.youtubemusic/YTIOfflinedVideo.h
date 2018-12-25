//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIOfflinedVideo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adBreaksArray; // @dynamic adBreaksArray;
@property(readonly, nonatomic) unsigned long long adBreaksArray_Count; // @dynamic adBreaksArray_Count;
@property(nonatomic) _Bool hasTimeSinceLastMetadataRefreshSeconds; // @dynamic hasTimeSinceLastMetadataRefreshSeconds;
@property(nonatomic) _Bool hasTimeSinceLastOfflinePlaybackSeconds; // @dynamic hasTimeSinceLastOfflinePlaybackSeconds;
@property(nonatomic) _Bool hasTimeSinceLastStoryboardRefreshSeconds; // @dynamic hasTimeSinceLastStoryboardRefreshSeconds;
@property(nonatomic) _Bool hasTimeSinceLastStreamRefreshSeconds; // @dynamic hasTimeSinceLastStreamRefreshSeconds;
@property(nonatomic) _Bool hasTimeSinceOfflinedSeconds; // @dynamic hasTimeSinceOfflinedSeconds;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) unsigned int timeSinceLastMetadataRefreshSeconds; // @dynamic timeSinceLastMetadataRefreshSeconds;
@property(nonatomic) unsigned int timeSinceLastOfflinePlaybackSeconds; // @dynamic timeSinceLastOfflinePlaybackSeconds;
@property(nonatomic) unsigned int timeSinceLastStoryboardRefreshSeconds; // @dynamic timeSinceLastStoryboardRefreshSeconds;
@property(nonatomic) unsigned int timeSinceLastStreamRefreshSeconds; // @dynamic timeSinceLastStreamRefreshSeconds;
@property(nonatomic) unsigned int timeSinceOfflinedSeconds; // @dynamic timeSinceOfflinedSeconds;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

