//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlaylistServicing-Protocol.h"
#import "PlaylistSyncService-Protocol.h"

@class NSString, PlaylistRepository, SyncNotifier, Urn;
@protocol OfflineUserConfigDataSourcing;

@interface PlaylistService : NSObject <PlaylistServicing, PlaylistSyncService>
{
    Urn *_playlistUrn;
    SyncNotifier *_syncNotifier;
    PlaylistRepository *_playlistRepository;
    id <OfflineUserConfigDataSourcing> _offlineUserConfigRepository;
}

@property(readonly, nonatomic) id <OfflineUserConfigDataSourcing> offlineUserConfigRepository; // @synthesize offlineUserConfigRepository=_offlineUserConfigRepository;
@property(readonly, nonatomic) PlaylistRepository *playlistRepository; // @synthesize playlistRepository=_playlistRepository;
@property(readonly, nonatomic) SyncNotifier *syncNotifier; // @synthesize syncNotifier=_syncNotifier;
@property(readonly, nonatomic) Urn *playlistUrn; // @synthesize playlistUrn=_playlistUrn;
- (void).cxx_destruct;
- (id)playlistRemoveData;
- (id)playlistUpdateDataForPublic:(_Bool)arg1;
- (id)syncWithData:(id)arg1;
- (id)loadDataForPlaylist;
- (void)updatePlaylistToPublic:(_Bool)arg1;
- (void)updatePlaylistToPublic:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePlaylistFromOfflineSync;
- (void)addPlaylistToOfflineSync;
- (void)remove;
- (void)setPublic;
- (void)setPublicWithCompletion:(CDUnknownBlockType)arg1;
- (void)setPrivate;
- (void)setPrivateWithCompletion:(CDUnknownBlockType)arg1;
- (id)playlistForUrn:(id)arg1;
- (id)paginationConfig;
- (_Bool)hasMoreData;
- (CDUnknownBlockType)refresh:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)forceRefresh;
- (id)softRefresh;
- (id)paginate;
- (id)initWithPlaylistUrn:(id)arg1 syncNotifier:(id)arg2 playlistRepository:(id)arg3 offlineUserConfigRepository:(id)arg4;
- (id)initWithPlaylistUrn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

