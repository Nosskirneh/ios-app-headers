//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaseDAO, PlaylistRepository, YouRepository;

@interface LikePlaylistRepository : NSObject
{
    YouRepository *_youRepository;
    PlaylistRepository *_playlistRepository;
    BaseDAO *_userLikedPlaylistDAO;
    BaseDAO *_userPostedOrLikedPlaylistDAO;
}

@property(readonly, nonatomic) BaseDAO *userPostedOrLikedPlaylistDAO; // @synthesize userPostedOrLikedPlaylistDAO=_userPostedOrLikedPlaylistDAO;
@property(readonly, nonatomic) BaseDAO *userLikedPlaylistDAO; // @synthesize userLikedPlaylistDAO=_userLikedPlaylistDAO;
@property(readonly, nonatomic) PlaylistRepository *playlistRepository; // @synthesize playlistRepository=_playlistRepository;
@property(readonly, nonatomic) YouRepository *youRepository; // @synthesize youRepository=_youRepository;
- (void).cxx_destruct;
- (id)removeUserPostedOrLikedPlaylist:(id)arg1 you:(id)arg2;
- (id)removeUserLikedPlaylist:(id)arg1 you:(id)arg2;
- (id)removeLikeWithPlaylist:(id)arg1 you:(id)arg2;
- (id)minIndexForUserPostedOrLikedPlaylist:(id)arg1;
- (id)findOrBuildUserPostedOrLikedPlaylist:(id)arg1 you:(id)arg2;
- (id)findOrBuildUserLikedPlaylist:(id)arg1 you:(id)arg2;
- (id)playlistForUrn:(id)arg1;
- (id)findOrBuildLikeWithPlaylist:(id)arg1 you:(id)arg2;
- (id)unlikePlaylistUrn:(id)arg1;
- (id)likePlaylistUrn:(id)arg1;
- (id)findOrBuildUserLikedPlaylistWithPlaylist:(id)arg1 user:(id)arg2 manipulator:(CDUnknownBlockType)arg3;
- (id)controller;
- (id)initWithYouRepository:(id)arg1 playlistRepository:(id)arg2 userLikedPlaylistDAO:(id)arg3 userPostedOrLikedPlaylistDAO:(id)arg4;
- (id)initWithController:(id)arg1;

@end

