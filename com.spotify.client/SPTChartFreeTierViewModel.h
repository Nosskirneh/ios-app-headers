//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTChartEntityDataSourceDelegate-Protocol.h"
#import "SPTFreeTierAllSongsDataSource-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTChart, SPTChartLogger;
@protocol SPTChartEntityDataSource, SPTChartFreeTierCloudViewModel, SPTChartFreeTierViewModelDelegate, SPTFreeTierAllSongsDataSourceDelegate, SPTFreeTierAllSongsHeaderEntityViewModel, SPTImageLoader, SPTLinkDispatcher, SPTOfflineModeState, SPTPlayer;

@interface SPTChartFreeTierViewModel : NSObject <SPTPlayerObserver, SPTOfflineModeStateObserver, SPTChartEntityDataSourceDelegate, SPTImageLoaderDelegate, SPTFreeTierAllSongsDataSource>
{
    id <SPTFreeTierAllSongsDataSourceDelegate> _dataSourceDelegate;
    id <SPTChartFreeTierViewModelDelegate> _delegate;
    id <SPTChartEntityDataSource> _chartEntityDataSource;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTImageLoader> _imageLoader;
    id <SPTPlayer> _player;
    SPTChartLogger *_logger;
    SPTChart *_chart;
    id <SPTChartFreeTierCloudViewModel> _cloudViewModel;
}

@property(retain, nonatomic) id <SPTChartFreeTierCloudViewModel> cloudViewModel; // @synthesize cloudViewModel=_cloudViewModel;
@property(retain, nonatomic) SPTChart *chart; // @synthesize chart=_chart;
@property(readonly, nonatomic) SPTChartLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTChartEntityDataSource> chartEntityDataSource; // @synthesize chartEntityDataSource=_chartEntityDataSource;
@property(nonatomic) __weak id <SPTChartFreeTierViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTFreeTierAllSongsDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)trackStatusIconForType:(unsigned long long)arg1;
- (unsigned long long)iconViewTypeForEntryStatus:(unsigned long long)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (_Bool)isSongBannedForIndexPath:(id)arg1;
- (id)trackSubtitleAccessoryViewForIndexPath:(id)arg1;
- (id)artistsForIndexPath:(id)arg1;
- (id)albumNameForIndexPath:(id)arg1;
- (id)trackURIForIndexPath:(id)arg1;
- (_Bool)isTrackPremiumOnlyForIndexPath:(id)arg1;
- (_Bool)isTrackExplicitForIndexPath:(id)arg1;
- (_Bool)isTrackEnabledForIndexPath:(id)arg1;
- (_Bool)isSongLikedForIndexPath:(id)arg1;
- (id)trackPreviewIdentifierForIndexPath:(id)arg1;
- (id)imageURLForIndexPath:(id)arg1;
- (id)artistNameForIndexPath:(id)arg1;
- (id)trackNameForIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (long long)numberOfSectionsForAllSongs;
- (_Bool)shouldShowHeadersInAllSongss;
- (id)titleForAllSongs;
- (_Bool)hasDataSourceLoadedForAllSongs;
- (void)allSongsDataSourceLoads;
- (void)chartEntityDataSource:(id)arg1 didEncounterError:(id)arg2;
- (void)chartEntityDataSource:(id)arg1 didLoadChart:(id)arg2;
- (id)relativeTimeWithDate:(id)arg1;
@property(readonly, nonatomic, getter=isPlaybackActive) _Bool playbackActive;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)logRecommendationsImpression;
- (void)logTrackCloudInteraction;
- (void)logTrackCloudImpression;
- (void)logContextMenuInteractionShare;
- (void)logContextMenuInteractionLiked:(_Bool)arg1;
- (void)logNavigationItemInteractionLiked:(_Bool)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)chartSubtitle;
- (id)chartTitle;
- (id)chartImageURL;
- (id)chartURL;
- (void)openTrackList;
- (void)togglePlayback;
- (void)loadImageWithSize:(struct CGSize)arg1;
- (void)loadData;
- (void)dealloc;
- (id)initWithChartEntityDataSource:(id)arg1 offlineModeState:(id)arg2 linkDispatcher:(id)arg3 imageLoader:(id)arg4 player:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasHeader;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <SPTFreeTierAllSongsHeaderEntityViewModel> headerEntityViewModel;
@property(readonly, nonatomic) _Bool shouldDisplayUpdateDialogForAllSongs;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *updateDialogMessageForAllSongs;

@end

