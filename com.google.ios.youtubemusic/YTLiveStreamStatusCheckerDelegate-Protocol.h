//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTICommand, YTLiveStreamStatusChecker;

@protocol YTLiveStreamStatusCheckerDelegate <NSObject>
- (void)liveStreamStatusCheckerWantstoStopPlayback:(YTLiveStreamStatusChecker *)arg1;
- (void)liveStreamStatusCheckerWantsToSuspendPlayback:(YTLiveStreamStatusChecker *)arg1;
- (void)liveStreamStatusChecker:(YTLiveStreamStatusChecker *)arg1 wantsToTransitionToStreamEndpoint:(YTICommand *)arg2;
- (void)liveStreamStatusCheckerWantsToReloadLiveStream:(YTLiveStreamStatusChecker *)arg1;
@end

