//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIMusicEntityReference : GPBMessage
{
}

+ (id)descriptor;
- (id)ytm_entityCacheKey;

// Remaining properties
@property(readonly, nonatomic) int entityIdOneOfCase; // @dynamic entityIdOneOfCase;
@property(nonatomic) _Bool hasMusicAlbumReleaseContainer; // @dynamic hasMusicAlbumReleaseContainer;
@property(copy, nonatomic) NSString *musicAlbumReleaseContainer; // @dynamic musicAlbumReleaseContainer;
@property(copy, nonatomic) NSString *musicAlbumReleaseDetailEntity; // @dynamic musicAlbumReleaseDetailEntity;
@property(copy, nonatomic) NSString *musicAlbumReleaseEntity; // @dynamic musicAlbumReleaseEntity;
@property(copy, nonatomic) NSString *musicAlbumReleaseUserDetailEntity; // @dynamic musicAlbumReleaseUserDetailEntity;
@property(copy, nonatomic) NSString *musicArtistDetailEntity; // @dynamic musicArtistDetailEntity;
@property(copy, nonatomic) NSString *musicArtistEntity; // @dynamic musicArtistEntity;
@property(copy, nonatomic) NSString *musicArtistUserDetailEntity; // @dynamic musicArtistUserDetailEntity;
@property(copy, nonatomic) NSString *musicCollectionEntity; // @dynamic musicCollectionEntity;
@property(copy, nonatomic) NSString *musicPlaylistDetailEntity; // @dynamic musicPlaylistDetailEntity;
@property(copy, nonatomic) NSString *musicPlaylistEntity; // @dynamic musicPlaylistEntity;
@property(copy, nonatomic) NSString *musicPlaylistEntryCollectionEntity; // @dynamic musicPlaylistEntryCollectionEntity;
@property(copy, nonatomic) NSString *musicPlaylistUserDetailEntity; // @dynamic musicPlaylistUserDetailEntity;
@property(copy, nonatomic) NSString *musicTrackDetailEntity; // @dynamic musicTrackDetailEntity;
@property(copy, nonatomic) NSString *musicTrackEntity; // @dynamic musicTrackEntity;
@property(copy, nonatomic) NSString *musicTrackUserDetailEntity; // @dynamic musicTrackUserDetailEntity;

@end

