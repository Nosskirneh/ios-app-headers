//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingSliderV2DataSource-Protocol.h"

@class NSString, SPTNowPlayingDurationViewV2;

@protocol SPTNowPlayingDurationViewV2DataSource <SPTNowPlayingSliderV2DataSource>
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(SPTNowPlayingDurationViewV2 *)arg1;
- (NSString *)nowPlayingDurationView:(SPTNowPlayingDurationViewV2 *)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (NSString *)nowPlayingDurationView:(SPTNowPlayingDurationViewV2 *)arg1 timeTakenTextForSliderValue:(float)arg2;
@end

