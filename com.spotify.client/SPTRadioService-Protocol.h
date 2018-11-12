//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL, SPTRadioPlaybackService, UIViewController;
@protocol SPTDailyMixManager, SPTDailyMixTestManager, SPTNowPlayingRemoteControlPolicy, SPTPageController, SPTPageCreationContext, SPTRadioManager, SPTRadioTestManager;

@protocol SPTRadioService <SPTService>
- (UIViewController<SPTPageController> *)provideStationViewController:(NSURL *)arg1 context:(id <SPTPageCreationContext>)arg2;
- (void)registerDailyMixTestManager:(id <SPTDailyMixTestManager>)arg1;
- (void)registerDailyMixManager:(id <SPTDailyMixManager>)arg1;
- (SPTRadioPlaybackService *)providePlaybackService;
- (id <SPTRadioTestManager>)provideRadioTestManager;
- (id <SPTNowPlayingRemoteControlPolicy>)provideRadioRemoteControlPolicy;
- (id <SPTRadioManager>)provideRadioManager;
@end

