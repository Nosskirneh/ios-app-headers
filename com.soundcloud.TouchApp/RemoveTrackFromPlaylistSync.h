//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransactionSync.h"

@class PlaylistApi, Urn, UserPostedPlaylistRepository;

@interface RemoveTrackFromPlaylistSync : TransactionSync
{
    Urn *_playlistUrn;
    Urn *_trackUrn;
    PlaylistApi *_playlistApi;
    UserPostedPlaylistRepository *_userPostedPlaylistRepository;
}

@property(readonly, nonatomic) UserPostedPlaylistRepository *userPostedPlaylistRepository; // @synthesize userPostedPlaylistRepository=_userPostedPlaylistRepository;
@property(readonly, nonatomic) PlaylistApi *playlistApi; // @synthesize playlistApi=_playlistApi;
@property(readonly, nonatomic) Urn *trackUrn; // @synthesize trackUrn=_trackUrn;
@property(readonly, nonatomic) Urn *playlistUrn; // @synthesize playlistUrn=_playlistUrn;
- (void).cxx_destruct;
- (id)rollbackSignal;
- (id)apiSignal;
- (id)saveSignal;
- (id)initWithPlaylistUrn:(id)arg1 trackUrn:(id)arg2 userPostedPlaylistRepository:(id)arg3 api:(id)arg4;

@end

