//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIThumbnailDetails;

@interface YTIMusicPlaylistEntity : GPBMessage
{
}

+ (id)descriptor;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *androidMediaStoreContentUri; // @dynamic androidMediaStoreContentUri;
@property(copy, nonatomic) NSString *details; // @dynamic details;
@property(copy, nonatomic) NSString *entryCollection; // @dynamic entryCollection;
@property(nonatomic) long long estimatedPlayDuration; // @dynamic estimatedPlayDuration;
@property(nonatomic) long long estimatedPlayableTrackCount; // @dynamic estimatedPlayableTrackCount;
@property(copy, nonatomic) NSString *fullListId; // @dynamic fullListId;
@property(nonatomic) _Bool hasAndroidMediaStoreContentUri; // @dynamic hasAndroidMediaStoreContentUri;
@property(nonatomic) _Bool hasDetails; // @dynamic hasDetails;
@property(nonatomic) _Bool hasEntryCollection; // @dynamic hasEntryCollection;
@property(nonatomic) _Bool hasEstimatedPlayDuration; // @dynamic hasEstimatedPlayDuration;
@property(nonatomic) _Bool hasEstimatedPlayableTrackCount; // @dynamic hasEstimatedPlayableTrackCount;
@property(nonatomic) _Bool hasFullListId; // @dynamic hasFullListId;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasOwnerDisplayName; // @dynamic hasOwnerDisplayName;
@property(nonatomic) _Bool hasThumbnailDetails; // @dynamic hasThumbnailDetails;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUserDetails; // @dynamic hasUserDetails;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *ownerDisplayName; // @dynamic ownerDisplayName;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnailDetails; // @dynamic thumbnailDetails;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *userDetails; // @dynamic userDetails;

@end

