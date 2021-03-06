//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMusicTrackEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSData, NSDictionary, NSString, YTLoggingDirectivesModel, YTMusicAlbumReleaseEntityModel, YTMusicTrackContentRatingModel, YTMusicTrackDetailEntityModel, YTMusicTrackUserDetailEntityModel, YTThumbnailDetailsModel;

@interface YTMutableMusicTrackEntityModel : YTMusicTrackEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllArtistsArray;
- (void)removeArtistsArray:(id)arg1;
- (void)addArtistsArray:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(retain, nonatomic) YTLoggingDirectivesModel *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) YTMusicTrackContentRatingModel *contentRating; // @dynamic contentRating;
@property(nonatomic) long long lengthMs; // @dynamic lengthMs;
@property(nonatomic) long long albumTrackIndex; // @dynamic albumTrackIndex;
@property(retain, nonatomic) NSString *androidMediaStoreContentUri; // @dynamic androidMediaStoreContentUri;
@property(retain, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) NSString *artistNames; // @dynamic artistNames;
@property(retain, nonatomic) YTThumbnailDetailsModel *thumbnailDetails; // @dynamic thumbnailDetails;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) YTMusicAlbumReleaseEntityModel *albumRelease; // @dynamic albumRelease;
@property(retain, nonatomic) YTMusicTrackDetailEntityModel *details; // @dynamic details;
@property(retain, nonatomic) YTMusicTrackUserDetailEntityModel *userDetails; // @dynamic userDetails;
@property(retain, nonatomic) YTMusicTrackEntityModel *videoModeVersion; // @dynamic videoModeVersion;
@property(retain, nonatomic) YTMusicTrackEntityModel *audioModeVersion; // @dynamic audioModeVersion;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly) Class superclass;

@end

