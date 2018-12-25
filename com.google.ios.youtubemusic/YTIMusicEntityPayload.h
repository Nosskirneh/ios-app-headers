//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMusicAlbumReleaseDetailEntity, YTIMusicAlbumReleaseEntity, YTIMusicAlbumReleaseUserDetailEntity, YTIMusicArtistDetailEntity, YTIMusicArtistEntity, YTIMusicArtistUserDetailEntity, YTIMusicCollectionEntity, YTIMusicPlaylistDetailEntity, YTIMusicPlaylistEntity, YTIMusicPlaylistEntryCollectionEntity, YTIMusicPlaylistUserDetailEntity, YTIMusicTrackDetailEntity, YTIMusicTrackEntity, YTIMusicTrackUserDetailEntity;

@interface YTIMusicEntityPayload : GPBMessage
{
}

+ (id)descriptor;
- (id)ytm_entityModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) YTIMusicAlbumReleaseEntity *albumRelease; // @dynamic albumRelease;
@property(retain, nonatomic) YTIMusicAlbumReleaseDetailEntity *albumReleaseDetail; // @dynamic albumReleaseDetail;
@property(retain, nonatomic) YTIMusicAlbumReleaseUserDetailEntity *albumReleaseUserDetail; // @dynamic albumReleaseUserDetail;
@property(retain, nonatomic) YTIMusicArtistEntity *artist; // @dynamic artist;
@property(retain, nonatomic) YTIMusicArtistDetailEntity *artistDetail; // @dynamic artistDetail;
@property(retain, nonatomic) YTIMusicArtistUserDetailEntity *artistUserDetail; // @dynamic artistUserDetail;
@property(retain, nonatomic) YTIMusicCollectionEntity *collection; // @dynamic collection;
@property(readonly, nonatomic) int entityOneOfCase; // @dynamic entityOneOfCase;
@property(retain, nonatomic) YTIMusicPlaylistEntity *playlist; // @dynamic playlist;
@property(retain, nonatomic) YTIMusicPlaylistDetailEntity *playlistDetail; // @dynamic playlistDetail;
@property(retain, nonatomic) YTIMusicPlaylistEntryCollectionEntity *playlistEntryCollection; // @dynamic playlistEntryCollection;
@property(retain, nonatomic) YTIMusicPlaylistUserDetailEntity *playlistUserDetail; // @dynamic playlistUserDetail;
@property(retain, nonatomic) YTIMusicTrackEntity *track; // @dynamic track;
@property(retain, nonatomic) YTIMusicTrackDetailEntity *trackDetail; // @dynamic trackDetail;
@property(retain, nonatomic) YTIMusicTrackUserDetailEntity *trackUserDetail; // @dynamic trackUserDetail;

@end

