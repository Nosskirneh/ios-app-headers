//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString;

@interface YTIPlaylistDetailMetrics : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNumVideos; // @dynamic hasNumVideos;
@property(nonatomic) _Bool hasNumVideosText; // @dynamic hasNumVideosText;
@property(nonatomic) _Bool hasViewCount; // @dynamic hasViewCount;
@property(nonatomic) unsigned long long numVideos; // @dynamic numVideos;
@property(retain, nonatomic) YTIFormattedString *numVideosText; // @dynamic numVideosText;
@property(nonatomic) unsigned long long viewCount; // @dynamic viewCount;

@end
