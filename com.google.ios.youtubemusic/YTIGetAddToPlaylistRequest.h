//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIInnerTubeContext;

@interface YTIGetAddToPlaylistRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool excludeWatchLater; // @dynamic excludeWatchLater;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasExcludeWatchLater; // @dynamic hasExcludeWatchLater;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) NSMutableArray *videoIdsArray; // @dynamic videoIdsArray;
@property(readonly, nonatomic) unsigned long long videoIdsArray_Count; // @dynamic videoIdsArray_Count;

@end
