//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNowPlayingDurationViewV2;

@protocol SPTNowPlayingDurationViewV2Delegate <NSObject>
- (void)nowPlayingDurationViewProgressDidChange:(SPTNowPlayingDurationViewV2 *)arg1;
- (void)nowPlayingDurationViewDidTapSlider:(SPTNowPlayingDurationViewV2 *)arg1;
- (void)nowPlayingDurationViewDidEndScrubbing:(SPTNowPlayingDurationViewV2 *)arg1;
- (void)nowPlayingDurationViewDidBeginScrubbing:(SPTNowPlayingDurationViewV2 *)arg1;
- (void)nowPlayingDurationViewToggleTimeRemainingLabel:(SPTNowPlayingDurationViewV2 *)arg1;
@end

