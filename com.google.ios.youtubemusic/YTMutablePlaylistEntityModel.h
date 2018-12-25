//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTPlaylistEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, YTChannelEntityModel, YTThumbnailDetailsModel;

@interface YTMutablePlaylistEntityModel : YTPlaylistEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllVideosArray;
- (void)removeVideosArray:(id)arg1;
- (void)addVideosArray:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(retain, nonatomic) NSArray *parametersArray; // @dynamic parametersArray;
@property(nonatomic) int videoCount; // @dynamic videoCount;
@property(retain, nonatomic) YTThumbnailDetailsModel *thumbnail; // @dynamic thumbnail;
@property(nonatomic) int visibility; // @dynamic visibility;
@property(retain, nonatomic) NSData *shortDescription; // @dynamic shortDescription;
@property(retain, nonatomic) NSData *description_p; // @dynamic description_p;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) YTChannelEntityModel *ownerChannel; // @dynamic ownerChannel;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly) Class superclass;

@end

