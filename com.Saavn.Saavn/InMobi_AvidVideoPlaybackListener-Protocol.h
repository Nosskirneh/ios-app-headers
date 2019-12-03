//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol InMobi_AvidVideoPlaybackListener <NSObject>
- (void)recordAdErrorWithMessage:(NSString *)arg1;
- (void)recordAdDurationChangeEvent:(NSString *)arg1 adRemainingTime:(NSString *)arg2;
- (void)recordAdExitedFullscreenEvent;
- (void)recordAdEnteredFullscreenEvent;
- (void)recordAdVolumeChangeEvent:(long long)arg1;
- (void)recordAdSkippedEvent;
- (void)recordAdUserCloseEvent;
- (void)recordAdUserAcceptInvitationEvent;
- (void)recordAdUserMinimizeEvent;
- (void)recordAdExpandedChangeEvent;
- (void)recordAdPlayingEvent;
- (void)recordAdPausedEvent;
- (void)recordAdVideoThirdQuartileEvent;
- (void)recordAdVideoMidpointEvent;
- (void)recordAdVideoFirstQuartileEvent;
- (void)recordAdClickThruEvent;
- (void)recordAdCompleteEvent;
- (void)recordAdStoppedEvent;
- (void)recordAdVideoStartEvent;
- (void)recordAdLoadedEvent;
- (void)recordAdStartedEvent;
- (void)recordAdImpressionEvent;
@end
