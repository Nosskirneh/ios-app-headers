//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTNowPlayingDurationUnitViewModelDelegate;

@protocol SPTNowPlayingDurationUnitViewModel <NSObject>
@property(nonatomic) __weak id <SPTNowPlayingDurationUnitViewModelDelegate> delegate;
- (void)updateObservers:(_Bool)arg1;
- (void)scrubbedToPosition:(double)arg1;
- (_Bool)disallowsSeeking;
- (double)animationSpeed;
- (NSString *)currentTimeRemainingTextWithSliderValue:(float)arg1;
- (NSString *)currentTrackProgressTextWithSliderValue:(float)arg1;
- (double)currentTrackLength;
- (double)currentTrackProgress;
@end

