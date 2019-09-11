//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, NSURL, SPTPodcastPreferences;
@protocol SPTLinkDispatcher, SPTNowPlayingTitleViewPresenter, SPTPodcastContextMenuProvider, SPTPodcastDataLoader, SPTPodcastEpisodeCellConfigurator, SPTPodcastEpisodeFactory, SPTPodcastFactory, SPTPodcastLogger, SPTPodcastPlayer, SPTPodcastRequestFactory, SPTPodcastSpeedControlManager, SPTPodcastTestManager, SPTPodcastUnfinishedItemsProvider, SPTShowEntityService;

@protocol SPTPodcastFeature <SPTService>
- (id <SPTPodcastEpisodeCellConfigurator>)provideEpisodeCellConfigurator;
- (id <SPTPodcastUnfinishedItemsProvider>)provideUnfinishedItemsProvider;
- (id <SPTPodcastPlayer>)providePodcastPlayerWithViewURI:(NSURL *)arg1 featureIdentifier:(NSString *)arg2 referrerIdentifier:(NSString *)arg3;
- (id <SPTPodcastLogger>)providePodcastLogger;
- (id <SPTPodcastEpisodeFactory>)providePodcastEpisodeFactory;
- (id <SPTPodcastFactory>)providePodcastFactory;
- (id <SPTPodcastDataLoader>)providePodcastDataLoader;
- (id <SPTPodcastRequestFactory>)providePodcastRequestFactory;
- (id <SPTNowPlayingTitleViewPresenter>)providePodcastNowPlayingTitlePresenter;
- (SPTPodcastPreferences *)providePodcastPreferences;
- (id <SPTPodcastSpeedControlManager>)providePodcastSpeedControlManager;
- (id <SPTPodcastTestManager>)provideTestManager;
- (id <SPTShowEntityService>)provideShowEntityService;
- (id <SPTPodcastContextMenuProvider>)provideDefaultContextMenuProvider;
- (id <SPTPodcastContextMenuProvider>)provideContextMenuProviderWithLinkDispatcher:(id <SPTLinkDispatcher>)arg1;
@end

