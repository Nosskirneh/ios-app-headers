//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIUnpluggedStreamChunkBasedPosition, YTIUnpluggedVideoTimeBasedPosition;

@interface YTIUnpluggedVideoPlaybackPosition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnpluggedStreamChunkBasedPosition *chunkPosition; // @dynamic chunkPosition;
@property(nonatomic) _Bool hasChunkPosition; // @dynamic hasChunkPosition;
@property(nonatomic) _Bool hasStreamTimePosition; // @dynamic hasStreamTimePosition;
@property(nonatomic) _Bool hasUtcTimePosition; // @dynamic hasUtcTimePosition;
@property(retain, nonatomic) YTIUnpluggedVideoTimeBasedPosition *streamTimePosition; // @dynamic streamTimePosition;
@property(retain, nonatomic) YTIUnpluggedVideoTimeBasedPosition *utcTimePosition; // @dynamic utcTimePosition;

@end
