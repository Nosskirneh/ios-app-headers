//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTDrivingModeTestManager <NSObject>
@property(readonly, nonatomic, getter=isCarNowPlayingViewEnabled) _Bool carNowPlayingViewEnabled;
- (void)removeObserver:(id <SPTDrivingModeTestManagerObserver>)arg1;
- (void)addObserver:(id <SPTDrivingModeTestManagerObserver>)arg1;
@end
