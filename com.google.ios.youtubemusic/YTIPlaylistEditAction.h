//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface YTIPlaylistEditAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) _Bool addToTop; // @dynamic addToTop;
@property(copy, nonatomic) NSString *addedFullListId; // @dynamic addedFullListId;
@property(copy, nonatomic) NSString *addedVideoId; // @dynamic addedVideoId;
@property(nonatomic) _Bool allowEmbed; // @dynamic allowEmbed;
@property(copy, nonatomic) NSString *annotation; // @dynamic annotation;
@property(retain, nonatomic) NSMutableArray *autoAddRulesArray; // @dynamic autoAddRulesArray;
@property(readonly, nonatomic) unsigned long long autoAddRulesArray_Count; // @dynamic autoAddRulesArray_Count;
@property(nonatomic) _Bool closedToContributions; // @dynamic closedToContributions;
@property(copy, nonatomic) NSData *customThumbnailBytes; // @dynamic customThumbnailBytes;
@property(nonatomic) _Bool displaySegmented; // @dynamic displaySegmented;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasAddToTop; // @dynamic hasAddToTop;
@property(nonatomic) _Bool hasAddedFullListId; // @dynamic hasAddedFullListId;
@property(nonatomic) _Bool hasAddedVideoId; // @dynamic hasAddedVideoId;
@property(nonatomic) _Bool hasAllowEmbed; // @dynamic hasAllowEmbed;
@property(nonatomic) _Bool hasAnnotation; // @dynamic hasAnnotation;
@property(nonatomic) _Bool hasClosedToContributions; // @dynamic hasClosedToContributions;
@property(nonatomic) _Bool hasCustomThumbnailBytes; // @dynamic hasCustomThumbnailBytes;
@property(nonatomic) _Bool hasDisplaySegmented; // @dynamic hasDisplaySegmented;
@property(nonatomic) _Bool hasIsCourse; // @dynamic hasIsCourse;
@property(nonatomic) _Bool hasIsSegmentStart; // @dynamic hasIsSegmentStart;
@property(nonatomic) _Bool hasIsSeries; // @dynamic hasIsSeries;
@property(nonatomic) _Bool hasJoinCollaborationToken; // @dynamic hasJoinCollaborationToken;
@property(nonatomic) _Bool hasLanguageId; // @dynamic hasLanguageId;
@property(nonatomic) _Bool hasMovedSetVideoIdPredecessor; // @dynamic hasMovedSetVideoIdPredecessor;
@property(nonatomic) _Bool hasMovedSetVideoIdSuccessor; // @dynamic hasMovedSetVideoIdSuccessor;
@property(nonatomic) _Bool hasPlaylistDescription; // @dynamic hasPlaylistDescription;
@property(nonatomic) _Bool hasPlaylistName; // @dynamic hasPlaylistName;
@property(nonatomic) _Bool hasPlaylistPrivacy; // @dynamic hasPlaylistPrivacy;
@property(nonatomic) _Bool hasPlaylistVideoOrder; // @dynamic hasPlaylistVideoOrder;
@property(nonatomic) _Bool hasRemovedVideoId; // @dynamic hasRemovedVideoId;
@property(nonatomic) _Bool hasRevocableUnlistedToken; // @dynamic hasRevocableUnlistedToken;
@property(nonatomic) _Bool hasSetVideoId; // @dynamic hasSetVideoId;
@property(nonatomic) _Bool hasSourcePlaylistId; // @dynamic hasSourcePlaylistId;
@property(nonatomic) _Bool hasThumbnailVideoId; // @dynamic hasThumbnailVideoId;
@property(nonatomic) _Bool isCourse; // @dynamic isCourse;
@property(nonatomic) _Bool isSegmentStart; // @dynamic isSegmentStart;
@property(nonatomic) _Bool isSeries; // @dynamic isSeries;
@property(copy, nonatomic) NSString *joinCollaborationToken; // @dynamic joinCollaborationToken;
@property(copy, nonatomic) NSString *languageId; // @dynamic languageId;
@property(copy, nonatomic) NSString *movedSetVideoIdPredecessor; // @dynamic movedSetVideoIdPredecessor;
@property(copy, nonatomic) NSString *movedSetVideoIdSuccessor; // @dynamic movedSetVideoIdSuccessor;
@property(copy, nonatomic) NSString *playlistDescription; // @dynamic playlistDescription;
@property(copy, nonatomic) NSString *playlistName; // @dynamic playlistName;
@property(nonatomic) int playlistPrivacy; // @dynamic playlistPrivacy;
@property(nonatomic) unsigned int playlistVideoOrder; // @dynamic playlistVideoOrder;
@property(copy, nonatomic) NSString *removedVideoId; // @dynamic removedVideoId;
@property(copy, nonatomic) NSData *revocableUnlistedToken; // @dynamic revocableUnlistedToken;
@property(copy, nonatomic) NSString *setVideoId; // @dynamic setVideoId;
@property(copy, nonatomic) NSString *sourcePlaylistId; // @dynamic sourcePlaylistId;
@property(copy, nonatomic) NSString *thumbnailVideoId; // @dynamic thumbnailVideoId;
@property(retain, nonatomic) NSMutableArray *translationsArray; // @dynamic translationsArray;
@property(readonly, nonatomic) unsigned long long translationsArray_Count; // @dynamic translationsArray_Count;

@end

