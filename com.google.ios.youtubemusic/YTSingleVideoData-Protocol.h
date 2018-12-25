//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTAdInterrupt, YTCPN, YTPlaybackData;
@protocol MLPlayerConfig;

@protocol YTSingleVideoData <NSObject>
@property(readonly, nonatomic) id <MLPlayerConfig> playerConfig;
@property(readonly, nonatomic) _Bool isPlayableInPictureInPicture;
@property(readonly, nonatomic) _Bool isLivePlayback;
@property(readonly, nonatomic) int interstitialReplayPolicy;
@property(readonly, nonatomic) long long playbackPlacement;
@property(readonly, nonatomic) long long videoType;
@property(readonly, nonatomic) YTAdInterrupt *adInterrupt;
@property(readonly, nonatomic) NSString *videoId;
@property(readonly, nonatomic) YTCPN *CPN;
@property(readonly, nonatomic) YTPlaybackData *playbackData;
@end

