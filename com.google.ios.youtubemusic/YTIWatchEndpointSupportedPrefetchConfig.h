//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIPlaybackPrefetchDataConfig, YTIPlaybackPrefetchHintConfig;

@interface YTIWatchEndpointSupportedPrefetchConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPrefetchDataConfig; // @dynamic hasPrefetchDataConfig;
@property(nonatomic) _Bool hasPrefetchHintConfig; // @dynamic hasPrefetchHintConfig;
@property(retain, nonatomic) YTIPlaybackPrefetchDataConfig *prefetchDataConfig; // @dynamic prefetchDataConfig;
@property(retain, nonatomic) YTIPlaybackPrefetchHintConfig *prefetchHintConfig; // @dynamic prefetchHintConfig;

@end

