//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTWazeTestManager;

@protocol SPTWazeTestManagerObserver <NSObject>

@optional
- (void)testManager:(id <SPTWazeTestManager>)arg1 didChangeWazeOnboardingCompleted:(_Bool)arg2;
- (void)testManager:(id <SPTWazeTestManager>)arg1 didChangeWazeIntegrationEnabledState:(_Bool)arg2;
- (void)testManager:(id <SPTWazeTestManager>)arg1 didChangeWazeFeatureEnabledState:(_Bool)arg2;
@end

