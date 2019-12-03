//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXMediaLibrarySource.h"

@interface VOXSoundCloudSource : VOXMediaLibrarySource
{
}

- (void)cleanedLocalStorage:(id)arg1;
- (id)recreationInfoForTrackEntity:(id)arg1;
- (void)recreateTracksAsStandaloneWithInfo:(id)arg1;
- (void)removeNonexistentUserPlaylistTracks:(id)arg1;
- (void)saveUserPlaylistModels:(id)arg1;
- (void)removeNonexistentLikedTracks:(id)arg1 recreateCollectionTracks:(_Bool)arg2;
- (void)saveLikedModels:(id)arg1 removeNonexistentTracks:(_Bool)arg2;
- (void)syncUserPlaylists;
- (void)removeTrackFromLibrary:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (void)removeSoundCloudAlbumFromLibrary:(id)arg1;
- (void)unlikeModelInLibrary:(id)arg1 remove:(_Bool)arg2;
- (void)addLikedModelToLibrary:(id)arg1;
- (void)syncUserLikesWithOffset:(unsigned long long)arg1;
- (void)synchronize;
- (id)initWithContext:(id)arg1 delegateQueue:(id)arg2;

@end
