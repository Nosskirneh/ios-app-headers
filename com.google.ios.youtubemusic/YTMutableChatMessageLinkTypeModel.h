//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTChatMessageLinkTypeModel.h"

@class NSData, YTAddFromPhonebookLinkModel, YTContactEntityModel;

@interface YTMutableChatMessageLinkTypeModel : YTChatMessageLinkTypeModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) _Bool viewYouMayKnowLink; // @dynamic viewYouMayKnowLink;
@property(nonatomic) _Bool sendInviteLink; // @dynamic sendInviteLink;
@property(retain, nonatomic) YTAddFromPhonebookLinkModel *addFromPhonebookLink; // @dynamic addFromPhonebookLink;
@property(retain, nonatomic) NSData *text; // @dynamic text;
@property(retain, nonatomic) YTContactEntityModel *author; // @dynamic author;

@end

