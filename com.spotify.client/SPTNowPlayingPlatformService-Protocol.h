//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTNowPlayingContentProviderRegistries, SPTNowPlayingFeedbackObservable, SPTNowPlayingModeResolver, SPTNowPlayingModeViewControllerRegistry, SPTNowPlayingModesRegistry, SPTNowPlayingRemoteControlEventControllerRegistry, SPTNowPlayingRemoteControlPolicyRegistry, SPTNowPlayingShowsFormatOverriderRegistry, SPTNowPlayingTestManager;

@protocol SPTNowPlayingPlatformService <SPTService>
- (id <SPTNowPlayingFeedbackObservable>)provideFeedbackObservable;
- (id <SPTNowPlayingRemoteControlEventControllerRegistry>)provideRemoteControlEventControllerRegistry;
- (id <SPTNowPlayingContentProviderRegistries>)provideContentProviderRegistries;
- (id <SPTNowPlayingShowsFormatOverriderRegistry>)provideShowsFormatOverriderRegistry;
- (id <SPTNowPlayingRemoteControlPolicyRegistry>)provideRemoteControlPolicyRegistry;
- (id <SPTNowPlayingModeViewControllerRegistry>)provideModeViewControllerRegistry;
- (id <SPTNowPlayingModesRegistry>)provideModesRegistry;
- (id <SPTNowPlayingModeResolver>)provideModeResolver;
- (id <SPTNowPlayingTestManager>)provideTestManager;
@end

