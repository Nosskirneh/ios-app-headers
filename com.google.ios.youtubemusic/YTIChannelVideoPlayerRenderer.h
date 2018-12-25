//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIFormattedString, YTIStandaloneBadgeSupportedRenderers;

@interface YTIChannelVideoPlayerRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasPublishedTimeText; // @dynamic hasPublishedTimeText;
@property(nonatomic) _Bool hasReadMoreText; // @dynamic hasReadMoreText;
@property(nonatomic) _Bool hasStandaloneBadge; // @dynamic hasStandaloneBadge;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(retain, nonatomic) YTIFormattedString *publishedTimeText; // @dynamic publishedTimeText;
@property(retain, nonatomic) YTIFormattedString *readMoreText; // @dynamic readMoreText;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge; // @dynamic standaloneBadge;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end
