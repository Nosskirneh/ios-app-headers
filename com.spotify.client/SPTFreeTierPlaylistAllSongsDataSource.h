//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierAllSongsDataSource-Protocol.h"
#import "SPTFreeTierAllSongsHeaderEntityViewModelDelegate-Protocol.h"
#import "SPTFreeTierPlaylistModelObserver-Protocol.h"

@class NSArray, NSNumber, NSString, SPTFreeTierPlaylistLogger;
@protocol SPTAssistedCurationUIService, SPTCollectionPlatform, SPTCollectionPlatformDataLoaderRequestToken, SPTFreeTierAllSongsDataSourceDelegate, SPTFreeTierAllSongsHeaderEntityViewModel, SPTFreeTierPlaylistModel, SPTFreeTierPlaylistModelEntity, SPTFreeTierPlaylistTestManager, SPTOfflineModeState, SPTPlaylistPlatformPlaylistDataLoader, SPTSnackbarConditionalPresenter;

@interface SPTFreeTierPlaylistAllSongsDataSource : NSObject <SPTFreeTierAllSongsHeaderEntityViewModelDelegate, SPTFreeTierAllSongsDataSource, SPTFreeTierPlaylistModelObserver>
{
    _Bool _contextAwareEnabled;
    id <SPTFreeTierAllSongsDataSourceDelegate> _dataSourceDelegate;
    id <SPTFreeTierPlaylistModel> _model;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTFreeTierPlaylistLogger *_logger;
    id <SPTFreeTierPlaylistModelEntity> _modelEntity;
    NSArray *_tracks;
    NSArray *_recommendations;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTFreeTierPlaylistTestManager> _testManager;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionSubscriptionToken;
    NSNumber *_numberTracks;
    NSNumber *_numberBannedTracks;
}

@property(retain, nonatomic) NSNumber *numberBannedTracks; // @synthesize numberBannedTracks=_numberBannedTracks;
@property(retain, nonatomic) NSNumber *numberTracks; // @synthesize numberTracks=_numberTracks;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionSubscriptionToken; // @synthesize collectionSubscriptionToken=_collectionSubscriptionToken;
@property(nonatomic, getter=isContextAwareEnabled) _Bool contextAwareEnabled; // @synthesize contextAwareEnabled=_contextAwareEnabled;
@property(retain, nonatomic) id <SPTFreeTierPlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(copy, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModelEntity> modelEntity; // @synthesize modelEntity=_modelEntity;
@property(readonly, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) __weak id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistModel> model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTFreeTierAllSongsDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
- (void).cxx_destruct;
- (id)contextURLForSection:(unsigned long long)arg1;
- (_Bool)isRecommendedSection:(unsigned long long)arg1;
- (id)trackEntityAtIndexPath:(id)arg1;
- (id)toggleBanForIndexPath:(id)arg1;
- (id)toggleLikeForIndexPath:(id)arg1;
- (id)toggleNegativeFeedbackForIndexPath:(id)arg1;
- (id)togglePositiveFeedbackForIndexPath:(id)arg1;
- (unsigned long long)trackFeedbackTypeForIndexPath:(id)arg1;
- (void)trackContextMenuDataForIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)albumNameForIndexPath:(id)arg1;
- (id)trackURIForIndexPath:(id)arg1;
- (void)playlistContainsTrackURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isTrackPremiumOnlyForIndexPath:(id)arg1;
- (_Bool)isTrackExplicitForIndexPath:(id)arg1;
- (_Bool)isTrackEnabledForIndexPath:(id)arg1;
- (_Bool)isSongLikedForIndexPath:(id)arg1;
- (_Bool)isSongBannedForIndexPath:(id)arg1;
- (id)trackPreviewIdentifierForIndexPath:(id)arg1;
- (id)imageURLForIndexPath:(id)arg1;
- (id)trackSubtitleAccessoryViewForIndexPath:(id)arg1;
- (id)artistNameForIndexPath:(id)arg1;
- (id)trackNameForIndexPath:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSectionsForAllSongs;
- (_Bool)shouldShowHeadersInAllSongss;
- (id)titleForAllSongs;
- (void)allSongsDataSourceLoads;
- (_Bool)hasDataSourceLoadedForAllSongs;
@property(retain, nonatomic) id <SPTFreeTierAllSongsHeaderEntityViewModel> headerEntityViewModel; // @dynamic headerEntityViewModel;
@property(readonly, nonatomic) _Bool hasHeader;
- (void)actionForAllSongsHeaderEntityViewModel:(id)arg1;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (_Bool)equalTracks:(id)arg1 otherTracks:(id)arg2;
- (id)initWithModel:(id)arg1 offlineModeState:(id)arg2 playlistDataLoader:(id)arg3 collectionPlatform:(id)arg4 testManager:(id)arg5 contextAwareEnabled:(_Bool)arg6 assistedCurationUIService:(id)arg7 snackbarPresenter:(id)arg8 logger:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

