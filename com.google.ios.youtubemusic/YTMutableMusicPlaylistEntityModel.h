//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMusicPlaylistEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSData, NSDictionary, NSString, YTMusicPlaylistDetailEntityModel, YTMusicPlaylistEntryCollectionEntityModel, YTMusicPlaylistUserDetailEntityModel, YTThumbnailDetailsModel;

@interface YTMutableMusicPlaylistEntityModel : YTMusicPlaylistEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(retain, nonatomic) NSString *androidMediaStoreContentUri; // @dynamic androidMediaStoreContentUri;
@property(nonatomic) long long estimatedPlayDuration; // @dynamic estimatedPlayDuration;
@property(nonatomic) long long estimatedPlayableTrackCount; // @dynamic estimatedPlayableTrackCount;
@property(retain, nonatomic) NSString *ownerDisplayName; // @dynamic ownerDisplayName;
@property(retain, nonatomic) YTThumbnailDetailsModel *thumbnailDetails; // @dynamic thumbnailDetails;
@property(retain, nonatomic) NSString *fullListId; // @dynamic fullListId;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) YTMusicPlaylistEntryCollectionEntityModel *entryCollection; // @dynamic entryCollection;
@property(retain, nonatomic) YTMusicPlaylistDetailEntityModel *details; // @dynamic details;
@property(retain, nonatomic) YTMusicPlaylistUserDetailEntityModel *userDetails; // @dynamic userDetails;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly) Class superclass;

@end

