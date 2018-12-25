//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMusicAlbumReleaseEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSData, NSDictionary, NSString, YTDateModel, YTLoggingDirectivesModel, YTMusicAlbumReleaseContentRatingModel, YTMusicAlbumReleaseDetailEntityModel, YTMusicAlbumReleaseUserDetailEntityModel, YTThumbnailDetailsModel;

@interface YTMutableMusicAlbumReleaseEntityModel : YTMusicAlbumReleaseEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllPrimaryArtistsArray;
- (void)removePrimaryArtistsArray:(id)arg1;
- (void)addPrimaryArtistsArray:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(retain, nonatomic) YTLoggingDirectivesModel *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) NSString *androidMediaStoreContentUri; // @dynamic androidMediaStoreContentUri;
@property(retain, nonatomic) NSString *radioAutomixPlaylistId; // @dynamic radioAutomixPlaylistId;
@property(retain, nonatomic) NSString *radioPlaylistMixPlaylistId; // @dynamic radioPlaylistMixPlaylistId;
@property(retain, nonatomic) NSString *likeTargetPlaylistId; // @dynamic likeTargetPlaylistId;
@property(nonatomic) int releaseType; // @dynamic releaseType;
@property(retain, nonatomic) YTMusicAlbumReleaseContentRatingModel *contentRating; // @dynamic contentRating;
@property(retain, nonatomic) YTDateModel *releaseDate; // @dynamic releaseDate;
@property(nonatomic) long long durationMs; // @dynamic durationMs;
@property(nonatomic) long long trackCount; // @dynamic trackCount;
@property(retain, nonatomic) NSString *audioPlaylistId; // @dynamic audioPlaylistId;
@property(retain, nonatomic) NSString *artistDisplayName; // @dynamic artistDisplayName;
@property(retain, nonatomic) YTThumbnailDetailsModel *thumbnailDetails; // @dynamic thumbnailDetails;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) YTMusicAlbumReleaseUserDetailEntityModel *userDetails; // @dynamic userDetails;
@property(retain, nonatomic) YTMusicAlbumReleaseDetailEntityModel *details; // @dynamic details;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly) Class superclass;

@end

