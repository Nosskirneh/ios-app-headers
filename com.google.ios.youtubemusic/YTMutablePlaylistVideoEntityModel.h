//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTPlaylistVideoEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, YTChannelEntityModel, YTVideoEntityModel;

@interface YTMutablePlaylistVideoEntityModel : YTPlaylistVideoEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(retain, nonatomic) NSArray *parametersArray; // @dynamic parametersArray;
@property(nonatomic) _Bool videoAddedByContributor; // @dynamic videoAddedByContributor;
@property(retain, nonatomic) NSString *setVideoId; // @dynamic setVideoId;
@property(retain, nonatomic) YTChannelEntityModel *channelContributor; // @dynamic channelContributor;
@property(retain, nonatomic) YTVideoEntityModel *videoEntity; // @dynamic videoEntity;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly) Class superclass;

@end
