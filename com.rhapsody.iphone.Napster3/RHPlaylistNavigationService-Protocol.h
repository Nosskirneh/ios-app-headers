//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, RHPlaylistMO, RHProfileMO, UIViewController;

@protocol RHPlaylistNavigationService
- (void)pushDownloadedPlaylistViewWithPlaylist:(RHPlaylistMO *)arg1 metricsSource:(NSString *)arg2;
- (void)pushPlaylistViewWithPlaylist:(RHPlaylistMO *)arg1 startPlaying:(_Bool)arg2 metricsSource:(NSString *)arg3;
- (void)pushPlaylistViewWithPlaylist:(RHPlaylistMO *)arg1 metricsSource:(NSString *)arg2;
- (void)pushPlaylistViewWithPlaylist:(RHPlaylistMO *)arg1 aboveViewController:(UIViewController *)arg2 metricsSource:(NSString *)arg3;
- (void)pushProfile:(RHProfileMO *)arg1 metricsSource:(NSString *)arg2;
@end

