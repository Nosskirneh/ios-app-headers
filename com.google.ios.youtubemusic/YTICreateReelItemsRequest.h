//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTICreateReelItemsRequest_CreateReel, YTIInnerTubeContext, YTIVideoLink;

@interface YTICreateReelItemsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) YTICreateReelItemsRequest_CreateReel *createReel; // @dynamic createReel;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCreateReel; // @dynamic hasCreateReel;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasVideoLink; // @dynamic hasVideoLink;
@property(retain, nonatomic) NSMutableArray *playlistIdsArray; // @dynamic playlistIdsArray;
@property(readonly, nonatomic) unsigned long long playlistIdsArray_Count; // @dynamic playlistIdsArray_Count;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIVideoLink *videoLink; // @dynamic videoLink;

@end

