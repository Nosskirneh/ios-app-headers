//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGELLatencyAction.h"

@interface YTMCSIWatchAction : YTGELLatencyAction
{
    _Bool _isPlaybackStarted;
    _Bool _isWatchNextRendered;
}

- (void)maybeWatchCompleted;
- (void)watchPlaybackStarted;
- (void)watchNextRendered;
- (void)watchNextResponseReceived;
- (void)innerTubePlayerResponseReceived;
- (void)watchNextRequestSent;
- (void)innerTubePlayerRequestSent;
- (void)watchStart;
- (id)init;

@end

