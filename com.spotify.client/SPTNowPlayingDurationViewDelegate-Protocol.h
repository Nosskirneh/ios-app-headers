//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNowPlayingDurationView;

@protocol SPTNowPlayingDurationViewDelegate <NSObject>
- (void)durationView:(SPTNowPlayingDurationView *)arg1 didChangeAlwaysShowDurationLabelsValue:(_Bool)arg2;
- (void)durationViewTappedSlider:(SPTNowPlayingDurationView *)arg1;
- (void)durationViewTappedTimeRemainingLabel:(SPTNowPlayingDurationView *)arg1;
- (void)durationViewEndedScrubbing:(SPTNowPlayingDurationView *)arg1;
- (void)durationViewBeganScrubbing:(SPTNowPlayingDurationView *)arg1;
- (void)durationView:(SPTNowPlayingDurationView *)arg1 trackProgressChanged:(float)arg2;
@end
