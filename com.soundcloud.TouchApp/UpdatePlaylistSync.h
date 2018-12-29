//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransactionSync.h"

@class PlaylistApi, PlaylistRepository, Urn;

@interface UpdatePlaylistSync : TransactionSync
{
    _Bool _isPublic;
    Urn *_playlistUrn;
    PlaylistApi *_playlistApi;
    PlaylistRepository *_playlistRepository;
}

@property(readonly, nonatomic) PlaylistRepository *playlistRepository; // @synthesize playlistRepository=_playlistRepository;
@property(readonly, nonatomic) PlaylistApi *playlistApi; // @synthesize playlistApi=_playlistApi;
@property(readonly, nonatomic) _Bool isPublic; // @synthesize isPublic=_isPublic;
@property(readonly, nonatomic) Urn *playlistUrn; // @synthesize playlistUrn=_playlistUrn;
- (void).cxx_destruct;
- (id)updatePlaylistInfo:(id)arg1;
- (id)rollbackSignal;
- (id)apiSignal;
- (id)saveSignal;
- (id)initWithPlaylistUrn:(id)arg1 isPublic:(_Bool)arg2 playlistApi:(id)arg3 playlistRepository:(id)arg4;

@end
