//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTChatMessageSetPageDataModel.h"

@class NSData, NSString;

@interface YTMutableChatMessageSetPageDataModel : YTChatMessageSetPageDataModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSData *nextPageToken; // @dynamic nextPageToken;
@property(retain, nonatomic) NSString *conversationId; // @dynamic conversationId;

@end
