//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIContentIdStatus, YTILiveStreamViewerStats, YTILiveStreamVoteStats;

@interface YTIBroadcastStatus : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long actualEndTimeS; // @dynamic actualEndTimeS;
@property(nonatomic) long long actualStartTimeS; // @dynamic actualStartTimeS;
@property(retain, nonatomic) YTIContentIdStatus *contentIdStatus; // @dynamic contentIdStatus;
@property(nonatomic) _Bool defaultBroadcast; // @dynamic defaultBroadcast;
@property(nonatomic) _Bool hasActualEndTimeS; // @dynamic hasActualEndTimeS;
@property(nonatomic) _Bool hasActualStartTimeS; // @dynamic hasActualStartTimeS;
@property(nonatomic) _Bool hasContentIdStatus; // @dynamic hasContentIdStatus;
@property(nonatomic) _Bool hasDefaultBroadcast; // @dynamic hasDefaultBroadcast;
@property(nonatomic) _Bool hasLifeCycleStatus; // @dynamic hasLifeCycleStatus;
@property(nonatomic) _Bool hasScheduledStartTimeS; // @dynamic hasScheduledStartTimeS;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewerStats; // @dynamic hasViewerStats;
@property(nonatomic) _Bool hasVoteStats; // @dynamic hasVoteStats;
@property(nonatomic) int lifeCycleStatus; // @dynamic lifeCycleStatus;
@property(nonatomic) long long scheduledStartTimeS; // @dynamic scheduledStartTimeS;
@property(retain, nonatomic) NSMutableArray *streamHealthsArray; // @dynamic streamHealthsArray;
@property(readonly, nonatomic) unsigned long long streamHealthsArray_Count; // @dynamic streamHealthsArray_Count;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTILiveStreamViewerStats *viewerStats; // @dynamic viewerStats;
@property(retain, nonatomic) YTILiveStreamVoteStats *voteStats; // @dynamic voteStats;

@end

