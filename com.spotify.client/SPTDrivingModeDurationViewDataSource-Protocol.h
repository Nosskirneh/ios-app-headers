//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTDrivingModeSliderViewDataSource-Protocol.h"

@class NSString, SPTDrivingModeDurationView;

@protocol SPTDrivingModeDurationViewDataSource <SPTDrivingModeSliderViewDataSource>
- (NSString *)nowPlayingDurationView:(SPTDrivingModeDurationView *)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (NSString *)nowPlayingDurationView:(SPTDrivingModeDurationView *)arg1 timeTakenTextForSliderValue:(float)arg2;
@end

