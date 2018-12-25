//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIFormattedString, YTIOfflineCandidateSupportedRenderers, YTIOfflineChannelSupportedDatas, YTIThumbnailDetails;

@interface YTIOfflineVideoData : GPBMessage
{
}

+ (id)descriptor;
- (id)video;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalMetadatasArray; // @dynamic additionalMetadatasArray;
@property(readonly, nonatomic) unsigned long long additionalMetadatasArray_Count; // @dynamic additionalMetadatasArray_Count;
@property(retain, nonatomic) YTIOfflineCandidateSupportedRenderers *candidateRenderers; // @dynamic candidateRenderers;
@property(retain, nonatomic) YTIOfflineChannelSupportedDatas *channel; // @dynamic channel;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *dislikesCount; // @dynamic dislikesCount;
@property(nonatomic) _Bool hasCandidateRenderers; // @dynamic hasCandidateRenderers;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDislikesCount; // @dynamic hasDislikesCount;
@property(nonatomic) _Bool hasHideViewCount; // @dynamic hasHideViewCount;
@property(nonatomic) _Bool hasLengthSeconds; // @dynamic hasLengthSeconds;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasLikesCount; // @dynamic hasLikesCount;
@property(nonatomic) _Bool hasPublishedTimestamp; // @dynamic hasPublishedTimestamp;
@property(nonatomic) _Bool hasShareURL; // @dynamic hasShareURL;
@property(nonatomic) _Bool hasShortViewCountText; // @dynamic hasShortViewCountText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewCount; // @dynamic hasViewCount;
@property(nonatomic) _Bool hideViewCount; // @dynamic hideViewCount;
@property(nonatomic) long long lengthSeconds; // @dynamic lengthSeconds;
@property(copy, nonatomic) NSString *lengthText; // @dynamic lengthText;
@property(copy, nonatomic) NSString *likesCount; // @dynamic likesCount;
@property(nonatomic) long long publishedTimestamp; // @dynamic publishedTimestamp;
@property(copy, nonatomic) NSString *shareURL; // @dynamic shareURL;
@property(copy, nonatomic) NSString *shortViewCountText; // @dynamic shortViewCountText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(nonatomic) long long viewCount; // @dynamic viewCount;

@end

