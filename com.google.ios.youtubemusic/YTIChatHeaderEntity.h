//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIThumbnailDetails;

@interface YTIChatHeaderEntity : GPBMessage
{
}

+ (id)descriptor;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasLastModified; // @dynamic hasLastModified;
@property(nonatomic) _Bool hasNotificationsMuted; // @dynamic hasNotificationsMuted;
@property(nonatomic) _Bool hasOwnerKey; // @dynamic hasOwnerKey;
@property(nonatomic) _Bool hasReadReceiptText; // @dynamic hasReadReceiptText;
@property(nonatomic) _Bool hasSnippet; // @dynamic hasSnippet;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUnreadCount; // @dynamic hasUnreadCount;
@property(nonatomic) _Bool hasVideoThumbnail; // @dynamic hasVideoThumbnail;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) long long lastModified; // @dynamic lastModified;
@property(nonatomic) _Bool notificationsMuted; // @dynamic notificationsMuted;
@property(copy, nonatomic) NSString *ownerKey; // @dynamic ownerKey;
@property(copy, nonatomic) NSData *readReceiptText; // @dynamic readReceiptText;
@property(retain, nonatomic) NSMutableArray *showcasedParticipantsArray; // @dynamic showcasedParticipantsArray;
@property(readonly, nonatomic) unsigned long long showcasedParticipantsArray_Count; // @dynamic showcasedParticipantsArray_Count;
@property(copy, nonatomic) NSData *snippet; // @dynamic snippet;
@property(copy, nonatomic) NSData *title; // @dynamic title;
@property(nonatomic) int unreadCount; // @dynamic unreadCount;
@property(retain, nonatomic) YTIThumbnailDetails *videoThumbnail; // @dynamic videoThumbnail;

@end

