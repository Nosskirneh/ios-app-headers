//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTChatHeaderEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSData, NSDictionary, NSString, YTContactEntityModel, YTThumbnailDetailsModel;

@interface YTMutableChatHeaderEntityModel : YTChatHeaderEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllShowcasedParticipantsArray;
- (void)removeShowcasedParticipantsArray:(id)arg1;
- (void)addShowcasedParticipantsArray:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(retain, nonatomic) NSData *readReceiptText; // @dynamic readReceiptText;
@property(nonatomic) int unreadCount; // @dynamic unreadCount;
@property(nonatomic) long long lastModified; // @dynamic lastModified;
@property(nonatomic) _Bool notificationsMuted; // @dynamic notificationsMuted;
@property(retain, nonatomic) YTThumbnailDetailsModel *videoThumbnail; // @dynamic videoThumbnail;
@property(retain, nonatomic) NSData *snippet; // @dynamic snippet;
@property(retain, nonatomic) NSData *title; // @dynamic title;
@property(retain, nonatomic) YTContactEntityModel *ownerKey; // @dynamic ownerKey;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly) Class superclass;

@end

